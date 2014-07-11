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
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair
//using namespace std;
//
//struct edge{ 
//	int to, flow, rev; 
//}; 
//
//vector<vector<edge> > adj; 
//#define MAX_NODES 200 
//#define oo 1e9 
//bool vis[MAX_NODES]; 
//int source, sink;//, node_count , edge_count; 
//
//void add_edge(int from,int to, int flow) 
//{ 
//	edge e1={to,flow,adj[to].size()}; 
//	edge e2={from,0,adj[from].size()}; 
//	adj[from].push_back(e1); 
//	adj[to].push_back(e2); 
//} 
//int find_path(int cur, int flow) 
//{ 
//	if(cur == sink) 
//		return flow; 
//	if(vis[cur] || !flow) 
//		return 0; 
//	vis[cur] = true; 
//	for(int i=0 ; i < adj[cur].size(); i++) 
//	{ 
//		edge &e = adj[cur][i]; 
//		int fl = find_path(e.to,min(flow,e.flow)); 
//		if(fl){ 
//			edge &r = adj[e.to][e.rev]; 
//			e.flow -= fl; 
//			r.flow += fl; 
//			return fl; 
//		} 
//	} 
//	return 0; 
//} 
//int max_flow() 
//{ 
//	memset(vis,0,sizeof(vis)); 
//	int res = 0, fl; 
//	while((fl=find_path(source,oo))) 
//	{ 
//		res += fl; 
//		memset(vis,0,sizeof(vis)); 
//	} 
//	return res; 
//} 
//
//
//int main()
//{
//	freopen("input.in","r" , stdin);
//	int t;
//	scanf("%d",&t);
//	while(t--)
//	{
//		int n,k,u;
//		scanf("%d",&n);
//		adj.clear();
//		adj.resize(n);
//		FOR(i,0,n-1)
//		{
//			scanf("%d",&k);
//			while(k--)
//			{
//				scanf("%d",&u);
//				if(u==n || i==0)
//				add_edge(i,u-1,1);		
//				else
//				add_edge(i,u-1,n);
//			}
//		}
//		source = 0 , sink = n-1;
//		int res = max_flow();
//		printf("%d\n",res);
//	}
//	return 0;
//}