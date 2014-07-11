//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <set>
//#include <queue>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair 
//#define MAX 1000000
//using namespace std;
//
//int tree[30007];
//void upd(int i , int v)
//{
//	if(!i)return;
//	while(i<=30000)
//	{
//		tree[i]+=v;
//		i += (i & -i) ;
//	}
//}
//int cum(int i)
//{
//	if(!i)return 0;
//	int sum = 0;
//	while(i>0)
//	{
//		sum+=tree[i];
//	i-=(i&-i);
//	}
//	return sum;
//}
//
//int arr[30000+5];
//int linked[30000+5];
//int last[MAX+3];
//int ans[200005];
//
//
//vector< pair<int,int> > Q[MAX+3];
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int n;
//	Set(linked,-1);
//	Set(last,-1);
//
//	scanf("%d",&n);
//
//	FOR(i,1,n+1)
//	{
//		scanf("%d",&arr[i]);
//		if(last[arr[i]]==-1)
//			upd(i,1);
//		else
//			linked[last[arr[i]]]=i;
//		last[arr[i]] = i;
//	}
//	int q; 
//	scanf("%d",&q);
//	int a,b;
//	FOR(i,0,q)
//	{
//		scanf("%d %d",&a,&b);
//		Q[a].push_back ( mp(i,b) );
//	}
//	FOR(i,1,n+1)
//	{
//		FOR(j,0,Q[i].size())
//			ans[Q[i][j].first] = cum(Q[i][j].second);
//		upd(i,-1);
//		if(linked[i]!=-1)
//			upd(linked[i],1);
//	}
//	FOR(i,0,q)
//		printf("%d\n",ans[i]);
//
//	return 0;
//}
