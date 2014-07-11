//#include <iostream>
//#include <math.h>
//#include <vector>
//#include <iomanip>
//#include <cmath>
//#include <stdio.h>
//#include <cstring>
//#include <map>
//
//using namespace std;
//
//char board[16];
//char history[10][365597][16];
//int counter;
//int dim;
//char given[20][20];
//map <int ,int> MAP;
//
//bool check(int k)
//{
//	for(int i=1;i<k;i++)
//		if((board[i]==board[k] || abs(board[i]-board[k])==abs(i-k)))
//			return false;
//	return true;
//}
//
//
//void back(int row)
//{
//	if(row <= dim)
//	{
//		for (board[row]=1; board[row]<=dim; board[row]++)
//		{
//			if(check(row))
//				back(row+1);
//		}
//	}
//	else
//	{
//		for(int i=1;i<=dim;i++)
//			history[dim-4][counter][i]=board[i];
//		counter++;
//	}
//}
//
//int main ()
//{
//	freopen("input.in","r",stdin);
//
//
//	for(dim=4;dim<15;dim++)
//	{
//		counter=0;
//		back(1);
//		MAP[dim]=counter;
//	}
//
//	int kase=0;
//	while(scanf("%d",&dim))
//	{
//		if(dim==0)break;
//
//		for(int i=1;i<=dim;i++)
//			for(int j=1;j<=dim;j++)
//				cin>>given[i][j];
//
//		//vector < pair <int,int> > V;
//		int list_i[16];
//		int list_j[16];
//		int ind=0;
//
//		for(int i=1;i<=dim;i++)
//			for(int j=1;j<=dim;j++)
//			{
//				if(given[i][j]=='*')
//				{
//					list_i[i]=j;
//					//list_j[ind++]=j;
//				}
//			}
//
//			int subt=0;
//
//			for(int i=0;i<MAP[dim];i++)
//				for(int j=1;j<=dim;j++)
//				{
//					if(history[dim-4][i][j]==list_i[j])
//						subt++;
//				}
//
//				int res= MAP[dim]-subt;
//				printf("Case %d: %d\n",++kase,res);
//				//cout<<"Case "<<++kase<<": "<<counter]<<endl;
//
//	}
//
//	return 0;
//}
