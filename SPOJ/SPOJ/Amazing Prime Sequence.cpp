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
//LL dp[1000*1000*10+9];
//int p[1000*1000*10+9];
//
//
//
//int main() 
//{
//	freopen("input.in","r",stdin);
//
//
//	for(LL i = 2 ; i<=1000*1000*10 ; i++)
//	{
//		if(!p[i])
//		{
//			p[i]=i;
//			for(LL j = i*i ; j<=1000*1000*10 ; j+=i)
//				if(p[j]==0 || p[j]>i)
//					 p[j]=i;
//		}
//	
//	}
//	dp[0]=dp[1]=0;
//	for(int i = 2 ; i<=1000*1000*10 ; i++)
//		dp[i] = dp[i-1] + p[i];
//
//	int t;
//	scanf("%d",&t);
//	while(t--)
//	{
//		int n;
//		scanf("%d",&n);
//		printf("%lld\n",dp[n]);
//	}
//
//	return 0;
//}
