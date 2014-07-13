////AC
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
//int n,m,k;
//long long tree1[100009];
//long long tree2[100009];
//long long arr[100009];
//
//long long cum(int i)
//{
//	if(!i)return 0;
//	long long   sum=0;
//	while(i>0)
//	{
//		sum+=tree1[i];
//		i-=(i&-i);
//	}
//	return sum;
//}
//
//void upd(int i, long long v)
//{
//	while(i<=100000)
//	{
//		tree1[i]+=v;
//		i+=(i&-i);
//	}
//}
//
//long long cum2(int i)
//{
//	if(!i)return 0;
//	long long   sum=0;
//	while(i>0)
//	{
//		sum+=tree2[i];
//		i-=(i&-i);
//	}
//	return sum;
//}
//
//void upd2(int i, long long v)
//{
//	while(i<=100000)
//	{
//		tree2[i]+=v;
//		i+=(i&-i);
//	}
//}
//
//
//pair<pair<int, int>, int> Q[100005];
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//cin>>n>>m>>k;
//	
//		Set(tree1,0);
//		Set(tree2,0);
//		int a,b,d;
//		FOR(i,0,n)
//			cin>>arr[i];
//		FOR(i,0,m)
//		{
//			cin>>a>>b>>d;
//			Q[i]=mp(mp(a,b),d);
//		}
//		FOR(i,0,k)
//		{
//			cin>>a>>b;
//			upd(a,1);
//			upd(b+1,-1);
//		}
//		FOR(i,0,m)
//		{
//			long long z = cum(i+1);
//			 z *= Q[i].second;
//			upd2(Q[i].first.first,z);
//			upd2(Q[i].first.second+1,-z);
//
//		}
//
//		FOR(i,0,n)
// cout << arr[i] + (cum2(i + 1)) << " ";
//
//		cout<<endl;
//	
//	return 0;
//}