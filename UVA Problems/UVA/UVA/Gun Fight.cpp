//#include <iostream>
//#include <cstring>
//#include <math.h>
//#include <cstdio>
//#include <queue>
//#include <vector>
//
//#define EPS 1e-9
//
//using namespace std;
//
//struct point
//{
//	int x,y;
//	point()
//	{}
//	point(int a , int b) : x(a) , y(b)
//	{}
//
//};
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
//int forest[1007];
//int vis[2001];
//int n;
//int mini=oo;
//
//double dist(point a , point b)
//{
//	return sqrt((double)(a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
//}
//
//int getparent(int i)
//{
//if(forest[i]==i)return i;
//else return getparent(forest[i]);
//}
//
//bool isunion(int a , int b)
//{ return getparent(a)==getparent(b);}
//
//void makeunion(int a, int b)
//{
//	forest[getparent(a)]=getparent(b);
//}
//
//
//
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
//		mini=flow[vis[node]][node];
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
//		mini=oo;
//	}
//	return maxflow;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int n;
//	while(scanf("%d",&n)==1)
//	{
//	if(!n)break;
//
//	for(int i = 0 ;i<=n ; i++)
//	forest[i]=i;
//
//	int a,b;
//
//
//
//
//	}
//
//
//	return 0;
//}
//
