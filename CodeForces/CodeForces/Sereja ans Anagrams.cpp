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
//#define all(c) c.begin() , c.end()
//#define mp(c) make_pair(c)
//#define pb push_back(c)
//
//typedef long long LL;
//
//using namespace std;
//
//int freq[200009];
//int temp[200009];
//int cur[200009];
//int a[200009];
//int b[200009];
//
//int main() 
//{
//	freopen("input.in","r",stdin);
//	int n,m,p,w,u;
//	while(cin>>n>>m>>p)
//	{
//		Set(freq,0);
//		Set(cur,0);
//		FOR(i,0,n)cin>>a[i];
//		FOR(i,0,m)cin>>b[i] , temp[i]=b[i];
//		sort(b,b+m);
//		u = unique(b,b+m)-b;
//		FOR(i,0,n)
//		{
//			if(!binary_search(b,b+u,a[i]))
//				a[i]=m;
//			else
//			{
//				int idx = (int)(lower_bound(b,b+u,a[i])-b);
//				a[i]=idx;
//			}
//		}
//		FOR(i,0,m)
//		{
//			int idx = (int)(lower_bound(b,b+u,temp[i])-b);
//				++freq[idx];		
//		}
//		w = 0;
//		vector<int>ans;
//		FOR(i,0,p)
//		{
//			int st = i;
//				w=0;
//			for(int j=st ; j<n ; j+=p)
//			{
//				++cur[a[j]];
//				++w;
//				while(st<n && cur[a[j]]>freq[a[j]])
//					--w, --cur[a[st]] , st+=p ;
//				if(st<n && w==m)
//					ans.push_back(st);
//			}
//			while(st<n)
//				cur[a[st]]=0, st+=p,--w;
//
//		}
//
//		sort(all(ans));
//		cout <<ans.size() <<endl;
//		if(ans.size())
//		{
//			FOR(i,0,ans.size())
//				cout << ans[i]+1  << " " ;
//			cout<<endl;
//		}
//	}
//	return 0;
//}