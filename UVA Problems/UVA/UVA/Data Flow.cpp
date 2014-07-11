//// My First MCMF
//#include <iostream>
//#include <cstring>
//#include <cstdio>
//#include <queue>
//#include <vector>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define LL long long 
//#define pii pair<int,int>
//#define pll pair<LL,LL>
//
//
//struct Node {int u;LL c; Node(int uu, LL cc) :u(uu),c(cc){} 
//bool operator < (const Node &a)const { return a.c<c; }
//};
//
//int n;
//LL d,k;
//LL flow[107][107];
//LL cost[107][107];
//LL p[107];
//LL cnt[107];
//LL dist[107];
//bool vis[107];
//LL m;
//LL mini;
//LL res=0;
//LL oo = 1LL <<62;
//
//
//bool dijkstra(int s, int t)
//{
//	queue<int>Q;
//	Set(p,-1);
//	Set(cnt,0);
//	Set(vis,0);
//	vis[s]=1;
//	FOR(i,0,n+4)
//		dist[i] = oo;
//	int c = s;
//	Q.push(c);
//	dist[s]=0;
//	while(!Q.empty())
//	{
//		c = Q.front();
//		Q.pop();
//		vis[c]=0;
////		cnt[c]++;
////		if(cnt[c]>n)break;
//		FOR(i,0,n+3)
//			if(dist[c]+cost[c][i]<dist[i] && flow[c][i]){
//				dist[i]=dist[c]+cost[c][i];
//				p[i]=c;
//				if(!vis[i])
//				Q.push(i),vis[i]=1;
//			}
//	}
//	return dist[t]!=oo;
//}
//
//void augment(int s, int t)
//{
//	mini= oo;
//	int node = t;
//	for(int i =t ; i!=s; i=p[i])
//	{
//		mini=min(mini,flow[p[node]][node]);
//		node=p[node];
//	}
//	//if(d<mini)mini=d;
//	//d-=mini;
//	for(int i =t ; i!=s; i=p[i])
//	{
//		flow[p[i]][i]-=mini;
//		flow[i][p[i]]+=mini;
//		cost[p[i]][i]=-cost[i][p[i]];
//	}
//}
//
//long long mcmf(int s , int t)
//{
//	res=0;
//	LL maxflow=0;
//	while(dijkstra(s,t))
//	{		
//		augment(s,t);
//		maxflow+=mini;
//		res+=mini*dist[t];
//	//	if(d<=0)return res;	
//	}
//	if(d!=maxflow)return -1;
//	return res;
//}
//int main()
//{
//	freopen("input.in","r",stdin);
//	while(scanf("%d%lld",&n,&m) ==2)
//	{
//		int n1,n2;
//		LL c;
//		Set(flow,0);
//		Set(cost,0);
//		FOR(i,0,m)
//		{
//			scanf("%d%d%lld",&n1,&n2,&c);
//			--n1,--n2;
//			cost[n1][n2]=c;
//			cost[n2][n1]=c;
//			flow[n1][n2]=1;
//		}
//
//		scanf("%lld%lld",&d,&k);
//		FOR(i,0,n)
//			FOR(j,0,n)
//			flow[i][j]*=k;
//				flow[n][0]=d;
//			//	flow[0][n]=d;
//				flow[n-1][n+1]=d;
//				//flow[n+1][n-1]=d;
//		long long ans=mcmf(n,n+1);
//		if(ans<0)
//			puts("Impossible.");
//		else
//			printf("%lld\n",ans);
//	}
//	return 0;
//}
