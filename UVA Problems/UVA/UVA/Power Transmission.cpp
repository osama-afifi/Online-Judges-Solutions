//#include <iostream>
//#include <cstring>
//#include <stdio.h>
//#include <queue>
//
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
//// {{{ FAST integer input
//#define X10(n) ((n << 3) + (n << 1))
//const int MAXR = 65536;
//char buf[MAXR], *lim = buf + MAXR - 1, *nw = lim + 1;
//
//using namespace std;
//
//bool adapt()
//{ // Returns true if there is a number waiting to be read, false otherwise
//	while(nw <= lim && !isdigit(*nw)) ++nw;
//	if(nw > lim){
//		int r = fread(buf, 1, MAXR-1, stdin);
//		buf[r] = 0;
//		lim = buf + r - 1;
//		if(r == MAXR - 1){
//			while(isdigit(*lim)) ungetc(*lim--, stdin);
//			if(*lim == '-') ungetc(*lim--, stdin);
//		}
//		nw = buf;
//	}
//	while(nw <= lim && !isdigit(*nw)) ++nw;
//	return nw <= lim;
//}
//
//bool readint(int& n){ // Returns true on success, false on failure
//	if(!adapt()) return false;
//	bool ngtv = *(nw - 1) == '-';
//	for(n = 0; isdigit(*nw); n = X10(n) + *nw++ - '0');
//	if(ngtv) n = -n;
//	return true;
//}
//// end FAST integer input
//
//int const oo=0x3f3f3f3f;
//int flow[205][205];
//int vertex[205]; 
//
//int vis[205];
//int n;
//
//int mini=oo;
//bool BFS(int s , int t)
//{
//	queue <int> BFS;
//	for(int i = 0 ; i<=2*n+1 ; i++)
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
//		for(int i = 0 ; i<=2*n+1 ; i++ )
//		{
//			if(vis[i]==-1 && flow[current][i]>0 )
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
//int b,d,test,kase=0,m,n1,n2,cost,v;
//
//	while(readint(n))
//	{
//		//	if(n==0)break;
//		memset(flow,0,sizeof(flow));	
//
//		for(int i = 1 ; i <=n ;i++)
//		{
//			readint(v);
//		//	scanf("%d",&vertex[i]);
//			flow[i][n+i]+=v;
//		}
//
//		
//		readint(m);
//	//	scanf("%d",&m);
//		int n1,n2,c;
//		for(int i = 0 ; i <m ;i++){
//			readint(n1);
//			readint(n2);
//			readint(c);
//		//	scanf("%d %d %d",&n1,&n2,&c);
//			flow[n1+n][n2]+=c;
//		}
//
//		
//		readint(b);readint(d);
//	//	scanf("%d%d",&b,&d);
//	
//		for(int i = 0 ; i <b ;i++)
//		{
//			readint(v);
//			//scanf("%d",&v);
//			flow[0][v]=oo;
//		}
//		for(int i = 0 ; i <d ;i++)
//		{
//			readint(v);
//			//scanf("%d",&v);
//			flow[v+n][2*n+1]=oo;
//		}
//		
//		
//	
//				printf("%d\n",ford_fulkerson(0,2*n+1));
//
//	}
//
//
//	return 0;
//}
//
