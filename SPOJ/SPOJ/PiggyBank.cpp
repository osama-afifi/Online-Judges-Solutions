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
//typedef long long LL;
//using namespace std;
//
//int E,F;
//int n;
//int p[507];
//int w[507];
//LL dp[10007];
//LL oo = 1LL<<60;
//LL solve(int W)
//{
//	if(W<0)return 1<<25;
//	if(W==0)
//		return 0;
//	if(dp[W]!=-1)
//		return dp[W];
//	LL mini= oo;
//	FOR(i,0,n)
//		if(W-w[i]>=0)
//			mini = min(mini , solve(W-w[i])+p[i]);
//	return dp[W]=mini;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int t;
//	cin>>t;
//	while(t--)
//	{
//	cin>>E>>F;
//		cin>>n;
//		FOR(i,0,n)
//			cin>>p[i]>>w[i];
//		Set(dp,-1);		
//		LL res = solve(F-E);
//		if(res< (1LL<<58) )
//			cout<< "The minimum amount of money in the piggy-bank is " << res <<".\n";
//		else
//			cout<< "This is impossible.\n";
//	
//	
//	
//	}
//
//	return 0;
//}
//
//
