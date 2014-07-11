////#include <iostream>
////#include <algorithm>
////#include <stdio.h>
////#include <cstring>
////#include <string>
////#include <sstream>
////#include <vector>
////#include <map>
////#include <queue>
////#include <stack>
////
////using namespace std;
////#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
////#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
////#define Set(a, s) memset(a, s, sizeof (a))
////using namespace std;
////
////int n;
////int arr[10009];
////int dp[1009][1009];
////
////
////int solve(int i , int j)
////{
////if( i>j) return 0;
////	if(dp[i][j]!=-1)return dp[i][j];
////	int p = i+n-1-j;
////	if(p%2==0)
////		return dp[i][j] = max( solve(i+1 , j) + arr[i] , solve(i , j-1) + arr[j]);
////	else
////		return dp[i][j] = min( solve(i+1 , j) , solve(i , j-1) );
////
////}
////int main()
////{
////	freopen("input.in","r",stdin);
////	while(scanf("%d",&n)==1)
////	{
////		if(!n)break;
////		FOR(i,1,n+1)
////			scanf("%d" , &arr[i]);
////		Set(dp,0);
////
////		for(int i = 0 ; i<=n ; i++)
////			dp[i][i] = dp[0][i] = 0;
////
////		for(int k = 2 ; k<=n ; k++)
////		{
////			for(int i = 0 ; i<=n-k+1 ; i++)
////			{
////				int j = i+k-1;
////				int p = i+n-1-j;
////				if(p%2==0)
////					dp[i][j] = max( dp[i+1][j]+arr[i] , dp[i][j-1]+arr[j] );
////				else
////					dp[i][j] = min( dp[i+1][j] , dp[i][j-1] );
////			}
////		}
////		cout << dp[1][n] <<endl;
////	}
////	return 0;
////}
//
//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <queue>
//#include <stack>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//using namespace std;
//
//int n;
//int d[1009];
//int w[1009];
//long long cum[1009];
//long long dp[1009][1009];
//
//int N,K;
//int solve(int i , int k)
//{
//	if(i==k)
//		return (k==0) ? 0 : 1<<25;
//
//	int s1 = solve(i+1 , k-1);
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	while(cin>>N>>K)
//	{
//		FOR(i,0,N)
//			scanf("%d %d" , &d[i], &w[i]);
//		
//
//	}
//	return 0;
//}
