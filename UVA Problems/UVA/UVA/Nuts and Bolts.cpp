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
//#define MAX_BOLTS 500
//#define MAX_NUTS  500
//
//
//int flow[1007][1007];
//vector<vector<int> >V;
//int oo =1<<25;
//bool vis[1007];
//int p[1007];
//
//
//using namespace std;
//
//#define Set(a, s) memset(a, s, sizeof (a))
//
//int nuts,bolts;
//
//int maxi;
//
//void read_input_data(){
//	Set(flow,0);
//	int n,b;
//	int num;
//	V.clear();
//	scanf("%d%d",&bolts,&nuts);
//	maxi=bolts+nuts;
//	V.resize(maxi+2);
//
//	for(b=0;b<bolts;b++){
//		for(n=0;n<nuts;n++){
//			scanf("%d",&num);
//			if(num)
//			{
//				V[b].push_back(n+bolts);
//				flow[b][n+bolts]=1;//=flow[n+bolts][b]=1;
//				V[n+bolts].push_back(b);
//			}
//		}
//	}
//	for(b=0;b<bolts;b++){
//		V[maxi].push_back(b);
//		V[b].push_back(maxi);
//		flow[maxi][b]=1;//=flow[b][maxi]=1;
//	}
//	for(n=0;n<nuts;n++){
//		V[n+bolts].push_back(maxi+1);
//		V[maxi+1].push_back(n+bolts);
//		flow[n+bolts][maxi+1]=1;
//	}
//}
//
//int bfs(int s, int t)
//{
//	Set(vis,0);
//	Set(p,-1);
//	queue<int>Q;
//	Q.push(s);vis[s]=1;
//	int c=0;
//	while(!Q.empty()){
//		c=Q.front();Q.pop();
//		if(c==t)return 1;
//		FOR(i,0,V[c].size())
//		{
//			int v=V[c][i];
//			if(!vis[v] && flow[c][v]){
//				Q.push(v);
//				vis[v]=1;
//				p[v]=c;
//			}
//		}
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
//int main(){
//	int cases,caseno;
//	freopen("input.in","r",stdin);
//	scanf("%d",&cases);
//	for(caseno=1;caseno<=cases;caseno++){
//		read_input_data();
//		int res = maxFlow(maxi,maxi+1);
//		printf("Case %d: ",caseno);
//		printf("a maximum of %d nuts and bolts ", res);
//		printf("can be fitted together\n");
//	}
//
//	return 0;
//}