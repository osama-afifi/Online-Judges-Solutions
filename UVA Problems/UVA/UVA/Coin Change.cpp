//#include <stdio.h>
//#include <cstring>
//
////no of ways
//int coin[]={1,5,10,25,50};
//int dp[7490];
//int n;
//int main()
//{
//	freopen("input.in","r",stdin);
//	memset(dp,0,sizeof(dp));
//
//	dp[0]=1;
//
//for(int i = 0 ; i <5  ; i++)
//	for(int j = coin[i] ; j <= 7489  ; j++)
//		if(j-coin[i]>=0)
//			dp[j]+=dp[j-coin[i]];
//
//	while(scanf("%d",&n) != EOF)
//		printf("%d\n",dp[n]);
//
//
//return 0;
//}