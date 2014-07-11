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
//
//
////General notes on max-flow 
////  - Resize adj list to number of nodes 
////  - call addedge to construct graph 
////  - residue flow in adjacency list (Edge::cst) 
////  -Get edges in maxFlow  ( get min cut ) 
////    -ff all egdes  if flow zero faks , else emshy 
////      -then in org adj lw edge el from vis wl to msh vis and flow +ve 
////
////       then cut edge 
////  -Get edges in maxFlow  ( get min vertex cover ) 
////    -ff all egdes  if flow zero faks , else emshy 
////    -B set of vertex 3l ymen , A set of vertex 3l shmal 
////    -result is (vistited nodes in B) U (not visited nodes in A)
////    - Max independent set = n - max_match  
////       - This nodes is all node that not in Min vertex cover.   
////    - Min path coverage “DAG”  = n- max_match 
////       -path is all edge with flow 1 and Go from B to A in result adj 
//
//
////Set the global vars using add edge and run max_flow 
//struct edge{ 
//	int to, flow, rev; 
//}; 
//
//vector<vector<edge> > adj; 
//#define MAX_NODES 200 
//#define oo 1e9 
//#define in(k) (int)k*2
//#define out(k) (int)k*2+1
//bool vis[MAX_NODES]; 
//int source, sink, node_count , edge_count; 
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
//	while((fl=find_path(source,o))) 
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
//	// clear and resize adj
//	// add-edges
//	//run-flow
//
//}