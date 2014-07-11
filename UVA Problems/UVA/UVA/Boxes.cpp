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
//
//
//int dp[1009][3009];
//int W[1009];
//int C[1009];
//int n;
//
//int solve(int index , int cap)
//{
//	if(cap<0)return -1<<25;
//	if(index==n)
//		return 0;
//	if(cap !=1<<25)
//		if(dp[index][cap]!=-1)return dp[index][cap];
//	int s1 = solve(index+1,min(cap-W[index],C[index]))+1;
//	int s2 = solve(index+1,cap);
//
//	if(cap==1<<25) return max(s1,s2);
//	return dp[index][cap] = max(s1,s2);
//
//}
//
//int main(){
//
//	freopen("input.in","r",stdin);
//
//	while (cin>>n)
//	{	
//		Set(dp,-1);
//		if(!n)break;
//		FOR(i,0,n)
//			cin>>W[i]>>C[i];
//
//		int res = solve(0,1<<25);
//		cout<<res<<endl;
//	}
//	return 0;
//}
