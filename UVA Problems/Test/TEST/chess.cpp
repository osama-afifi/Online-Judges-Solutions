//#include	<stdio.h>
//#include	<limits.h>
//#include	<stdlib.h>
//
//// 对棋子的分布我们这样描述，如下图：
////
////	6 3 4 5 7       
////	0 0 0 0
////	1 0 0 0   
////	2 0 0 0
////	
//// 我们用0表示九个格子，把所有三个子可以连成的直线标号为 0 - 7。
//// 三条横线为 0 - 2， 三条竖线为 3 - 5， 斜下为 6， 斜上为 7。
//// 这样我们用一个八个元素的数组表示对于一位选手来说各条线的状态，每个元素描述一条线。
//// 该元素取 0 表示没有对手的棋子在这条线上。对于横线和斜线自左向右标号为 0 1 2。
//// 不同标号位置上落有对方的棋子用不同的值（1，2，4）表示。（取值保证或运算没有冲突）
//// 这样对应的标号位置落了对方棋子则 将现有状态 或上 这个值，表示该子的存在。
//// 竖线自上向下标号。这样当state[player][i] == (1+2+4) 时 i 这条线满，player的对手获胜。
//// 当state[player][i] == 0 时表示 i 这条线对 该 player 开放。
//
//#define	TableSize	3
//#define	MAX		1				// Max的标号，也表示Max的棋子
//#define MIN		0
//#define	UnSetted	2				// 未落子
//#define	NoPoint		4				// 指示Max已经没有赢棋的落子点
//
//#define	LineFull	(1+2+4)				
//#define	INFINITE	INT_MAX	
//	
//#define	LineNumber	(TableSize * 2 + 2)
//#define	GridNumber	(TableSize * TableSize)
//
//#define	PeerPlayer(player)	((player + 1) % 2)	// 获得对手编号	
//
//static	int	Sign[TableSize] = {1, 2, 4};
//static	char	Chessman[3] = {'o', '*', '?'};		// 显示的棋子，程序总是Max，执 * 子
//int	beststep[2];					// 保存最好的落子点 
//int	glDepth;					// 计算深度
//
//typedef	struct position
//{
//	char	table[TableSize][TableSize];
//	int	LineState[2][LineNumber];		// 对于Max和Min来说8条线的状况
//	int	player;					// 此位置处将落子者。 Max = 1	-- Min = 0
//	int	laststep[2];				// 上一步落子的点
//}position;
//
//void	FixState(position * postemp, int x, int y)
//{
//	postemp->LineState[postemp->player][x] |= Sign[y];		// 横线
//	postemp->LineState[postemp->player][y+TableSize] |= Sign[x];	// 竖线
//	if(x == y)
//	{
//		postemp->LineState[postemp->player][2*TableSize] |= Sign[y];	// 斜向下线
//	}
//			
//	if(x+y == TableSize-1)
//	{
//		postemp->LineState[postemp->player][2*TableSize+1] |= Sign[y];	// 斜向上线
//	}
//}
//
//void	GetPoint(const position * pos, int *x, int *y)
//{
//	while(1)
//	{
//		printf("\n请输入您落子的坐标(0 至 2):\n");
//
//		scanf("%d %d", x, y);
//
//		if((*x>=0 && *x<TableSize) && (*y>=0 && *y<TableSize) && (pos->table[*x][*y] == UnSetted))
//		{
//			break;
//		}
//		else
//		{
//			printf("您的输入不合法.\n");
//		}
//	}
//}
//
//void	SetPoint(position * pos, int x, int y, int point)
//{
//	pos->table[x][y] = point;
//	pos->laststep[0] = x;
//	pos->laststep[1] = y;
//	pos->player = PeerPlayer(point);	// 对手将落子
//			
//	FixState(pos, x, y);		
//}
//
//void	Successors(const position *pos, void * succset[GridNumber])
//{
//	int	i, j, m, n;
//	int	elenum = 0;
//	position * postemp;
//
//	for(i=0; i<GridNumber; i++)
//	{
//		succset[i] = NULL;
//	}
//
//	for(i=0; i<TableSize; i++) 
//		for(j=0; j<TableSize; j++)
//		{
//			if(pos->table[i][j] == UnSetted)
//			{
//				postemp = (position *) malloc(sizeof(struct position));
//				
//				for(m=0; m<TableSize; m++)
//					for(n=0; n<TableSize; n++)
//					{
//						postemp->table[m][n] = pos->table[m][n];
//					}
//			
//				for(m=0; m<2; m++)
//					for(n=0; n<LineNumber; n++)
//					{
//						postemp->LineState[m][n] = pos->LineState[m][n];
//					}
//				
//				SetPoint(postemp, i, j, pos->player);
//			
//				succset[elenum++] = postemp;
//			}
//		}
//
//}
//
//int	Evaluate(const position *pos)
//{
//	int	i;
//	int	maxnum = 0;
//	int	minnum = 0;
//
//	for(i=0; i<LineNumber; i++)
//	{
//		if(pos->LineState[MAX][i] == 0)
//		{
//			maxnum ++;
//		}
//		else if(pos->LineState[MAX][i] == LineFull)
//		{
//			return	-INFINITE;	// min胜利
//		}
//
//		if(pos->LineState[MIN][i] == 0)
//		{
//			minnum ++;
//		}
//		else if(pos->LineState[MIN][i] == LineFull)
//		{
//			return	INFINITE;	// max 胜利
//		}
//	}
//
//	return maxnum - minnum;
//}
//
//int	AlphaBeta(const position * pos, int depth, int Alpha, int Beta)
//{
//	int	i;
//	int	best;
//	int	value;
//	void	*succ[GridNumber];
//	position *postemp;
//	
//	if(depth == 0)
//		return Evaluate(pos);
//	
//	best = -INFINITE;
//	
//	Successors(pos, succ);
//
//	for(i=0; (succ[i] != NULL) && (best < Beta) && (i < GridNumber); i++)
//	{
//		postemp = (position *) succ[i];	
//			
//		if(best > Alpha)
//		{
//			Alpha = best;
//		}
//
//		value = -AlphaBeta(postemp, depth-1, -Beta, -Alpha);
//
//		if(value > best)
//		{
//			best = value;
//			if(depth == glDepth)
//			{
//				beststep[0] = postemp->laststep[0];
//				beststep[1] = postemp->laststep[1];
//			}
//		}
//
//	}
//
//	for(i=0; (succ[i] != NULL) && (i < GridNumber); i++)
//	{
//		free(succ[i]);
//	}
//	
//	return best;
//}
//
//void	InitPos(position * pos)
//{
//	int	i, j;
//
//	for(i=0; i<TableSize; i++)
//		for(j=0; j<TableSize; j++)
//		{
//			pos->table[i][j] = UnSetted;
//		}
//
//	for(i=0; i<2; i++)
//		for(j=0; j<LineNumber; j++)
//		{
//			pos->LineState[i][j] = 0;
//		}
//}
//
//void	PrintTable(char table[TableSize][TableSize])
//{
//	int	i, j;
//
//	printf("\n");
//	for(i=0; i<TableSize; i++)
//	{
//		for(j=0; j<TableSize; j++)
//		{
//			printf("%c ", Chessman[table[i][j]]);		
//		}
//		printf("\n");
//	}
//	printf("\n");
//}
//
//int	main()
//{
//	position	posi;
//	int	choice;
//	int	x, y;
//	int	chessnum;
//	int	evatemp;
//
//	glDepth = 2;
//	while(1)
//	{
//		InitPos(&posi);
//		chessnum = 0; 
//		beststep[0] = beststep[1] = NoPoint;
//
//		printf("\n===井字棋对弈开始===\n");
//		printf("\n请您选择先手(0)还是后手(1):\n");
//		scanf("%d", &choice);
//
//		posi.player = MAX;
//
//		if(choice == 0)
//		{
//			GetPoint(&posi, &x, &y);
//			SetPoint(&posi, x, y, MIN);
//			chessnum ++;
//			PrintTable(posi.table);
//		}
//
//		while(1)
//		{
//			if(posi.player == MAX)
//			{
//				AlphaBeta(&posi, glDepth, -INFINITE, INFINITE);
//
//				if((beststep[0] == NoPoint) || (beststep[1] == NoPoint))
//				{
//					printf("我输了。\n");		// 预测性质的认输
//					break;
//				}
//
//				x = beststep[0];
//				y = beststep[1];
//
//				beststep[0] = beststep[1] = NoPoint;	// 还原全局变量 
//			}
//			else
//			{
//				GetPoint(&posi, &x, &y);
//			}
//			
//			SetPoint(&posi, x, y, posi.player);
//			chessnum ++;
//			PrintTable(posi.table);
//
//			if((evatemp = Evaluate(&posi)) == INFINITE)
//			{
//				printf("您输了.\n");
//				break;
//			}
//			else if(evatemp == -INFINITE)
//			{
//				printf("您赢了。\n");
//				break;
//			}
//		
//			if(chessnum == GridNumber)		
//			{
//				printf("和棋.\n");
//				break;
//			}
//		}
//	}
//
//	return 0;
//}
