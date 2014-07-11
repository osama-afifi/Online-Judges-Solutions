//# include <iostream>
//# include <stdio.h>
//
//using namespace std;
//
//
//int dp[1001][30001];
//int weight[1001];
//int value[1001];
//
//
//int knapsack(int n , int W)
//{
//	dp[0][0]=0;
//	for(int i  = 1  ; i <= n ; i++)
//	{
//		dp[i][0]=0;
//		dp[0][i]=0;
//
//	}
//
//
//	for(int i  = 1  ; i <= n ; i++)
//		for(int j  = 1  ; j <= W ; j++)	
//			if(j-weight[i]>=0 && value[i]+dp[i-1][j-weight[i]]>dp[i-1][j])
//				dp[i][j]=value[i]+dp[i-1][j-weight[i]];
//			else dp[i][j]=dp[i-1][j];
//
//			return dp[n][W];
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int n,t,g,c;
//	scanf("%d",&t);
//	while(t--)
//	{
//		scanf("%d",&n);
//
//		for(int i  = 1  ; i <= n ; i++)
//			scanf("%d%d",&value[i], &weight[i]);
//
//		scanf("%d",&g);
//		long long sum=0;
//
//		for(int i  = 0  ; i <g ; i++)
//		{
//			scanf("%d",&c);
//			sum+=knapsack(n,c);
//		}
//
//		printf("%lld\n",sum);
//	}
//
//	return 0;
//}