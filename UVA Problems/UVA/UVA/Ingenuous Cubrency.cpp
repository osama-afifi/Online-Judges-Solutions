//#include <stdio.h>
//#include <cstring>
//
////no of ways
//int coin[30];
//unsigned long long int dp[10010];
//int n;
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	memset(dp,0,sizeof(dp));
//
//	int m =0;
//	coin[m]=1;
//	for(int i=1 ; i*i*i<=9261 ; i++)
//	coin[m++]=i*i*i;
//	
//
//	dp[0]=1;
//
//for(int i = 0 ; i <m  ; i++)
//	for(int j = 0 ; j <= 10000  ; j++)
//		if(j-coin[i]>=0)
//			dp[j]+=dp[j-coin[i]];
//
//	while(scanf("%d",&n) != EOF)
//		printf("%lld\n",dp[n]);
//
//
//return 0;
//}
//
