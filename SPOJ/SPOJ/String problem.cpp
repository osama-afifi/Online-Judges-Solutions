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
//using namespace std;
//
//int l1;
//int l2;
//string s1,s2;
//int dp[1009][1009];
//
//int solve(int i , int j)
//{
//	if(i>= l1 || j >= l2) return 0;
//	if(dp[i][j]!=-1)return dp[i][j];
//	int p1 = 1<<25 , p2 = 1<<25 , p3 = 1<<25;
//
//	if(s1[i] != s2[j])
//	{
//		p1 = solve(i+1, j+1)+1;
//	}
//	else
//	{
//	p2 = solve(i+1,j);
//	p3 = solve(i,j+1);
//	}
//	return dp[i][j] = min(p1,min(p2,p3));
//
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	while(cin>>s1>>s2)
//	{
//		Set(dp,-1);
//		l1 = s1.length();
//		l2 = s2.length();
//	//	if(l1>l2)
//	//		swap(s1,s2);
//		int res = solve(0,0);
//		printf("%d\n", res);
//
//	}
//
//	return 0;
//}
//
//
