//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <math.h>
//#include <map>
//#include <set>
//#include <queue>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair 
//#define MAX 10009 
//using namespace std;
//
//
//
//int n;
//pair<int,int> arr[1009];
//int dp[1009][1009];
//
//int solve(int idx, int prev)
//{
//	if(idx>=n)
//		return 0;
//
//	if(prev!=-1 && dp[idx][prev]!=-1)
//		return dp[idx][prev];
//
//	int side = arr[idx].first;
//	int top = arr[idx].second;
//
//	int s1 = solve(idx+1, side) + top + ((prev!=-1) ? abs(prev-side) : 0);
//	int s2 = solve(idx+1, top) + side + ((prev!=-1) ? abs(prev-top) : 0);
//
//	return dp[idx][prev] = max(s1,s2);
//
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//
//	while(cin>>n)
//	{
//		Set(dp,-1);
//		FOR(i,0,n)
//			cin>>arr[i].first>> arr[i].second;
//		int res = solve(0,-1);
//		cout<< res <<endl;
//	}
//
//	return 0;
//}