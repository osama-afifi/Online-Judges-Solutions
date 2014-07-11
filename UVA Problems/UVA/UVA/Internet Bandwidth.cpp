//#include <iostream>
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
//	Node()
//	{}
//	Node(int n , int c) : node(n) , cost(c)
//	{}
//
//	bool operator <(const Node &a) const
//	{
//		return cost>a.cost;
//	}
//};
//
//int const oo=1<<25;
//int flow[1000][1000];
//
//int vis[2001];
//int n;
//int mini=oo;
//bool BFS(int s , int t)
//{
//	queue <int> BFS;
//	for(int i = 0 ; i<=2*n ; i++)
//		vis[i]=-1;
//
//	BFS.push(s);
//	int current;
//	while(!BFS.empty())
//	{
//		current=BFS.front();
//
//		if(current==t)
//			return true;
//		BFS.pop();
//		for(int i = 1 ; i<=n ; i++ )
//		{
//			if(vis[i]==-1 && flow[current][i] )
//			{
//				vis[i]=current;
//				BFS.push(i);
//			}
//		}
//	}
//	return false;
//}
//
//void get_flow(int s,int node)
//{
//	if(s==node)
//		return;
//	if(flow[vis[node]][node]<mini)
//	mini=flow[vis[node]][node];
//	
//	get_flow(s,vis[node]);
//	flow[vis[node]][node]-=mini;	
//	flow[node][vis[node]]+=mini;
//	
//}
//
//int ford_fulkerson(int s , int t)
//{
//	int maxflow=0;
//	while(BFS(s,t))
//	{
//		get_flow(s,t);
//		maxflow+=mini;
//			mini=oo;
//	}
//	return maxflow;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int test,kase=0;
//	int m,s,t;
//	int n1,n2,cost;
//	bool first=true;
//	while(cin>>n)
//	{
//		if(n==0)break;
//			memset(flow,0,sizeof(flow));	
//
//		scanf("%d%d%d",&s,&t,&m);
//
//		for(int i = 0 ; i < m ; i++)
//		{
//			scanf("%d%d%d",&n1,&n2,&cost);
//			flow[n1][n2]+=cost;
//			flow[n2][n1]+=cost;
//		}
//
//		printf("Network %d\nThe bandwidth is %d.\n\n",++kase,ford_fulkerson(s,t));	
//	}
//
//
//	return 0;
//}
//
