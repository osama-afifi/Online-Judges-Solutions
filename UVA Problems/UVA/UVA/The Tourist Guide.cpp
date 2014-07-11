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
//
//
//int const oo = 1<<25;
//int path[1003][1003];
//
//int n,m,n1,n2,cost,kase=0,s,t,w;
//
//int min(int x, int y){ return x < y ? x : y; }
//int max(int x, int y){ return x > y ? x : y; }
//
//int main()
//{
//	bool first=true;
//	int n,m;
//	freopen("input.in","r",stdin);
//	while(scanf("%d %d",&n,&m))
//	{
//
//		if(n==0 && m==0)break;
//
//		if(!first)
//			putchar('\n');
//		first=false;
//		int n1,n2,cost;
//
//		for(int i=1;i<=n;i++){
//			for(int j=1;j<=n;j++)
//				path[i][j]=-200000;
//			path[i][i]=0;
//		}
//		for(int i=0;i<m;i++)
//		{
//			scanf("%d%d%d",&n1,&n2,&cost);
//			path[n1][n2]=path[n2][n1]=cost;
//		}
//
//		for(int k = 1 ; k<= n ; k++)
//			for(int i = 1 ; i<= n ; i++)
//				for(int j = 1 ; j<= n ; j++)
//				{
//					path[i][j]=max(path[i][j],min(path[i][k],path[k][j]));		
//				}
//				scanf("%d%d%d",&s,&t,&w);
//				int trips=ceil(w*1.00/(path[s][t]-1));
//				printf("Scenario #%d\n",++kase);
//				printf("Minimum Number of Trips = %d\n\n",trips);
//
//	}
//	return 0;
//}
//
