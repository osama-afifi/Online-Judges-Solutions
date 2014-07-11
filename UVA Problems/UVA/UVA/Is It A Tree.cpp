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
//map<int,int>M;
//map<int,int>::iterator it;
//
//bool vis[10007];
//int deg[10007];
//vector<vector<int> >V;
//int n=0;
//
//bool dfs(int u)
//{
//	vis[u]=1;
//	bool b=1;
//	FOR(i,0,V[u].size())
//	{
//		int v=V[u][i];
//		if(vis[v])return false;
//		else b&=dfs(v);
//	}
//	return b;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int n1,n2;
//	int kase=1;
//	while(cin>>n1>>n2)
//	{
//		M.clear();
//		n=0;
//		
//		V.clear();
//		V.resize(10003);
//		bool valid=1;	
//		if(n1==-1 && n2==-1)break;
//		if(!n1 && !n2)
//		{printf("Case %d is a tree.\n",kase++);continue;}
//		if(n1==n2)valid=0;
//		if(M.find(n2)==M.end())M[n2]=n++;
//		//else valid=0;
//		if(M.find(n1)==M.end())M[n1]=n++;
//		V[M[n1]].push_back(M[n2]);
//		Set(deg,0);
//		deg[M[n2]]++;
//
//		while(cin>>n1>>n2)
//		{
//			if(!n1 && !n2)break;
//			if(n1==n2)valid=0;
//			if(M.find(n2)==M.end())M[n2]=n++;
//			//else valid=0;
//			if(M.find(n1)==M.end())M[n1]=n++;
//			V[M[n1]].push_back(M[n2]);
//			deg[M[n2]]++;
//		}
//		int start=-1;
//		int cnt=0;
//		Set(vis,0);
//		FOR(i,0,n){
//			if(deg[i]==0)
//				valid = valid && dfs(i) , cnt++;
//			if(deg[i]>1)valid=0;
//		}
//		if(cnt>1)valid=0;
//		FOR(i,0,n)if(!vis[i])valid=0;
//
//		if(valid)
//			printf("Case %d is a tree.\n",kase++);
//		else
//			printf("Case %d is not a tree.\n",kase++);
//	}
//	return 0;
//}
