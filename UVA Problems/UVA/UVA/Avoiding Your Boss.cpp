//#include <iostream>
//#include <sstream>
//#include <string>
//#include <cstring>
//#include <cstdio>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//struct Node
//{
//	int node,cost;
//
//	bool operator <(const Node &a) const
//	{
//		return cost>a.cost;
//	}
//};
//
//vector <Node>  LINK[101];
//int VIS_BOSS[101];
//bool VIS[100];
//
//void path(int s , int nod)
//{
//	if(nod==s)return;
//	VIS[nod]=true;
//	path(s,VIS_BOSS[nod]);
//}
//
//
//int dijkstra1(int s ,int t )
//{
//	priority_queue <Node> DIJ;
//	Node start = { s,0};
//	DIJ.push(start);
//	bool found = false;
//	////
//	Node current;
//
//	while(!DIJ.empty())
//	{
//		current=DIJ.top();
//
//		if(current.node == t)
//		{
//			path(s,t);
//		}
//
//		DIJ.pop();
//
//		for(int i=0;i<LINK[current.node].size();i++)
//		{
//			if( !VIS_BOSS[LINK[current.node][i].node]==-1 )
//			{
//				VIS_BOSS[LINK[current.node][i].node]=current.node;
//				Node temp = { LINK[current.node][i].node , current.cost+LINK[current.node][i].cost };
//				DIJ.push(temp);				
//
//			}
//		}
//
//	}
//	return -1;
//}
//
//int dijkstra2(int s ,int t )
//{
//	priority_queue <Node> DIJ;
//	Node start = { s,0};
//	DIJ.push(start);
//	bool found = false;
//	////
//	Node current;
//
//	while(!DIJ.empty())
//	{
//		current=DIJ.top();
//
//		if(current.node == t)
//		{
//			return current.cost;
//		}
//
//		DIJ.pop();
//
//		for(int i=0;i<LINK[current.node].size();i++)
//		{
//			if( !VIS[LINK[current.node][i].node] )
//			{
//				VIS[LINK[current.node][i].node]=true;
//				Node temp = { LINK[current.node][i].node , current.cost+LINK[current.node][i].cost };
//				DIJ.push(temp);				
//
//			}
//		}
//
//	}
//	return -1;
//}
//
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int n,m,bl,bo,s,t;
//	int n1,n2,cost;
//	string text;
//	while(scanf("%d%d%d%d%d%d",&n,&m,&bl,&bo,&s,&t) ==6)
//	{
//		bl--,bo--,s--,t--;
//		for(int i = 0 ; i < n ; i++)
//			LINK[i].clear();
//
//
//
//		for(int i = 0 ; i<m ; i++)
//		{
//			scanf("%d%d%d",&n1,&n2,&cost);
//
//			n1--,n2--;
//			Node temp1 = { n2 , cost };
//			Node temp2 = { n1 , cost };
//			LINK[n1].push_back(temp1);
//			LINK[n2].push_back(temp2);
//
//			VIS[n2]=VIS[n1]=false;
//			VIS_BOSS[n2]=VIS_BOSS[n1]=-1;
//		}
//
//
//
//		dijkstra1(bo,bl);
//
//		VIS[bo]=VIS[bl]=true;
//
//		int res;
//		if((s==bl || t==bl || s==bo || t==bo || VIS[s]))
//			res=-1;
//		else res=dijkstra2(s,t);
//
//		if(res!=-1)
//			printf("%d\n",res);	
//		else
//			printf("MISSION IMPOSSIBLE.\n");
//
//
//	}
//
//
//	return 0;
//}
//
