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
//int flow[100][100];
//int path[100];
//int const oo =1<<25;
//int indx=0;
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
//		FOR(i,0,indx)
//			if(cur!=i && path[i]==-1 && flow[cur][i]>0)
//			{
//				Q.push(i);
//				path[i]=cur;
//			}
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
//
//	while(scanf("%d",&n)==1)
//	{
//		if(n==0)break;
//		Set(flow,0);
//		int num;
//		char n1,n2;
//		map<char,int>M;
//		indx=0;
//		while(cin>>n1>>n2>>num)
//		{
//			if(M.find(n1)==M.end())
//				M[n1]=indx++;
//			if(M.find(n2)==M.end())
//				M[n2]=indx++;
//
//			flow[M[n1]][M[n2]]+=num;
//			flow[M[n2]][M[n1]]+=num;
//		}
//		printf("%d\n",maxflow(M['A'],M['Z']));
//	}
//	return 0;
//}
