//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<set>
//#include<queue>
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) (A.begin(), A.end())
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//
//vector<int> pos[1000009];
//
//__inline bool bs(int g, int l , int r)
//{
//	vector<int>::iterator it = lower_bound(pos[g].begin(),pos[g].end(),l);
//	if(it!=pos[g].end() && (*it)<=r)
//		return true;
//	return false;
//}
//
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	FOR(i,1,90000)
//	{
//		int L = ceil(sqrt(sqrt(i)));
//		int R = sqrt(i);
//		R = (R>=i) ? i-1 : R;
//		int g=0;
//		while(bs(g,L,R))
//			g++;
//		pos[g].push_back(i);
//	}
//
//	LL n;
//	while(cin>>n)
//	{
//		LL res=0;
//		FOR(i,0,n)
//		{
//			LL x;
//			cin>>x;
//			LL L = ceil(sqrt(sqrt(x)));
//			LL R = sqrt(x);
//			R = (R>=x) ? x-1 : R;				
//			int g=0;
//			while(bs(g,L,R))
//				g++;
//			res ^= g;
//		}
//
//		if(res)
//			cout<< "Furlo\n";
//		else
//			cout << "Rublo\n";
//	}
//
//	return 0;
//}