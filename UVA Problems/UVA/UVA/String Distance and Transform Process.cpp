//#include <iostream>
//#include <stdio.h>
//#include <algorithm>
//#include <cstring>
//#include <vector>
//#include <math.h>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pii pair<int,int>
//#define pll pair<LL,LL>
//typedef long long LL;
//using namespace std;
//
//
//char s1[100];
//char s2[100];
//int dp[109][109];
//int len1;
//int len2;
//int solve(int i , int j)
//{
//	if(i==len1)	return dp[i][j] = len2-j; // chars added from s2
//	if(j==len2)	return dp[i][j] = len1-i; // chars delete from s1 to get s2
//	if(dp[i][j]!=-1) return dp[i][j];
//	if(s1[i] == s2[j])	return dp[i][j] = solve(i+1 , j+1);
//
//	int c1 = solve(i, j+1)+1;   //char inserted  in s2
//	int c2 = solve(i+1, j)+1;   //char deleted in s1
//	int c3 = solve(i+1, j+1)+1; //char replaced in s1
//	return dp[i][j] = min(c1 , min(c2,c3));
//}
//
//int step, shift;
//
//void path(int i , int j)
//{
//	if(i == len1)
//	{
//		// add charachters to complete s2
//		FOR(k,0,len2-j)
//		{
//			printf("%d Insert %d,%c\n", ++step , shift+i+k+1 , s2[j+k]);	
//		}
//		shift+=len2-j;
//		return;
//	}
//	if(j==len2)
//	{
//		// delete charachters to complete s2
//		FOR(k,0,len1-i)
//		{
//			printf("%d Delete %d\n", ++step , shift+i+k+1 );
//			--shift;
//		}
//		return;
//	}
//	if(s1[i] == s2[j])
//	{
//		path(i+1,j+1);
//		return;
//	}
//	int opt = solve(i,j);
//	int c1 = solve(i, j+1)+1;   //char inserted  in s2
//	int c2 = solve(i+1, j)+1;   //char deleted in s1
//	int c3 = solve(i+1, j+1)+1; //char replaced in s1
//	if(opt == c1)
//	{
//printf("%d Insert %d,%c\n" , ++step , shift+i+1 , s2[j]);
//		++shift;	
//		path(i,j+1);
//	}
//	else if(opt ==c2)
//	{		
//		printf("%d Delete %d\n", ++step , shift+i+1 );
//		--shift;
//		path(i+1,j);
//	}
//	else if(opt == c3)
//	{
//		printf("%d Replace %d,%c\n" , ++step , shift+i+1 , s2[j]);
//		path(i+1,j+1);
//	}
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	bool f =1;
//	while(gets (s1) && gets(s2))
//	{
//		if(!f)putchar('\n');
//		f=0;
//		Set(dp,-1);
//		step = shift = 0;
//		len1 = strlen(s1);
//		len2 = strlen(s2);
//		int res = solve(0, 0);
//		printf("%d\n",res);
//		path(0 , 0);
//	}
//
//	return 0;
//}