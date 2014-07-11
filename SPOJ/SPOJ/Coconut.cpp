//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <queue>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//using namespace std;
//
//int n,m;
//int flow[305][305];
//int path[305];
//int const oo =1<<25;
//
//
//bool bfs(int s , int t)
//{
//	Set(path,-1);
//	queue<int>Q;
//	Q.push(s);
//	int cur;
//	while(!Q.empty())
//	{
//		cur=Q.front();
//		Q.pop();
//		if(cur==t)return true;
//		FOR(i,0,n+2)
//			if(cur!=i && path[i]==-1 && flow[cur][i]>0)
//		{
//			Q.push(i);
//			path[i]=cur;
//		}
//	
//	}
//
//	return false;
//}
//
//void augment(int node, int s, int & bottleneck)
//{
//	if(node==s || node==-1)return;
//	bottleneck=min(bottleneck,flow[path[node]][node]);
//	augment(path[node],s,bottleneck);
//	flow[path[node]][node]-=bottleneck;
//	flow[node][path[node]]+=bottleneck;
//
//}
//int maxflow(int s ,int t)
//{
//	int mf=0;
//	int bottleneck=0;
//	while(bfs(s,t))
//	{
//		bottleneck=oo;
//		augment(t,s,bottleneck);
//		mf+=bottleneck;
//	}
//	return mf;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t;
//	
//	while(scanf("%d%d",&n,&m)==2)
//	{
//		if(n==0 && m==0)break;
//		Set(flow,0);
//		int num,n1,n2;
//		FOR(i,0,n)
//		{
//			scanf("%d",&num);
//			if(!num)
//				flow[0][i+1]=1;
//			else
//				flow[i+1][n+1]=1;
//		}
//		
//		FOR(i,0,m)
//		{
//			scanf("%d%d",&n1,&n2);
//			flow[n1][n2]=flow[n2][n1]=1;
//		}
//		printf("%d\n",maxflow(0,n+1));
//	}
//	return 0;
//}
