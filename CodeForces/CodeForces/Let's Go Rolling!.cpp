//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<queue>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) (A.begin(), A.end())
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//LL oo= 1e17;
//
//
//using namespace std;
//
//int n;
//pair<int,int> arr[3000];
//LL dp[3009][3009];
//
//LL solve(int idx , int p)
//{
//	if(idx==n)
//		return 0;
//	if(p!=-1 && dp[idx][p]!=-1)
//		return dp[idx][p];
//
//	LL s1 = oo , s2 = oo , s3 = oo;
//	s1 = solve(idx+1, idx)+arr[idx].second;
//	if(p!=-1)
//	s2 = solve(idx+1, p)+abs(arr[p].first-arr[idx].first);
//	return dp[idx][p] = min(s1,s2);
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	while(cin>>n)
//	{
//		Set(dp,-1);
//	FOR(i,0,n)
//		cin>>arr[i].first >>  arr[i].second;
//		sort(arr,arr+n);
//		LL res = solve(0,-1);
//		cout << res << endl;
//	}
//	return 0;
//}
//
