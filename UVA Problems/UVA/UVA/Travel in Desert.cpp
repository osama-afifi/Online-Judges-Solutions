//#include <iostream>
//#include <stdio.h>
//#include <algorithm>
//#include <cstring>
//#include <vector>
//#include <math.h>
//
//
//using namespace std;
//
//struct Node
//{
//	int n1,n2;
//	double t,d;
//};
//
//int const oo = 1<<25;
//double dp[103][103];
//Node edges[10005];
//int path[103][103];
//int n,m,n1,n2,cost,kase=0,s,t,w;
//
//double min(int x, int y){ return x < y ? x : y; }
//double max(int x, int y){ return x > y ? x : y; }
//
//
//void getPath(int a, int b, bool first) {
//
//	if (path[a][b]==-1)
//	{
//		if (!first)
//			printf("%d ", a+1);
//		printf("%d", b+1);
//		if (b != t-1) //if b not final 
//			putchar(' ');
//	} 
//	else
//	{
//		getPath(a, path[a][b], first);
//		getPath(path[a][b], b, true);
//	}
//}
//
//int main()
//{
//
//	int n,m,r,d;
//	freopen("input.in","r",stdin);
//	while(scanf("%d%d",&n,&m)==2)
//	{
//		if(n==0 && m==0)break;
//		scanf("%d%d",&s,&t);
//
//		int n1,n2,cost;
//
//		for(int i=0;i<n;i++){
//			for(int j=0;j<n;j++)
//				dp[i][j]=oo;
//			dp[i][i]=0;
//		}
//
//		for(int i=0;i<m;i++)
//		{
//			cin>>edges[i].n1>>edges[i].n2>>edges[i].t>>edges[i].d;
//			dp[edges[i].n1-1][edges[i].n2-1]=min(dp[edges[i].n1-1][edges[i].n2-1],edges[i].t);
//			dp[edges[i].n2-1][edges[i].n1-1]=min(dp[edges[i].n2-1][edges[i].n1-1],edges[i].t);
//		}
//
//		for(int k = 0 ; k< n ; k++)
//			for(int i = 0 ; i< n ; i++)
//				for(int j = 0 ; j< n ; j++)
//					dp[i][j]=min(dp[i][j],max(dp[i][k],dp[k][j]));		
//
//		double mintemp = dp[s-1][t-1];	
//
//		for(int i=0;i<n;i++){
//			for(int j=0;j<n;j++)
//			{
//				dp[i][j]=oo;
//				path[i][j]=-1;
//			}
//			dp[i][i]=0;
//		}
//
//		for(int i=0;i<m;i++)
//			if(edges[i].t<=mintemp)
//			{
//				dp[edges[i].n1-1][edges[i].n2-1]=min(dp[edges[i].n1-1][edges[i].n2-1],edges[i].d);
//				dp[edges[i].n2-1][edges[i].n1-1]=min(dp[edges[i].n2-1][edges[i].n1-1],edges[i].d);
//			}
//
//			for(int k = 0 ; k< n ; k++)
//				for(int i = 0 ; i< n ; i++)
//					for(int j = 0 ; j< n ; j++)
//					{
//						if(dp[i][k]+dp[k][j]<dp[i][j])
//						{
//							dp[i][j]=dp[i][k]+dp[k][j];
//							path[i][j]=k;
//						}
//					}
//
//					getPath(s-1,t-1,0);
//					putchar('\n');
//					printf("%.1f %.1f\n", dp[s-1][t-1], mintemp);
//
//
//	}
//	return 0;
//}