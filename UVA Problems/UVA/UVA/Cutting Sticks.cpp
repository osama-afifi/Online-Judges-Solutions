//#include<iostream>
//#include<cstring>
//#include<algorithm>
//#include<stdio.h>
//
//using namespace std;
//int length;
//int sticks[107];
//int n;
//int dp[107][107];
//int oo =1<<25;
//
//int solve(int left , int right)
//{
//	if(left+1==right)return 0;
//	if(dp[left][right]!=-1)
//		return dp[left][right];
//	dp[left][right]=oo;
//	for(int i = left+1 ; i<right ; i++)
//		dp[left][right]=min(dp[left][right],solve(left,i)+solve(i,right)+(sticks[right]-sticks[left]));
//	return dp[left][right];
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	while(scanf("%d",&length)==1)
//	{
//		memset(dp,-1,sizeof dp);
//		if(!length)break;
//		scanf("%d",&n);
//		sticks[0]=0;
//		sticks[n+1]=length;
//		for(int i = 1 ; i <=n ;i++)
//			scanf("%d", &sticks[i]);
//		int res=solve(0,n+1);
//		printf("The minimum cutting is %d.\n",res);
//	}
//	return 0;
//}