//
//// Tarjan SCC - UVA Come and Go
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
//int nodelow[2013];
//int nodeindex[2013];
//bool vis[2013];
//stack<int>S;
//
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
//		while(S.top()!=node)
//			{
//				vis[S.top()]=0;
//			S.pop();
//			}
//		S.pop();
//		SCC++;
//	}
//
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	while(scanf("%d%d",&n,&m)==2)
//	{
//		zatouna=SCC=0;
//		if(!n &&!m)break;
//		V.clear();
//		V.resize(n+2);
//		int n1,n2,dir;
//		while(!S.empty())S.pop();
//		Set(vis,0);
//		Set(nodelow,-1);
//		Set(nodeindex,-1);
//		FOR(i,0,m)
//		{
//			scanf("%d%d%d",&n1,&n2,&dir);
//			--n1,--n2;
//			V[n1].push_back(n2);
//			if(dir==2)
//				V[n2].push_back(n1);
//		}
//
//
//		FOR(i,0,n)
//			if(nodeindex[i]==-1)
//				tarjanSCC(i);
//
//
//		if(SCC==1)
//			puts("1");
//		else
//			puts("0");
//	}	
//	return 0;
//}
//
