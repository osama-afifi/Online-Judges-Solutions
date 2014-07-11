//#include <iostream>
//#include <cstring>
//#include <cstdio>
//#include <queue>
//#include <vector>
//#include <algorithm>
// #include <functional>
///////////////////////////////////////////////////////////////////
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define LL long long 
//#define mp make_pair
//#define pii pair<int,int>
//#define pll pair<LL,LL>
//const int oo=1<<29;
/////////////////////////////////////////////////////////////////////
//
//
//
//int cost[107][107];
//int cap[107][107];
//int p[107];
//int dist[107];
//int freq[107];
//int vis[107];
//int n,m;
//
//int dijkstra(int s , int t)
//{
//	Set(vis,0);
//	vis[s]=1;
//	Set(p,-1);
//	Set(freq,0);
//	FOR(i,0,t+2)
//		dist[i]=oo;
//	priority_queue<int> Q;
//	int c;
//	dist[s]=0;
//	Q.push(s);
//	while(!Q.empty())
//	{
//		c=Q.top();
//		int u= c;
//		Q.pop();
//		vis [u] = 0; 
//		//if(u==t)return true;
//		freq[u]++;
//		if(freq[u]>t) break;
//		for(int i = 0 ; i<=t ; i++)
//		{		
//			int cc=cost[u][i];
//			if(dist[u]+cc<dist[i] && cap[u][i]>0)
//			{			
//				dist[i]=dist[u]+cc;
//				p[i]=u;
//				if(!vis[i])
//				{
//				Q.push(i);
//				vis[i]=1;
//				}
//			}
//		}
//	}
//	return dist[t]!=oo;
//}
//
//pair<int,int> mcmf(int s ,int t)
//{
//	int f=0,c=0;
//	while(dijkstra(s,t))
//	{
//		int mini =oo;
//		for(int i =t ; i!=s ; i=p[i])
//			mini=min(mini,cap[p[i]][i]);
//		for(int i =t ; i!=s; i=p[i])
//		{
//		cap[p[i]][i]-=mini;
//		cap[i][p[i]]+=mini;
//		cost[i][p[i]]=-cost[p[i]][i];
//		}
//		f+=mini;
//		c+=mini*dist[t];
//	//	printf("dist[t] : %d\n",dist[t]);
//	}
//	return mp(f,c);
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int n1,n2,c;
//	while(scanf("%d",&n)==1 )
//	{
//		if(!n)break;
//		scanf("%d",&m);
//		Set(cost,0);
//		Set(cap,0);
//		for(int i = 0 ; i < m ; i++)
//		{
//			scanf("%d%d%d",&n1,&n2,&c);
//			cost[n1][n2]=c;
//			cost[n2][n1]=c;
//			cap[n1][n2]=1;
//			cap[n2][n1]=1;
//		}
//
//		cap[0][1]=cap[n][n+1]=2;
//		cap[1][0]=cap[n+1][n]=2;
//
//		pii res = mcmf(0,n+1);
//		if(cap[0][1])
//			puts("Back to jail");
//		else
//			printf("%d\n",res.second);
//	}
//	return 0;
//}
//
