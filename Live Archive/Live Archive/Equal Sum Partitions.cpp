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
//int dp[10009];
//set<int>S;
//
//int arr[10009];
//int t,n,kase;
//int mini = 1<<25;
//int solve(int index , int prev)
//{
//	if(index==n-1)
//	{
//		mini = min (mini , prev);
//		return 0;
//	}
//	if(index!=-1)
//	if(dp[index]!=-1)
//		{
//			if(S.find(prev)!=S.end())
//			return dp[index];
//		}
//	int mini = 1<<25;
//	int sum = 0;
//	FOR(i,index+1,n)
//	{
//		sum +=arr[i];
//		if(prev==-1 || sum==prev)
//		mini = min(mini, solve(i,sum)+sum);
//	}
//	S.insert(prev);
//	return  dp[index] = mini;
//
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	
//	scanf("%d",&t);
//	while(scanf("%d %d",&kase,&n)==2)
//	{
//		S.clear();
//		 mini = 1<<25;
//		Set(dp,-1);
//		FOR(i,0,n)
//			scanf("%d",&arr[i]);
//		solve(-1,-1);
//		printf("%d %d\n",kase , mini);
//	}
//	return 0;
//}