//
//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <queue>
//#include <stack>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair
//
//bool cmp(pair<int,int> a , pair<int,int>b)
//{
//	if(a.second!=b.second)
//		return a.second<b.second;
//	return a.first<b.first;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t;
//	cin>>t;
//	int kase=0;
//	while(t--)
//	{
//		int n;
//		cin>>n;
//		vector< pair<int,int> >V;
//		vector< int >sol;
//		// each element in sol represent the ith most outer left side interval index containing other intervals
//		// sol.size() represent the minimal number of intevals to include other intervals such that a1.left<a2.left a2.right<a1.right
//
//		FOR(i,0,n)
//		{
//			int a,b;
//			cin>>a>>b;
//			V.push_back(mp(a,b));
//		}
//
//		sort(V.begin(),V.end(),cmp); // sort on right end then left
//
//		FOR(i,0,n)
//		{
//			int idx = (int)(lower_bound(sol.begin(),sol.end(),V[i].first+1)-sol.begin());
//			if(idx == sol.size())
//				sol.push_back(V[i].first);
//			else 
//				sol[idx]=V[i].first;
//		}
//		cout << "Case " << ++kase << ": ";
//		cout << sol.size() <<endl;
//	}
//	return 0;
//}
