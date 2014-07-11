//#include <iostream>
//#include <stdio.h>
//
//using namespace std;
//
//int output[50];
//int value[50];
//int depth[50];
//int dp[100][30005];
//bool used[100][30005];
//int n,t,w;
//void knapsack(int n , int W)
//{
//
//	for(int i = 0 ; i<= n ; i++)
//	{
//		dp[i][0]=0;
//		dp[0][i]=0;
//	}
//
//	for(int i = 1 ; i<= n ; i++)
//		for(int j = 1 ; j<= W ; j++)
//			if(j-depth[i]>=0 && value[i]+dp[i-1][j-depth[i]]>dp[i-1][j])
//			{
//				dp[i][j]=value[i]+dp[i-1][j-depth[i]];
//				used[i][j]=true;
//			}
//			else
//			{
//				dp[i][j]=dp[i-1][j];
//				used[i][j]=false;
//			}
//
//			printf("%d\n" ,dp[n][W]);
//
//			int K=W;
//			int m = 0;
//			for(int i=n ; i>=0 ; i--)
//			{
//				if(used[i][K])
//				{
//					output[m++]=i;
//					K-=depth[i];
//				}
//			}
//
//			printf("%d\n" ,m);
//
//			for(int i = m-1 ; i>=0; i--)
//				printf("%d %d\n" ,depth[output[i]]/(3*w) , value[output[i]]);
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	bool first=true;
//	while(scanf("%d%d" , &t , &w) == 2 )
//	{
//		if(!first)printf("\n");
//		first=false;
//		scanf("%d", &n);
//
//		for(int i = 1 ; i <=n ; i++)
//		{
//			scanf("%d%d", &depth[i], &value[i]);
//			depth[i]=depth[i]*w*3;
//		}
//
//		knapsack(n,t);
//
//
//	}
//
//
//	return 0;
//}