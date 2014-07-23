//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <queue>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//using namespace std;
//
//int O,N,n;
//vector< pair< pair<int,int> ,int > >V;
//
//int d[1009][30][80];
//
//int solve(int index, int oo , int nn)
//{
//	if(oo>=O && nn>=N)
//		return 0;
//	if(oo>=O)oo=O;
//	if(nn>=N)nn=N;
//	if(index==n)return 1<<30;
//
//	if(d[index][oo][nn]!=-1)
//		return d[index][oo][nn];	
//int s1=solve(index+1,oo+V[index].first.first,nn+V[index].first.second)+V[index].second;
//int s2=solve(index+1,oo,nn);
//return d[index][oo][nn]=min(s1,s2);
//
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t;
//	scanf("%d",&t);
//	while(t--)
//	{
//		Set(d,-1);
//		V.clear();
//		scanf("%d%d",&O,&N);
//		scanf("%d",&n);
//		int xx,zz,vv;
//		FOR(i,0,n)
//		{
//			scanf("%d%d%d",&xx,&zz,&vv);
//			V.push_back(make_pair(make_pair(xx,zz),vv));
//		}
//		int res=solve(0,0,0);
//		printf("%d\n",res);
//	}
//	return 0;
//}
