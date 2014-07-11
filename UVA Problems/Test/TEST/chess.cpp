//#include	<stdio.h>
//#include	<limits.h>
//#include	<stdlib.h>
//
//// �����ӵķֲ�������������������ͼ��
////
////	6 3 4 5 7       
////	0 0 0 0
////	1 0 0 0   
////	2 0 0 0
////	
//// ������0��ʾ�Ÿ����ӣ������������ӿ������ɵ�ֱ�߱��Ϊ 0 - 7��
//// ��������Ϊ 0 - 2�� ��������Ϊ 3 - 5�� б��Ϊ 6�� б��Ϊ 7��
//// ����������һ���˸�Ԫ�ص������ʾ����һλѡ����˵�����ߵ�״̬��ÿ��Ԫ������һ���ߡ�
//// ��Ԫ��ȡ 0 ��ʾû�ж��ֵ��������������ϡ����ں��ߺ�б���������ұ��Ϊ 0 1 2��
//// ��ͬ���λ�������жԷ��������ò�ͬ��ֵ��1��2��4����ʾ����ȡֵ��֤������û�г�ͻ��
//// ������Ӧ�ı��λ�����˶Է������� ������״̬ ���� ���ֵ����ʾ���ӵĴ��ڡ�
//// �����������±�š�������state[player][i] == (1+2+4) ʱ i ����������player�Ķ��ֻ�ʤ��
//// ��state[player][i] == 0 ʱ��ʾ i �����߶� �� player ���š�
//
//#define	TableSize	3
//#define	MAX		1				// Max�ı�ţ�Ҳ��ʾMax������
//#define MIN		0
//#define	UnSetted	2				// δ����
//#define	NoPoint		4				// ָʾMax�Ѿ�û��Ӯ������ӵ�
//
//#define	LineFull	(1+2+4)				
//#define	INFINITE	INT_MAX	
//	
//#define	LineNumber	(TableSize * 2 + 2)
//#define	GridNumber	(TableSize * TableSize)
//
//#define	PeerPlayer(player)	((player + 1) % 2)	// ��ö��ֱ��	
//
//static	int	Sign[TableSize] = {1, 2, 4};
//static	char	Chessman[3] = {'o', '*', '?'};		// ��ʾ�����ӣ���������Max��ִ * ��
//int	beststep[2];					// ������õ����ӵ� 
//int	glDepth;					// �������
//
//typedef	struct position
//{
//	char	table[TableSize][TableSize];
//	int	LineState[2][LineNumber];		// ����Max��Min��˵8���ߵ�״��
//	int	player;					// ��λ�ô��������ߡ� Max = 1	-- Min = 0
//	int	laststep[2];				// ��һ�����ӵĵ�
//}position;
//
//void	FixState(position * postemp, int x, int y)
//{
//	postemp->LineState[postemp->player][x] |= Sign[y];		// ����
//	postemp->LineState[postemp->player][y+TableSize] |= Sign[x];	// ����
//	if(x == y)
//	{
//		postemp->LineState[postemp->player][2*TableSize] |= Sign[y];	// б������
//	}
//			
//	if(x+y == TableSize-1)
//	{
//		postemp->LineState[postemp->player][2*TableSize+1] |= Sign[y];	// б������
//	}
//}
//
//void	GetPoint(const position * pos, int *x, int *y)
//{
//	while(1)
//	{
//		printf("\n�����������ӵ�����(0 �� 2):\n");
//
//		scanf("%d %d", x, y);
//
//		if((*x>=0 && *x<TableSize) && (*y>=0 && *y<TableSize) && (pos->table[*x][*y] == UnSetted))
//		{
//			break;
//		}
//		else
//		{
//			printf("�������벻�Ϸ�.\n");
//		}
//	}
//}
//
//void	SetPoint(position * pos, int x, int y, int point)
//{
//	pos->table[x][y] = point;
//	pos->laststep[0] = x;
//	pos->laststep[1] = y;
//	pos->player = PeerPlayer(point);	// ���ֽ�����
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
//			return	-INFINITE;	// minʤ��
//		}
//
//		if(pos->LineState[MIN][i] == 0)
//		{
//			minnum ++;
//		}
//		else if(pos->LineState[MIN][i] == LineFull)
//		{
//			return	INFINITE;	// max ʤ��
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
//		printf("\n===��������Ŀ�ʼ===\n");
//		printf("\n����ѡ������(0)���Ǻ���(1):\n");
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
//					printf("�����ˡ�\n");		// Ԥ�����ʵ�����
//					break;
//				}
//
//				x = beststep[0];
//				y = beststep[1];
//
//				beststep[0] = beststep[1] = NoPoint;	// ��ԭȫ�ֱ��� 
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
//				printf("������.\n");
//				break;
//			}
//			else if(evatemp == -INFINITE)
//			{
//				printf("��Ӯ�ˡ�\n");
//				break;
//			}
//		
//			if(chessnum == GridNumber)		
//			{
//				printf("����.\n");
//				break;
//			}
//		}
//	}
//
//	return 0;
//}
