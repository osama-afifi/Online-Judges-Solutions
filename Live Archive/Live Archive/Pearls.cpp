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
//int n;
//int num[109];
//int cum[109];
//int price[109];
//int dp[109];
//
////int solve(int index , int last)
////{
////	if(index==n)
////		return 0;
////	if(dp[index][last]!=-1)
////		return dp[index][last];
////
////	int sum = 10;
////	//FOR(i,last,index+1)
////	//	sum+=num[i];
////	if(last)
////		sum += cum[index]-cum[last-1];
////	else sum += cum[index];
////
////	int s1=1<<30 ,s2 = 1<<30;
////	s1 = solve(index+1, index+1) + sum * price[index] ;
////	if(index!=n-1)
////		s2 = solve(index+1, last) ;
////
////	return dp[index][last]=min(s1,s2);
////}
//
//int solve2(int index)
//{
//	if(index==n)
//		return 0;
//	if(dp[index]!=-1)
//		return dp[index];
//
//	int sum = 10;
//	//FOR(i,last,index+1)
//	//	sum+=num[i];
//
//	int s1=1<<30;
//	for(int i =index ; i<n ; i++)
//	{
//		sum+=num[i];
//	s1 = min (solve2(i+1) + sum * price[i] ,s1 );
//	}
//
//	return dp[index]=s1;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t;
//	scanf("%d",&t);
//	while(t--)
//	{
//		Set(dp,-1);
//		scanf("%d",&n);
//		FOR(i,0,n)
//			scanf("%d %d",&num[i],&price[i]);
//		cum[0]=num[0];
//		FOR(i,1,n)
//			cum[i] += cum[i-1]+ num[i];
//		printf("%d\n",solve2(0));
//
//	}
//
//
//
//	return 0;
//}