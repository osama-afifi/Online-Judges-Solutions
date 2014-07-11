//#include <iostream>
//#include <stdio.h>
//#include <cstring>
//
////no of ways
//int dp[101][101];
//
//int solve(int n,int k)
//{
//	if(n<0 || k<0)return 0;
//	if(n==0 && k==0)return 1;
//	if(dp[n][k]!=-1)
//		return dp[n][k];
//
//	else
//	{
//		int res=0;
//		for(int i = 0 ; i<=n ; i++)
//			res+=solve(n-i,k-1)%1000000;
//		return dp[n][k]=res%1000000;
//	}
//
//}
//
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	memset(dp,-1,sizeof(dp));
//	//dp[0][0]=1;
//
//	int N,K;
//
//	while(scanf("%d%d",&N,&K))
//	{
//		if(!N&&!K)break;
//
//		printf("%d\n",solve(N,K)%1000000);
//
//	}
//
//
//
//	return 0;
//}