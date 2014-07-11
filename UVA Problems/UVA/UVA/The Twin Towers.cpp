//#include <iostream>
//#include <string>
//#include <cstring>
//#include <stdio.h>
//
//using namespace std;
//
//int dp[1005][1005];
//int arr1[1005];
//int arr2[1005];
//int n,m;
//
//int max(int a, int b) {return (a>b) ? a :b;}
//int min(int a, int b) {return (a<b) ? a :b;}
//
//int LCS(int x , int y)
//{
//	for(int i=1 ; i<=x ; i++)
//		for(int j=1 ; j<=y ; j++)
//		{
//			if(arr1[i-1]==arr2[j-1])
//				dp[i][j]=dp[i-1][j-1]+1;
//			else
//				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//		}
//		return dp[x][y];
//}
//
//int main()
//{
//
//	freopen("input.in","r",stdin);
//	int kase=0;
//	while(scanf("%d%d",&n,&m)==2)
//	{
//		if(n==0 && m==0)break;
//		memset(dp,0,sizeof dp);
//		for(int i=0 ; i<n ; i++)
//			scanf("%d",&arr1[i]);
//		for(int i=0 ; i<m ; i++)
//			scanf("%d",&arr2[i]);
//
//		cout<<"Twin Towers #"<<++kase<<endl;
//		cout<<"Number of Tiles : "<<LCS(n,m)<<endl<<endl;	
//	}
//
//
//	return 0;
//}