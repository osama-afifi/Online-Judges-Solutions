//// NOT AC
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
//typedef long long LL;
//
//int n,k;
//LL dp[70][70][105][2];
//LL solve(int one, int zero, int mod, bool b)
//{
//	if(one>(n+1)/2)return 0;
//	if(zero>(n+1)/2)return 0;
//	if(one+zero==n)
//		return (mod==0 && one == zero);
//	if(dp[one][zero][mod][b]!=-1)
//		return dp[one][zero][mod][b];
//	LL s1 = 0 , s2 = 0;
//	s1 = solve(one+1, zero, (mod*2+1)%k, 1);
//	if(b)
//	s2 = solve(one, zero+1, (mod*2)%k, b);
//	return dp[one][zero][mod][b] = s1+s2;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	
//	int kase=0;
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		cin>>n>>k;
//		Set(dp,-1);
//	LL res = 0;
//	if(k>0)
//		res = solve(0,0,0,0);
//	cout<< "Case "<< ++kase <<": " << res <<endl;
//	}
//	return 0;
//}