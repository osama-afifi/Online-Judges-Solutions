////// 7alawany Solution
////#include <iostream>
////#include <algorithm>
////#include <stdio.h>
////#include <cstring>
////#include <string>
////#include <sstream>
////#include <vector>
////#include <map>
////#include <queue>
////#include <stack>
////
////using namespace std;
////#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
////#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
////#define Set(a, s) memset(a, s, sizeof (a))
////using namespace std;
////
////vector< vector<int> >V;
////bool vis[2013];
////int n,m;
////
////int dfs(int node)
////{
////	int sum=1;
////	vis[node]=1;
////	FOR(i,0,V[node].size())
////		if(!vis[V[node][i]])
////			sum+=dfs(V[node][i]);
////	return sum;
////}
////
////int main()
////{
////	freopen("input.in","r",stdin);
////	while(scanf("%d%d",&n,&m)==2)
////	{
////		
////		if(!n &&!m)break;
////		V.clear();
////		V.resize(n+2);
////		int n1,n2,dir;
////		Set(vis,0);
////		FOR(i,0,m)
////		{
////			scanf("%d%d%d",&n1,&n2,&dir);
////			V[n1].push_back(n2);
////			if(dir==2)
////				V[n2].push_back(n1);
////		}
////		bool SCC=1;
////		FOR(i,1,n+1)
////			if(dfs(i)==n)
////				Set(vis,0);
////			else {SCC=0;break;}
////
////			if(SCC)
////				puts("1");
////			else
////				puts("0");
////	}	
////	return 0;
////}
//
//
//// Tarjan SCC WA
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
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//using namespace std;
//
//int n,t;
//struct member
//{
//	int val,sum,index;
//	bool operator < (const member &v)const
//	{return (v.val<val);}
//}m[25];
//int avg=0;
//int la2;
//int solve(int index ,int cur , int next)
//{
//	//if(index==n && cur>=avg)
//		//return 1;
//	if(index==n)return 0;
//	int sum=0;
//	if(cur>=avg && index!=la2)sum=1;
//	FOR(i,next+1,n)
//		//if(la2!=m[i].index)
//			sum+=solve(index+1,cur+m[i].val , i);//+(cur+m[i].val>=avg);
//	return sum;
//}
//
//bool cmp(member a, member b)
//{
//	return a.index<b.index;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	scanf("%d",&t);
//	while(t--)
//	{
//		scanf("%d",&n);
//		int total=0;
//		FOR(i,0,n)
//		{
//			scanf("%d",&m[i].val);
//			m[i].index=i;;
//			m[i].sum=0;
//			total+=m[i].val;
//		}
//		avg=total/2;
//		sort(m,m+n);
//		FOR(i,0,n)
//		{
//			la2=i;
//		m[i].sum=solve(i+1,m[i].val,-1);
////			if(m[i].val>=avg)
////				m[i].sum++;
//		}
//		sort(m,m+n,cmp);
//		FOR(i,0,n)
//			printf("party %d has power index %d\n",m[i].index+1,m[i].sum);
//		if(t)putchar('\n');
//	}	
//	return 0;
//}