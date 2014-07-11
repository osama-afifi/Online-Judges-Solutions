//#include <stdio.h>
//#include <cstring>
//
////no of ways
//
//int dp[101][50010];
//int value[101];
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	memset(dp,0,sizeof(dp));
//
//	int t,n,sum,target;
//
//	scanf("%d" , &t);
//
//	while(t--)
//	{
//		scanf("%d" , &n);
//
//		for(int i = 1 ; i<=n ; i++)
//			scanf("%d" , &value[i]);
//
//		sum=0;
//		dp[0][0]=0;
//		for(int i = 1 ; i<=n ; i++)
//		{
//			sum+=value[i];
//			dp[i][0]=0;
//			dp[0][i]=0;
//		}
//
//		target=sum/2;
//
//
//		for(int i = 1 ; i<=n ; i++)
//			for(int j = 0 ; j<=target ; j++)
//			{
//				if(j-value[i]>=0)
//				{
//					if(value[i]+dp[i-1][j-value[i]] > dp[i-1][j])
//						dp[i][j]=value[i]+dp[i-1][j-value[i]];
//					else
//						dp[i][j]=dp[i-1][j];
//				}
//				else
//					dp[i][j]=dp[i-1][j];
//			}
//
//			printf("%d\n",sum-2*dp[n][target]);
//	}
//
//	return 0;
//}