//// WA
//#include <vector>
//#include <stdio.h>
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
//#include <math.h>
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
//long double dp[109][109];
//bool vis[109][109];
//int n,t,b,l;
//bool B[109];
//bool L[109];
//
//__inline int getIndex(int i)
//{
//	if(i>n)
//		i = 2*n- i;
//	else return i;
//}
//long double solve(int i , int tr)
//{	
//	//i= getIndex(i);
//
//	//	if(tr<=0)return 0.0;
//	if(i ==n) 
//		return 1.0; //(long double)(tr==0.0);
//	if(tr<=0)return 0.0;
//
//	if(vis[i][tr])return dp[i][tr];
//	vis[i][tr]=1;
//
//	 long double ret = 0.0;	
//
//	FOR(k,1,7)
//	{			
//		int nxt = getIndex(i+k);
//		if(B[nxt])
//			nxt=0;
//		ret += solve(nxt, tr-1-L[nxt])/6.0;
//	}
//	return dp[i][tr] = ret;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	while(cin>>n>>t>>l>>b && (n | t | l | b) )
//	{
//		int x;
//		Set(vis,0);
//		Set(L,0);
//		Set(B,0);
//		FOR(i,0,l)
//		{
//			scanf("%d",&x);
//			L[x] =1;
//		}
//		FOR(i,0,b)
//		{
//			scanf("%d",&x);
//			B[x] =1;
//		}
//		 long double res = 0;
//		res = solve(0,t);
//		printf("%.6lf\n",res);
//	//	cout << setprecision(6) << fixed << res <<endl;
//	}
//
//
//	return 0;
//}
