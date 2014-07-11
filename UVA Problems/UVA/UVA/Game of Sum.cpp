//#include <iostream>
//#include <cstring>
//#include <string>
//
//
//using namespace std;
//
//int max(int a , int b)
//{return a<b ? b : a;}
//
//string text;
//int const oo = 1<<25;
//int dp[107][107];
//int arr[107];
//int n;
//int solve(int i , int j )
//{
//	//if(i>n-1|| j<1)return -oo;a
//	if(i>j )
//		return 0;
//	if(dp[i][j]!=-1)
//		return dp[i][j];
//	return dp[i][j] = max( solve(i+1,j)+arr[i] , solve(i,j-1)-arr[j] );
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	
//	while(scanf("%d",&n)==1)
//	{
//		if(!n)break;
//		memset(dp,-1,sizeof dp);
//	for(int i = 0 ; i<n ; i++)
//		scanf("%d",&arr[i]);
//	
//int res1=solve1(0,n-1);
//	memset(dp,-1,sizeof dp);
//	
//
//	printf("%d\n",res1);
//	}
//
//
//	return 0;
//}