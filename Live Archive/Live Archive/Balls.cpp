////Equal Sum Partitions
//
//#include <vector>
//#include <list>
//#include <map>
//#include <set>
//#include <queue>
//#include <deque>
//#include <stack>
//#include <bitset>
//#include <algorithm>
//#include <functional>
//#include <numeric>
//#include <utility>
//#include <sstream>
//#include <iostream>
//#include <iomanip>
//#include <cstdio>
//#include <cmath>
//#include <cstdlib>
//#include <ctime>
//#include <cstring>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair
//
//int dp[55][1009];
//int b,n;
//
//int solve(int ball , int falls)
//{
//
//	if( ball == 1)
//		return falls;
//	if(falls==1)
//		return  1;
//	if(falls==0)
//		return  0;
//	if(dp[ball][falls]!=-1)
//		return dp[ball][falls];
//	int mini = 1<<25;
//	FOR(i,1,falls+1)
//	{
//		int s1 = solve(ball-1 , i-1)+1; // new ball taken
//		int s2 = solve(ball , falls-i)+1; // a fall position chosen
//		// max to see worst case
//		mini = min(mini , max(s1,s2));
//	}
//	return dp[ball][falls] = mini;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int kase , t;
//	scanf("%d",&t);
//	Set(dp,-1);
//	solve(50,1000);
//	while(t--)
//	{
//
//		scanf("%d",&kase);
//		scanf("%d %d",&b,&n);
//		int res = dp[b][n];
//		printf("%d %d\n",kase, res);
//	}
//	return 0;
//}