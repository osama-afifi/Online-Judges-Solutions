#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <cstring>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <queue>

using namespace std;
#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
#define Set(a, s) memset(a, s, sizeof (a))
#define mp make_pair
using namespace std;

//Min Cost Max Flow 
//Add edges with –ve cost if max cost is required 

int const oo = 1e7;
int n,m; 
struct Edge 
{ 
	int fr,to,cost,flow; 
	Edge(){fr=to=cost=flow=-1;} 
	Edge(int a,int b,int c,int d) 
		: fr(a),to(b),cost(c),flow(d) 
	{ } 
}; 
struct MinCostMaxFlow 
{ 
	vector<Edge> E; 
	int flow[415]; 
	int cost[415]; 
	int path[415]; 
	vector< vector<pair<int,Edge*> > >adj; 
	void AddEdge(int fr,int to,int co,int fl) 
	{ 
		E.push_back(Edge(fr,to,co,fl));
		adj[fr].push_back(mp(to,&E.front()));
		E.push_back(Edge(to,fr,-co,0));
		adj[to].push_back(mp(fr,&E.front()));
	
	} 
	MinCostMaxFlow() 
	{ clear(); } 

void getPath(int src, int snk) {
	memset(flow , 0, sizeof flow);
	fill(cost , cost+405 , oo);
	flow[src] = oo;
	cost[src] = 0;
	for(int i = 0; i<n-1; i++) {
		bool relaxed = 0;
		for(int j = 0; j< E.size(); j++) {
			Edge &e = E[j];
			if(e.flow && cost[e.to]> cost[e.fr]+e.cost) {
				cost[e.to] = cost[e.fr]+e.cost;
				relaxed = true;
				path[e.to] = j;
				flow[e.to] = min(flow[e.fr] , e.flow);
			}
		}
		if(!relaxed) break;
	}
}
	pair<int,int> MCMF(int src,int sink)  // flow-cost
	{ 
		if(src == sink) 
			return make_pair(oo,0); 
		int totc=0,totf=0,cur; 
		while(1) 
		{ 
			getPath(src,sink); 
		if (flow[sink]==0)
			break;
		for (int cur = sink ; cur!= src ; cur = E[path[cur]].fr) {
			E[path[cur]].flow -= flow[sink];
			E[path[cur]^1].flow+=flow[sink];
			totc+= flow[sink]*E[path[cur]].cost;
		}
		totf+=flow[sink];
			totf += flow[sink]; 
		} 
		return make_pair(totf,totc); 
	} 
	void clear() 
	{ 
		E.clear(); 
		adj.clear();
		adj.resize(n+1);
		memset(flow,0,sizeof(flow)); 
		memset(cost,0,sizeof(cost)); 
		memset(path,-1,sizeof(path)); 
	} 
}; 
