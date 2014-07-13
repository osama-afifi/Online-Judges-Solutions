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
//#define MAX 100009 
//typedef long long LL;
//using namespace std;
//
//int l1;
//int l2;
//int l3;
//string s1,s2,s3;
//LL dp[65][65][65];
//
//LL solve(int i, int j, int k)
//{
//	if(k==l3) return 1;
//	if(i>l1 || j>l2 || k>l3) return 0;
//	if(dp[i][j][k]!=-1) 
//		return dp[i][j][k];
//	LL sum =0;
//	FOR(l,i,l1)
//		if(s1[l]==s3[k])
//		sum += solve(l+1, j, k+1);
//	FOR(l,j,l2)
//		if(s2[l]==s3[k])
//		sum += solve(i, l+1, k+1);
//	return dp[i][j][k] = sum;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		cin>>s1>>s2>>s3;
//		Set(dp,-1);
//		l1 = s1.length();
//		l2 = s2.length();
//		l3 = s3.length();
//		LL res = solve(0,0,0);
//		cout<<res<<endl;
//	}
//	return 0;
//}
