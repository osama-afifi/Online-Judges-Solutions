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
//char s1[1009];
//char s2[1009];
//int len;
//int const oo = 1<<25;
//int dp[1007][1007];
//string lex[1009][1007];
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	while(scanf("%s",&s1)==1)
//	{
//		len = strlen(s1);
//		FOR(i,0,len)
//			s2[len-1-i] = s1[i];
//		FOR(i,0,len+1)
//		{
//			dp[i][0] = dp[0][i] = 0;
//			lex[i][0] = lex[0][i] = "";
//		}
//
//		FOR(i,0,len)
//			FOR(j,0,len)
//				if(s1[i]==s2[j])
//				{
//					dp[i+1][j+1] = dp[i][j]+1;
//					lex[i+1][j+1] = lex[i][j]+s1[i];
//				}
//				else
//				{
//					if(dp[i+1][j]>dp[i][j+1])
//					{
//						dp[i+1][j+1] = dp[i+1][j];
//						lex[i+1][j+1] = lex[i+1][j];
//					}
//					else if(dp[i+1][j]<dp[i][j+1])
//					{
//						dp[i+1][j+1] = dp[i][j+1];
//						lex[i+1][j+1] = lex[i][j+1];
//					}
//					else
//					{
//						dp[i+1][j+1] = dp[i][j+1];
//						if(lex[i][j+1] < lex[i+1][j])
//							lex[i+1][j+1] = lex[i][j+1];
//						else
//							lex[i+1][j+1] = lex[i+1][j];
//					}
//				}
//		int res = dp[len][len];
//		string sol = lex[len][len];
//
//			FOR(i,0,res/2 + (res&1))
//				putchar(sol[i]);
//			FOR(i,0,res/2)
//			putchar(sol[res/2-1-i]);
//
//		putchar('\n');
//	}
//	return 0;
//}