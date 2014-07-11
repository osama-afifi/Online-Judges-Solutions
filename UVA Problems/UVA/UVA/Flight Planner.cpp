//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <cstring>
//#include <queue>
//#include <math.h>
//#include <stdio.h>
//
//
//using namespace std;
//
//
//int n;
//
//int grid[11][1007];
//int dp[11][1007];
//
//int const oo = 1<<25;
//
//int solve(int i , int j )
//{
//	if(i==0 && j==n)
//		return 0;
//	if(i<0 || i>9 || j==n)
//		return oo;
//	if(dp[i][j]!=-1)
//		return dp[i][j];
//	if(i==0 && j==n-1)
//		return dp[i][j]=20-grid[i][j]+solve(i-1,j+1);
//	if(i==0 && j!=n-1)
//		return dp[i][j]=min(60-grid[i][j]+solve(i+1,j+1),30-grid[i][j]+solve(i,j+1));
//
//	return dp[i][j]=min(min(60-grid[i][j]+solve(i+1,j+1),30-grid[i][j]+solve(i,j+1)),20-grid[i][j]+solve(i-1,j+1));
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int t;
//	scanf("%d",&t);
//
//	while(t--)
//	{
//			scanf("%d",&n);
//			n/=100;
//
//		for(int i=9;i>=0 ; i--)
//			for(int j = 0 ; j <n ; j++)
//			{
//				scanf("%d",&grid[i][j]);
//				dp[i][j]=-1;
//			}
//			int res=solve(0,0);
//
//			printf("%d\n\n",res);
//	}
//	return 0;
//}