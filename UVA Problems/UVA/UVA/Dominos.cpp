//
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
//int n,m,SCC;
//vector< vector<int> >V;
//
//int zatouna=0;
//int nodelow[100009];
//int nodeindex[100009];
//bool vis[100009];
//int component[100009];
//int degree[100009];
//stack<int>S;
//void tarjanSCC(int node)
//{
//	nodeindex[node]=nodelow[node]=zatouna++;
//	vis[node]=1;
//	S.push(node);
//	FOR(i,0,V[node].size())
//	{
//		int v=V[node][i];
//		if(nodeindex[v]==-1)
//			tarjanSCC(v);
//		 if(vis[v])
//			nodelow[node]=min(nodelow[node],nodelow[v]);
//	}
//
//	if(nodeindex[node]==nodelow[node]) //SCC Root Found
//	{
//		while(1)
//		{
//			int v=S.top();
//			component[v]=SCC;
//			vis[v]=0;
//			S.pop();			
//			if(v==node)break;
//		}
//		SCC++;
//	}
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
//		Set(degree,0);
//		scanf("%d%d",&n,&m);
//		zatouna=SCC=0;
//		V.clear();
//		V.resize(n+2);
//		int n1,n2;
//		while(!S.empty())S.pop();
//		Set(vis,0);
//		Set(nodelow,0);
//		Set(nodeindex,-1);
//		FOR(i,0,m)
//		{
//			scanf("%d%d",&n1,&n2);
//			--n1,--n2;
//			V[n1].push_back(n2);
//		}
//
//		FOR(i,0,n)
//			if(nodeindex[i]==-1)
//				tarjanSCC(i);
//		FOR(i,0,n)
//			FOR(j,0,V[i].size())
//			if(component[i]!=component[V[i][j]])
//				degree[component[V[i][j]]]++;
//
//		int res=0;
//		FOR(i,0,SCC)
//			if(!degree[i])
//				res++;
//
//		printf("%d\n",res);
//	}	
//	return 0;
//}
//
