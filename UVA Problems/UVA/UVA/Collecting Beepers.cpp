//#include <iostream>
//#include <cstdlib>
//#include <stdio.h>
//#include <math.h>
//#include <cstring>
//
//using namespace std;
//int x,y;
//int n ,t;
//int const oo = 1<<25;
//int corx[1000];
//int cory[1000];
//int dist[1000][1000];
//int limit;
//int dp[1000][1000];
//
//int min(int a , int b)
//{return a< b ? a : b;}
//
//int solve( int node , int vis)
//{
//	if(vis==limit)
//		return dist[0][node];
//
//	if(dp[node][vis]!=-1)return dp[node][vis];
//	dp[node][vis]=oo;
//	for(int i =0 ; i<= n ; i++)
//		if(node!=i && !(vis&(1<<i) ) )
//			dp[node][vis]=min(dp[node][vis],solve(i,(vis | 1<<i))+dist[node][i]);
//	
//	return dp[node][vis];
//}
//
//
//int main()
//{	
//	freopen("input.in","r",stdin);
//	scanf("%d",&t);
//	while(t--)
//	{
//	
//		scanf("%d%d",&x,&y);
//	scanf("%d%d",&corx[0],&cory[0]);
//	scanf("%d",&n);
//	for(int i = 1 ; i<=n ; i++)
//		scanf("%d%d",&corx[i],&cory[i]);
//
//	for(int i = 0 ; i<=n ; i++)
//		for(int j = 0 ; j<=n ; j++)
//			dist[i][j]=abs(corx[i]-corx[j])+abs(cory[i]-cory[j]);
//
//
//			memset(dp,-1,sizeof dp );
//			limit=(1<<(n+1))-1;
//			int res=solve(0,0);
//			  printf("The shortest path has length %d\n", res);
//
//	}
//
//return 0;
//}