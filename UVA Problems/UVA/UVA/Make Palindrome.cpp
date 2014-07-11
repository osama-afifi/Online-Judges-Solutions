//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <stdio.h>
//#include <string>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//
//
//char s[1009];
//int len;
//int const oo = 1<<25;
//int dp[1007][1007];
////int path[1007][1007];
//
//// abcd
//// dcba
//
//// abcdcda
//
//int solve(int i , int j)
//{
//	if(i>j)return 0;
//	if(dp[i][j]!=-1)
//		return dp[i][j];
//	if(s[i]==s[j])
//		return dp[i][j] = solve(i+1 , j-1);
//	else
//	{
//		int c1 = solve(i+1,j)+1;
//		int c2 = solve(i,j-1)+1;
//		return dp[i][j] = min(c1,c2);
//	}
//}
//
//void path(int i , int j)
//{
//	if(i>j)return;
//	if(i==j)
//	{
//		putchar(s[i]);
//		return;
//	}
//	if(s[i]==s[j])
//	{
//		putchar(s[i]);
//		path(i+1,j-1);
//		putchar(s[i]);
//		return;
//	}
//	int opt = solve(i,j);
//	int c1 = solve(i+1,j)+1;
//	int c2 = solve(i,j-1)+1;
//	if(opt==c1)
//	{
//		putchar(s[i]);
//		path(i+1,j);
//		putchar(s[i]);
//		return;
//	}
//	else if(opt==c2)
//	{
//		putchar(s[j]);
//		path(i,j-1);
//		putchar(s[j]);
//		return;
//	}
//}
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	while(gets(s))
//	{
//		len = strlen(s);
//		memset(dp,-1 ,sizeof dp);
//		int res=solve(0,len-1);
//		printf("%d ",res);
//		path(0,len-1);
//		putchar('\n');
//	}
//
//
//	return 0;
//}