//// Adjacent Bit Counts
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
//long long  dp[1500][1500][2];
//int n,k;
//long long  solve(int index , int sum , bool prev)
//{
//	if(sum>k) return 0;
//	if(index == n)
//		if(sum==k) return 1;
//		else return 0;
//
//	if(dp[index][sum][prev]!=-1) return dp[index][sum][prev];
//
//		long long  s1 = 0 , s2 = 0 , s3 = 0 ;
//
//	 s1 = solve(index+1 , sum+prev , 1);
//	 s2 = solve(index+1 , sum , 0);
//
//	return dp[index][sum][prev] =  s1+s2;
//
//}
//
//
//int main()
//{
//	//freopen("input.in","r",stdin);
//
//	int kase,t;
//	
//	scanf("%d",&t);
//
//while(t--)
//	{
//		Set(dp,-1);
//		scanf("%d",&kase);
//		scanf("%d %d",&n,&k);
//
//		long long   res = solve(0,0,0);
//
//		printf("%d %lld\n" , kase ,res);
//	}
//	return 0;
//}