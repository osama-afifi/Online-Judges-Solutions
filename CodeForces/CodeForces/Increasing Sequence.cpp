//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<sstream>
//#include<queue>
//#include<set>
//#include<stack>
//#include<math.h>
//
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) A.begin(), A.end()
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//#define MOD 1000000007
//
//typedef long long LL;
//using namespace std;
//
//int n,h;
//int arr[2009];
//LL dp[2009][2009];
//
//LL solve(int idx , int open)
//{
//	if(idx==n)return open==0;
//	if(open<0)return 0;
//	if(dp[idx][open]!=-1)return dp[idx][open];
//	LL res = 0;
//	if(arr[idx]+open == h) //satisfied
//	{
//		res += solve(idx+1,open); // do nothing
//		res %=MOD;
//		res += solve(idx+1,open-1)*(open); // close interval open ways
//		res %=MOD;
//	}
//	else if(arr[idx]+open+1 == h) // needs one more
//	{
//		res += solve(idx+1,open+1); // open new interval 
//		res %=MOD;
//		res += solve(idx+1,open)*(open+1); // open and close
//		res %=MOD;
//	}		
//	return dp[idx][open]=res;
//}
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	while(cin>>n>>h)
//	{
//		Set(dp,-1);
//		FOR(i,0,n)
//			cin>>arr[i];
//		if(arr[0]==h || arr[0]+1==h)
//		{
//		LL res = solve(0,0);
//		cout << res << endl;
//		}
//		else
//			cout << 0 <<endl;
//	}
//
//	return 0;
//}