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
//int k;
//int l1,l2;
//string s1,s2;
//
//int dp[1009][1009];
//
//int solve(int i , int j)
//{
//	if(i >= l1 || j >= l2) return 0;
//	if(dp[i][j]!=-1)return dp[i][j];
//	int c  = 0;
//	int p1=0 , p2= 0 , p3 = 0;
//	while(i+c<l1 && j+c < l2 && s1[i+c] == s2[j+c])
//	{
//		++c;
//		if(c>=k)
//		p1 = max(p1 , solve(i+c , j+c) + c );
//	}
//
//
//	
//	 //p1 = solve(i+c , j+c) + c;
//
//	p2 = solve(i+1 , j);
//	p3 = solve(i , j+1);
//	
//	return dp[i][j] = max(p1 , max(p2,p3));
//
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	while(scanf("%d" , &k ) ==1 )
//	{
//		if(!k)break;
//		cin>>s1>>s2;
//		Set(dp,-1);
//		l1= s1.length() , l2 = s2.length();
//		int res = solve(0,0);
//		cout<< res << endl;
//	}
//
//	return 0;
//}
