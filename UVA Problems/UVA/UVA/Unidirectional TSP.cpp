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
//int m,n;
//bool inRange(int x , int y)
//{return (x>=0 &&y>=0 && x<m && y <n);}
//
//int grid[107][107];
//int dp[107][107];
//int path[107][107];
//int const oo = 1<<30;
//
//int solve(int i , int j )
//{
//	if(j==n)
//		return 0;
//	if(dp[i][j]!=-1)
//		return dp[i][j];
//
//	int s1=solve((i+1)%m,j+1);
//	int s2=solve(i,j+1);
//	int s3=solve((i+m-1)%m,j+1);
//
//	int top=(i+1)%m;
//	int sol=s1;
//
//	if(s2<sol || (s2==sol && i<top))
//	{
//		top=i;
//		sol=s2;
//	}
//	if(s3<sol || (s3==sol && ((i+m-1)%m)<top))
//	{
//		top=(i+m-1)%m;
//		sol=s3;
//	}
//
//	path[i][j]=top;
//	return dp[i][j]=sol+grid[i][j];
//
//}
//
//void ppath(int x)
//{
//	printf("%d",x+1);
//	for(int i=0; i<n-1 ; i++)
//	{
//		x=path[x][i];
//		printf(" %d",x+1);
//	}
//	putchar('\n');
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	while(scanf("%d%d",&m,&n)==2)
//	{
//
//		for(int i = 0 ; i < m ; i++)
//			for(int j = 0 ; j< n ; j++)
//			{
//				scanf("%d",&grid[i][j]);
//				dp[i][j]=-1;
//			}
//			int mini=oo;
//			int res=0;
//			for(int i = 0 ; i < m ; i++)
//			{
//			//	memset(dp,-1,sizeof dp);
//				int s=solve(i,0);
//				if(s<mini)
//				{
//					mini=s;
//					res=i;
//				}
//			}			
//			ppath(res);
//
//			printf("%d\n",mini);
//
//	}
//	return 0;
//}