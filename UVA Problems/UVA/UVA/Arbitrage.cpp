//#include <iostream>
//#include <cstring>
//#include <stdio.h>
//
//using namespace std;
//
//double dist[30][30][30];
//int path[30][30][30];
//int path1[30];
//
//double max(double a , double b)
//{return (a>b) ? a : b;}
//int n;
//
//int floyd()
//{
//	for(int l = 2 ; l <=n ; l++)	for(int k = 1 ; k <=n ; k++)	
//			for(int i = 1 ; i <=n ; i++)
//				for(int j = 1 ; j <=n ; j++)
//				
//					if(dist[l][i][j]<dist[l-1][i][k]*dist[1][k][j])
//					{
//						dist[l][i][j]=dist[l-1][i][k]*dist[1][k][j];
//						path[l][i][j]=k;
//						if(i==j && dist[l][i][j]>1.01)
//						{
//							int m=j;
//							path1[l]=j;
//							for(int x=l-1 ; x>=0 ; x--)
//							{
//								m=path[x+1][i][m];
//								path1[x]=m;
//							}
//
//							return l;
//						}
//					}
//					return 0;
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	while(scanf("%d",&n)==1)
//	{
//		memset(dist,0,sizeof dist);
//		memset(path,0,sizeof(path));
////		memset(path1,0,sizeof(path1));
//		for(int i = 1 ; i <=n ; i++)
//			for(int j = 1 ; j <=n ; j++)
//			{
//				path[1][i][j]=i;
//				if(i!=j)
//					cin>>dist[1][i][j];
//				else
//					dist[1][i][j]=1.0;
//			}
//		int res=floyd();
//		if(res)
//		{
//			printf("%d",path1[0]);
//			for(int i=1 ; i<=res; i++)
//				printf(" %d",path1[i]);
//			putchar('\n');
//		}
//		else
//			puts("no arbitrage sequence exists");
//	}
//	return 0;
//}
