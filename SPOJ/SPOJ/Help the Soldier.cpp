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
//#define MAX 10009 
//using namespace std;
//typedef long long LL;
//
//
//
//int n,T;
//
//vector< vector< pair<int,int> > >V;
//int d[7][1009];
//
//int solve(int item, int t)
//{
//	if(item==6)
//		return 1<<25;
//	if(d[item][t]!=-1)
//		return d[item][t];
//	int maxi = 0;
//	FOR(i,0,V[item].size())
//		if(t-V[item][i].first>=0)
//		maxi = max(maxi , min(V[item][i].second, solve(item+1,t-V[item][i].first))) ;
//	return d[item][t] = maxi;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//while(cin>>n>>T)
//{
//	Set(d,-1);
//	int t;
//	V.clear();
//	V.resize(7);
//	FOR(i,0,n)
//	{
//		cin>>t;
//		int p,q;
//		cin>>p>>q;
//		V[t-1].push_back(mp(p,q));
//	}
//	int res = solve(0,T);
//	cout<<res<<endl;
//
//}
//
//	return 0;
//}