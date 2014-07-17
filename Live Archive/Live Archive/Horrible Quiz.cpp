////WA :(
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
//int n,w;
//long double  A[1300];
//long double  W[1300];
//long double  dp[1300][1300][2];
//bool vis[1300][1300][2];
//
//long double solve(int idx , int w , int sign)
//{
//	if(w<0)return (!sign)? 1e9 : -1e9;
//	if(idx==n)
//		 return (long double)15000.0;
//	if(vis[idx][w][sign]) return dp[idx][w][sign];
//	vis[idx][w][sign]=1;
//	long double s1,s2,s3,s4;
//	s1 =solve(idx+1,w , sign)*A[idx];
//	s2 =solve(idx+1,w , sign^1)*W[idx]*(long double)-1.0;
////	if(w)
//	s3 =solve(idx+1,w-1 , sign^1)*(1.0-A[idx]-W[idx])*(long double)-1.0;
//	s4 =solve(idx+1,w , sign)*(1.0-A[idx]-W[idx]);
//
//	return dp[idx][w][sign] = s1+s2+min(s3,s4);
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int kase=0, t;
//	scanf("%d",&t);
//
//	while(t--)
//	{
//		Set(vis,0);
//			cin>>n>>w;
//			FOR(i,0,n)
//			{
//				cin>>A[i];
//				A[i]/=100.0;
//			}
//			FOR(i,0,n)
//			{
//				cin>>W[i];
//				W[i]/=100.0;
//			}
//			long double res = solve(0,w, 0);
//			cout << "Case #" << ++kase << ": " << setprecision(3) << fixed << res <<endl;
//	}
//	return 0;
//}