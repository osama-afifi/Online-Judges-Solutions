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
//typedef long long LL;
//
//LL dp[10007][2];
//int arr[2][10007];
//int n[2];
//const LL oo = 1LL<<60;
//int bs(int v, int seq)
//{
//	int b = 0 , e =n[seq]-1;
//	int res = -1;
//	while(b<=e)
//	{
//		int mid = (b+e)/2;
//		if(arr[seq][mid]<v)
//			b=mid+1;
//		else if(arr[seq][mid]>v)
//			e=mid-1;
//		else return mid;
//	}
//	return -1;
//}
//
//LL solve(int idx, int seq)
//{
//	if(idx>=n[seq])
//		return 0;
//	LL s1=-oo,s2=-oo;
//	if(dp[idx][seq]!=-1)
//		return dp[idx][seq];
//	s1 = solve(idx+1,seq) + arr[seq][idx];
//	int q = bs(arr[seq][idx],seq^1);
//	if(q!=-1)
//		s2 = solve(q+1,seq^1) + arr[seq][idx];
//
//	return dp[idx][seq]=max(s1,s2);
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	while(cin>>n[0] && n[0])
//	{
//		FOR(i,0,n[0])
//			cin>>arr[0][i];
//
//		cin>>n[1];
//
//		FOR(i,0,n[1])
//			cin>>arr[1][i];
//
//		Set(dp,-1);
//		LL s1 = solve(0,0);
//		//Set(dp,-1);
//		LL s2 = solve(0,1);
//		LL res = max(s1,s2);
//		cout <<res<<endl;
//	}
//
//	return 0;
//}
//
//
