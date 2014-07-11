//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <math.h>
//#include <set>
//#include <queue>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair 
//#define MAXN 1009 
//using namespace std;
//
//int dp[MAXN][20]; // [n][logn]
//int L[MAXN];
//int T[MAXN];
//int n;
//vector< vector<int > > G;
//void dfs(int node , int l)
//{
//	L[node] = l;
//	for(int i = 0 ; i<G[node].size() ; i++)
//	{
//		T[G[node][i]] = node;
//		dfs(G[node][i] , l+1);
//	}
//}
//
//
//inline void generate(int root)
//{
//	dfs(root,0);
//	T[root]=-1;
//	Set(dp,-1);
//	FOR(i,0,n)
//		dp[i][0] = T[i];
//
//	for(int  j = 1 ; 1<<j < n ; j++)
//		FOR(i,0,n)
//		if(dp[i][j-1]!=-1)
//			dp[i][j]  = dp[dp[i][j-1]][j-1];
//
//}
//
//inline int LCA(int x , int y)
//{
//	if(L[x]<L[y])
//		swap(x,y);
//	int log , j;
//	for(log=1 ; 1<<log <= L[x]  ; log++);
//	log--;
//
//	for(j = log ; j>=0 ; j--)
//		if(L[x]- (1<<j) >=L[y])
//			x = dp[x][j];
//	if(x==y)return x;
//	for(j = log ; j>=0 ; j--)
//		if(dp[x][j]!=-1  && dp[y][j]!=-1  && dp[x][j]!=dp[y][j])
//			x = dp[x][j] , y = dp[y][j];
//	return T[x];
//}
//
//
//
//
//int in[MAXN];
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t,kase=0;
//	scanf("%d" , &t);
//
//	while(t--)
//	{
//		G.clear();
//		Set(in,0);
//		scanf("%d" , &n);
//		G.resize(n+1);
//		int root=0;
//		FOR(i,0,n)
//		{
//			int c,num;
//			scanf("%d" , &c);
//			while(c--)
//			{
//				scanf("%d" , &num);
//				--num;
//				G[i].push_back(num);
//				++in[num] ;
//			}
//			FOR(i,0,n) 
//				if(!in[i]) {root=i;break;} ;
//
//		}
//		generate(root);
//		printf("Case %d:\n" , ++kase);
//		int k;
//		scanf("%d" , &k);
//		while(k--)
//		{
//			int a,b;
//			scanf("%d %d" , &a , &b);
//			--a , --b;
//			printf("%d\n",LCA(a,b)+1);
//		}
//	}
//
//}