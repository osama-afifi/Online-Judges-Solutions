//// Bridges & Articulation Points
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
//vector< vector<int> >V;
//int n;
//vector<int>dfsnum;
//vector<int>nodeParent;
//vector<int>dfslow;
//vector<bool>artt;
//vector< pair<int,int> >bridge;
//int dfscount, rootNode, rootChildren;
//
//void bridges(int node)
//{
//	dfsnum[node]=dfslow[node]=dfscount++;
//	FOR(i,0,V[node].size())
//	{
//		int v=V[node][i];
//		if(dfsnum[v]==-1)
//		{
//			nodeParent[v]=node;
//			if(node==rootNode)rootChildren++;
//			bridges(v);
//
//			if(dfslow[v]>=dfsnum[node])
//				artt[node]=1;
//			if(dfslow[v]>dfsnum[node])
//				bridge.push_back(make_pair(node,v));
//
//			dfslow[node]=min(dfslow[node],dfslow[v]);
//		}
//		else if(v!=nodeParent[node])
//			dfslow[node]=min(dfslow[node],dfslow[v]);
//	}
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	while(scanf("%d",&n)==1)
//	{
//		dfscount=0;
//		V.clear();
//		bridge.clear();
//		V.resize(n);
//		dfsnum.assign(n,-1);
//		dfslow.assign(n,0);
//		artt.assign(n,0);
//		nodeParent.assign(n,0);
//		int m,k,num;
//		FOR(i,0,n)
//		{
//			scanf("%d (%d)",&m,&k);
//			FOR(j,0,k)
//				scanf("%d",&num), V[m].push_back(num);
//		}
//		FOR(i,0,n)
//			if(dfsnum[i]==-1)
//				rootChildren=0,rootNode=i,bridges(i),artt[rootNode]=(rootChildren>1);
//
//		sort(bridge.begin() , bridge.end());
//		printf("%d critical links\n",bridge.size());
//		FOR(i,0,bridge.size())
//			printf("%d - %d\n",bridge[i].first,bridge[i].second);
//		putchar('\n');
//	}	
//	return 0;
//}
