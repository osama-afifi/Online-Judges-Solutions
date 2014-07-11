//#include<iostream>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//
//using namespace std;
//
//string board[10][10];
//int attacked[10][10];
//
//
//bool inRange(int x, int y)
//{return x>=0 && y>=0 && x<8 && y<8;}
//
//void knight(int x , int y , int side)
//{
//	int knight_X[]={-1,1,-2,2};
//	int knight_Y[]={-2,2,-1,1};
//
//	for(int i= 0 ; i<4 ; i++)
//		if(inRange(x+knight_X[i] , y+knight_Y[i]))
//			attacked[x+knight_X[i]][y+knight_Y[i]]=side;
//
//}
//
//void pawn(int x , int y , int side)
//{
//	if(side==1)if(inRange(x-1,y+1))
//		attacked[x-1][y+1]=side;
//	else if(inRange(x+1,y+1))
//		attacked[x+1][y+1]=side;
//	if(side==1)if(inRange(x-1,y-1))
//		attacked[x-1][y-1]=side;
//	else if(inRange(x+1,y-1))
//		attacked[x+1][y-1]=side;
//}
//
//void king(int x , int y , int side)
//{
//	int King_X[]={-1,-1,-1,1,1,1,0,0,0};
//	int King_Y[]={-1,0,1,-1,0,1,1,-1,0};
//
//	for(int i= 0 ; i<8 ; i++)
//		if(inRange(x+King_X[i] , y+King_Y[i]))
//			attacked[x+King_X[i]][y+King_Y[i]]=side;
//}
//
//
//int main()
//{
//	freopen("check.in","r",stdin);
//
//	int t;
//	int BlackKing_x,BlackKing_y;
//	cin>>t;
//	while(t--)
//	{
//		memset(attacked,0,sizeof attacked);
//
//		for(int i = 0 ; i<8;i++)
//			for(int j = 0 ; j<8;j++)
//				cin>>board[i][j];
//
//
//
//		for(int i = 0 ; i<8;i++)
//			for(int j = 0 ; j<8;j++)
//				if(board[i][j]=="BK")
//				{
//					BlackKing_x=i;
//					BlackKing_y=j;
//				}
//
//
//
//				for(int i = 0 ; i<8;i++)
//					for(int j = 0 ; j<8;j++)
//							if(board[i][j]=="WK")
//								king(i,j,1);
//							else if(board[i][j]=="WH")
//								knight(i,j,1);
//							else if(board[i][j]=="WP")
//								pawn(i,j,1);
//
//							if(attacked[BlackKing_x][BlackKing_y]==1)
//								puts("Check");
//							else
//								puts("Not Check");
//	}
//
//	return 0;
//}

#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
 
bool check(int x,int y)
{
        return x>=0 && x<8 && y>=0 && y<8;
}
int main()
{
	freopen("check.in","r",stdin);
        bool done;
        int WH_i[8]={2,2,1,1,-2,-2,-1,-1};      //el positions elly momken yegy menha check
        int WH_j[8]={1,-1,-2,2,1,-1,-2,2};
        int WK_i[8]={-1,-1,-1,1,1,1,0,0};
        int WK_j[8]={-1,1,0,-1,1,0,1,-1};
        int num,x,y;
        pair<int,int> Kpos;
        string st[8][8];
        cin>>num;
        for(int t=1;t<=num;++t)
        {
                Kpos=make_pair(-1,-1);
                for(int i=0;i<8;++i)
                        for(int j=0;j<8;++j)
                                cin>>st[i][j];
                for(int i=0;i<8 && Kpos.first==-1 ;++i)
                        for(int j=0;j<8;++j)
                                if(st[i][j]=="BK")
                                {Kpos=make_pair(i,j);break;}
                                //////////////
 
                                done=false;
                                if((check(Kpos.first+1,Kpos.second-1) && st[Kpos.first+1][Kpos.second-1]=="WP") ||              //check le el 3asaker
                                        (check(Kpos.first+1,Kpos.second+1) && st[Kpos.first+1][Kpos.second+1]=="WP"))           //
                                {printf("Case #%d: Check\n",t);done=true;}
                                else
                                {
                                        for(int i=0;i<8;++i) // check le el knight
                                        {
                                                x=Kpos.first+WH_i[i];
                                                y=Kpos.second+WH_j[i];
                                                if(check(x,y) && st[x][y]=="WH")
                                                {printf("Case #%d: Check\n",t);done=true;break;}
                                        }
                                        if(done) break;
                                        for(int i=0;i<8;++i) //check le el king
                                        {
                                                x=Kpos.first+WK_i[i];
                                                y=Kpos.second+WK_j[i];
                                                if(check(x,y) && st[x][y]=="WK")
                                                {printf("Case #%d: Check\n",t);done=true;break;}
                                        }
                                }
                                if(!done)
                                        printf("Case #%d: Not Check\n",t);
        }
        return 0;
}