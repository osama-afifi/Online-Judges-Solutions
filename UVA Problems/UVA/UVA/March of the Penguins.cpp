//#include <iostream>
//#include <map>
//#include <math.h>
//#include <cstdio>
//#include <queue>
//#include <vector>
//#include <cstring>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.dbegin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define LL long long 
//#define pii pair<int,int>
//#define pll pair<LL,LL>
//#define MAX_BOLTS 500
//#define MAX_NUTS  500
//#define mp make_pair
//
//int flow[207][207];
//int cap[207][207];
//int p[207];
//bool vis[207];
//vector<vector<int> > V;
//int n,m;
//double z;
//int const oo =1<<25;
//double distance(int x1,int y1 ,int x2 , int y2)
//{ return sqrt((y1-y2)*(y1-y2) + (x1-x2)*(x1-x2));}
//
//int bfs(int s, int t)
//{
//	Set(vis,0);
//	Set(p,-1);
//	vis[s]=1;
//	queue<int>Q;
//	Q.push(s);
//	int c;
//	while(!Q.empty())
//	{
//		c=Q.front();
//		Q.pop();
//		if(c==t)return 1;
//		FOR(i,0,n)
//		{
//			if(!vis[i] && cap[c][i]-flow[c][i]>0)
//			{
//				Q.push(i);
//				vis[i]=1;
//				p[i]=c;
//			}
//		}
//	}
//	return 0;
//}
//
//int maxFlow(int s  ,int t)
//{
//	Set(flow,0);
//	int f;
//	int mf=0;
//	while(bfs(s,t))
//	{
//		f=oo;
//		for(int i = t;  i!=s ; i=p[i])
//			f=min(f,cap[p[i]][i]-flow[p[i]][i]);
//		for(int i = t;  i!=s ; i=p[i])
//		{
//			flow[p[i]][i]+=f;
//			flow[i][p[i]]-=f;
//		}
//		mf+=f;
//	}
//	return mf;
//}
//
//int main(){
//	freopen("input.in","r",stdin);
//	int t;
//	scanf("%d", &t);
//	while(t--)
//	{
//		cin>>m>>z;
//		int n1,n2,x,y;
//		vector<pii >V;
//		Set(cap,0);
//		int total=0;
//		FOR(i,0,m)
//		{
//			scanf("%d%d%d%d",&n1,&n2,&x,&y);
//			cap[i*2][i*2+1]=y;
//			cap[m*2][i*2]=x;
//			V.push_back(mp(n1,n2));
//			total+=x;
//		}
//		n= m*2+1;
//		FOR(i,0,m)
//			FOR(j,0,m)
//			if(i!=j)
//		{
//			double D = distance(V[i].first,V[i].second,V[j].first,V[j].second );
//			if(D<=z)
//			{
//				cap[i*2+1][2*j]=oo;
//				cap[2*j+1][2*i]=oo;				
//			}
//		}
//		vector<int>ans;
//		FOR(i,0,m)
//		{
//			int t = i*2;
//			int res=maxFlow(m*2,t);
//			if(res==total)
//				ans.push_back(i);
//		}
//
//		FOR(i,0,ans.size())
//		{
//			if(i)putchar(' ');
//			 printf("%d",ans[i]);
//		}
//			if(ans.size()==0)puts("-1");
//			else putchar('\n');
//
//	}
//
//	return 0;
//}