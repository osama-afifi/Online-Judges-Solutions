//
//#include <iostream>
//#include <map>
//#include <cstdio>
//#include <queue>
//#include <vector>
//#include <cstring>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define LL long long 
//#define pii pair<int,int>
//#define pll pair<LL,LL>
//
//int flow[420][420];
//int G[220][220];
//int n,m;
//int N[220];
//int M[220];
//int maxi;
//int oo =1<<25;
//bool vis[220];
//int p[220];
//int bfs(int s, int t)
//{
//	
//	Set(vis,0);
//	Set(p,-1);
//	queue<int>Q;
//	Q.push(s);vis[s]=1;
//	int c=0;
//	while(!Q.empty()){
//		c=Q.front();Q.pop();
//		if(c==t)return 1;
//		FOR(i,0,maxi+3)
//			if(!vis[i] /*&& G[c][i]*/ && flow[c][i]){
//				Q.push(i);
//				vis[i]=1;
//				p[i]=c;
//			}
//
//	}
//	return 0;
//}
//
//int maxFlow(int s ,int t)
//{
//	int f;
//	int mf=0;
//	while(bfs(s,t))
//	{
//		f=oo;
//		for(int i=t;i!=s;i=p[i])
//			f=min(flow[p[i]][i],f);
//		for(int i=t;i!=s;i=p[i]){
//			flow[p[i]][i]-=f;
//			flow[i][p[i]]+=f;
//		}
//		mf+=f;
//
//	}
//	return mf; 
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int kase=0;
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		Set(flow,0);
//		Set(G,0);
//		cin>>n;
//		FOR(i,0,n)cin>>N[i];
//		cin>>m;
//		FOR(i,0,m)cin>>M[i];
//		FOR(i,0,m)
//			FOR(j,0,n){
//				if((N[j] == 0 && M[i]==0)  || (N[j]!=0 && M[i]%N[j]==0))
//					flow[j][i+n]=G[j][i+n]=1;
//		}
//		maxi=n+m;
//		FOR(i,0,n)
//			flow[maxi][i]=G[maxi][i]=1;
//		FOR(i,0,m)
//			flow[i+n][maxi+1]=G[i+n][maxi+1]=1;
//		int res = maxFlow(maxi,maxi+1);
//		cout<<"Case "<<++kase<<": "<<res<<endl;
//	}
//
//
//	return 0;
//}
