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
//int naive(int n)
//{
//	if(n<=1)return n;
//	int c=2;
//	for(int i = 2 ; i*i<=n ; i++)
//		if(n%i==0)c+=1+(i*i!=n);
//
//	return c;
//}
//
//int N[1000*1000+9];
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	N[0]=1;
//	N[1]=2;
//	int c=0;
//for(int i = 2 ; N[i]<=1000*1000 &&  i<=64726; i++)
//	{
//		int x = naive(N[i-1]);
//		N[i] = N[i-1] + x;
//		c++;
//	}
//	
//	int kase=0;
//	int t,A,B;
//	scanf("%d",&t);
//	while(t--)
//	{
//	scanf("%d%d",&A,&B);
//	int r = (int)(lower_bound(N,N+c,B+1)-N);
//	int l = (int)(upper_bound(N,N+c,A-1)-N);
//	int res = r-l;
//	printf("Case %d: %d\n", ++kase, res);
//	
//	}
//	return 0;
//}
