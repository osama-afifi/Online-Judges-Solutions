//#include <stdio.h>
//#include <cstring>
//
////no of ways
//int coin[]={1,5,10,25,50};
//long long dp[30002];
//int n;
//int main()
//{
//	freopen("input.in","r",stdin);
//	memset(dp,0,sizeof(dp));
//	dp[0]=1;
//
//	for(int i = 0 ; i< 5 ; i++)
//		for(int j = coin[i] ; j <=30001 ; j++)
//			if(j-coin[i]>=0)
//			dp[j] += dp [j-coin[i]]; 
//
//	while(scanf("%d",&n) != EOF)
//	{
//		if(dp[n]==1)
//		printf("There is only 1 way to produce %d cents change.\n",n);
//		else
//			printf("There are %lld ways to produce %d cents change.\n",dp[n],n);
//	}
//
//return 0;
//}