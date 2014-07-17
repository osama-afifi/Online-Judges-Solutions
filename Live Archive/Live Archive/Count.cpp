//#include <vector>
//#include <list>
//#include <map>
//#include <set>
//#include <queue>
//#include <deque>
//#include <stack>
//#include <bitset>
//#include <algorithm>
//#include <functional>
//#include <numeric>
//#include <utility>
//#include <sstream>
//#include <iostream>
//#include <iomanip>
//#include <cstdio>
//#include <cmath>
//#include <cstdlib>
//#include <ctime>
//#include <cstring>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair
//
//
//long long M = 1000000007;
//long long   dp[1009];
//
//long long  solve(int sum)
//{
//	if(sum<0)return 0;
//	if(sum==0)return dp[sum] = 1;
//	if(dp[sum]!=-1)return dp[sum];
//	long long total = 0;
//	for(int i = 1 ; i<=sum ; i++)
//		if(sum%i==0)
//		total = total%M + solve(i-1)%M;
//	return dp[sum]=total%M;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int n;
//	int kase=0;
//	Set(dp,-1);
//	solve(1000);
//	while(cin>>n)
//		cout<<"Case "<<++kase<<": "<<dp[n-1]<<endl;
//	
//	return 0;
//}