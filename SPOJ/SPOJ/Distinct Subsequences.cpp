//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <set>
//#include <queue>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair 
//#define MAX 100000
//using namespace std;
//
//
//char s[MAX+5];
//int last[30];
//long long dp[MAX+5];
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t;
//	long long M = 1000000007 ;
//	scanf("%d",&t);
//	while(t--)
//	{
//		scanf("%s",&s);
//		Set(last,-1);
//
//		dp[0]=1;
//		int L  = strlen(s);
//		FOR(i,1,L+1)
//		{
//			dp[i] = dp[i-1]*2;
//			if(last[s[i-1]-'A']!=-1)
//				dp[i]-=dp[last[s[i-1]-'A']];
//			last[s[i-1]-'A']=i-1;
//			dp[i] = (dp[i]+M)%M;
//		}
//		printf("%d\n",dp[L]);
//	}
//
//	return 0;
//}
