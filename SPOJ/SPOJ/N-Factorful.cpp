//
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
//#include <time.h>
//#include <limits.h>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair 
//#define pb push_back 
//typedef long long LL;
//
//int dp[11][1000*1001];
//int x[1000*1001];
//
//__inline void sieve()
//{
//	for(int i = 2 ; i<= 1000000 ; i++)
//	{
//		if(!x[i])
//		{
//			for(int j=i+i ; j<=1000*1000 ; j+=i)
//				x[j]++;
//			x[i]=1;
//		}
//	}
//}
//
//int main() 
//{
//	freopen("input.in","r",stdin);
//	Set(dp,0);
//	sieve();
//
//	FOR(i,1,1000001)
//	{
//		FOR(j,0,11)
//			dp[j][i] = dp[j][i-1];
//		if(x[i]<=10)
//			dp[x[i]][i]++;
//	}
//
//	int t;
//	scanf("%d",&t);
//	while(t--)
//	{
//		int a,b,n;
//		scanf("%d %d %d",&a,&b,&n);
//
//		printf("%d\n", dp[n][b]-dp[n][a-1]);
//	}
//	return 0;
//}
