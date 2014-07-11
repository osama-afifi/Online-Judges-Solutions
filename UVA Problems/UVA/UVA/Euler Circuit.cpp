//#include <iostream>
//#include <stdio.h>
//#include <string>
//#include <cstring>
//#include <vector>
//#include <iomanip>
//
//using namespace std;
//int n,e;
//bool vis[207];
//int floyd[207][207];
//int deg[207];
//vector< vector<int> > V;
//vector<int>sol;
//int match[500];
//int need[207]; //need for Bipartite Matching
//
//struct edge
//{
//	int e1,e2;
//	bool u;
//	edge()
//	{}
//	edge(int ee1,int ee2,bool uu) : e1(ee1),e2(ee2),u(uu)
//	{}
//}edges[500];
//
//bool first;
//void tour(int x)
//{
//	while (V[x].size() > 0) {
//		int y = V[x].back();
//		V[x].pop_back();
//		tour(y);
//	}
//	printf(first ? " %d" : "%d", x);
//	first=true;
//}
//
//int dfs(int node)
//{
//	if (vis[node]) return 0;
//	vis[node] = 1;
//
//	for (int i = 0; i < V[node].size(); i++)
//		if (match[V[node][i]] == 0 || dfs(match[V[node][i]]))
//		{
//			match[V[node][i]] = node;
//			return 1;
//		}
//		return 0;
//}
//bool valid()
//{
//	memset(deg, 0 , sizeof deg);
//	memset(floyd, 0 , sizeof floyd);
//	int i,j,k;
//	//degree count
//	for( i = 0 ; i<e ;i++)
//	{
//		floyd[edges[i].e1][edges[i].e2]=floyd[edges[i].e2][edges[i].e1]=1;
//		deg[edges[i].e1]++;
//		deg[edges[i].e2]++;
//	}
//	//all even
//	for( i = 1 ; i<=n ;i++)
//		if(deg[i]&1)return 0;
//
//	//floyd
//
//	for ( k = 1; k <= n; k++)
//	{
//		floyd[k][k]=1;
//		for ( floyd[k][k]=1,i = 1; i <= n; i++)
//			//	if (floyd[i][k])
//			for ( j = 1; j <= n; j++)
//				floyd[i][j] = floyd[i][k] | floyd[k][j];
//	}
//
//	//connected
//	for( i = 1 ; i<=n ;i++)
//		for(  j = 1 ; j<=n ; j++)
//			if(!floyd[i][j])
//				return 0;
//
//	//prepare matching
//	memset(match, 0, sizeof(match));
//	for( i = 1 ; i<=n ;i++)
//		need[i]=deg[i]/2;
//
//	for ( i = 1; i <= n; i++)
//		V[i].clear();
//
//	for ( i = 0; i < e; i++)
//		if (edges[i].u) 
//		{
//			V[edges[i].e1].push_back(i);
//			V[edges[i].e2].push_back(i);
//		}
//
//		for ( i = 0; i < e; i++)
//			if (!edges[i].u && --need[match[i]=edges[i].e2] < 0)
//				return 0;
//
//		/* now find a perfect matching... */
//		for ( i = 1; i <= n; i++)
//			for ( ; need[i] > 0; need[i]--) 
//			{
//				memset(vis, 0, sizeof(vis));
//				if (!dfs(i)) return 0;
//			}
//
//			/* construct fully directed graph from the matching, and
//			find euler tour in it with a classical algorithm */
//
//			/* edges' directions are reversed, so that tour() can
//			immediately print the tour's vertices */
//
//			for (int i = 1; i <= n; i++)
//				V[i].clear();
//
//			for (int i = 0; i < e; i++)
//				if (!edges[i].u || edges[i].e2==match[i])
//					V[edges[i].e2].push_back(edges[i].e1);
//				else
//					V[edges[i].e1].push_back(edges[i].e2);
//
//			first=false;
//			tour(1);
//			putchar('\n');
//			return true;
//}
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		sol.clear();
//		V.clear();
//		memset(vis,0,sizeof vis);
//
//		cin>>n>>e;
//		V.resize(n+1);
//		int n1,n2;
//		char dir;
//		for(int i = 0 ; i<e ; i++)
//		{
//			cin>>edges[i].e1>>edges[i].e2>>dir;
//			if(dir=='U')edges[i].u=1;
//			else edges[i].u=0;
//		}
//		
//		if(!valid())
//			puts("No euler circuit exist");
//		if(t)putchar('\n');
//	}
//
//	return 0;
//}
