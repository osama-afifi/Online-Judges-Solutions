//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<sstream>
//#include<queue>
//#include<set>
//#include<stack>
//#include<math.h>
//
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) A.begin(), A.end()
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//
//
//bool overlap(pair<int,int>  A, pair<int,int> B)
//{
//	return max(A.first,B.first) <= min(A.second,B.second);
//}
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	int p,q,l,r;
//
//	while(cin>>p>>q>>l>>r)
//	{
//		vector< pair<int,int> >X;
//		vector< pair<int,int> >Z;
//		int a,b;
//		FOR(i,0,p)
//		{
//			cin>>a>>b;
//			Z.push_back(mp(a,b));
//		}
//		FOR(i,0,q)
//		{
//			cin>>a>>b;
//			X.push_back(mp(a,b));
//		}
//
//
//		int c=0;
//		FOR(k,l,r+1)
//		{
//			bool done=0;
//			FOR(i,0,p)
//				FOR(j,0,q)
//			{
//				if(done)break;
//				if(overlap(Z[i],mp(X[j].first+k,X[j].second+k)))
//					c++, done=1;
//			}
//		}
//		cout << c <<endl;
//	}
//
//	return 0;
//}