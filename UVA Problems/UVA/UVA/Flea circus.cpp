//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <math.h>
//#include <map>
//#include <set>
//#include <queue>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair 
//#define MAX 10009 
//using namespace std;
//
//int n;
//vector<vector< int > > G; 
//int in[MAX];
//int dp[MAX][25]; // [n][logn]
//int L[MAX];
//int T[MAX];
//
//
//void dfs(int node , int l)
//{
//
//	L[node] = l;
//	for(int i = 0 ; i<G[node].size() ; i++)
//	{
//		T[G[node][i]] = node;
//		dfs(G[node][i] , l+1 );
//	}
//}
//
//void generate(int root)
//{
//	Set(dp,-1);
//	dfs(root, 0);
//	T[root]=-1;
//	FOR(i,0,n)dp[i][0]=T[i];
//	for(int j =1  ; (1<<j)<n ; j++)
//		FOR(i,0,n)
//		if(dp[i][j-1]!=-1)
//			dp[i][j] = dp[dp[i][j-1]][j-1];
//}
//
//int LCA(int x ,int y)
//{
//	if(L[x]<L[y])swap(x,y);
//	int log;
//	for(log=1  ; 1<<log <= L[x] ; log++);
//	--log;
//	for(int i = log ; i>=0 ; i--)
//		if(L[x]-(1<<i)>=L[y])
//			x = dp[x][i];
//	if(x==y)return x;
//	for(int i = log ; i>=0 ; i--)
//		if(dp[x][i]!=-1 && dp[x][i]!=dp[y][i])
//			x = dp[x][i] , y = dp[y][i];
//	return T[x];
//
//
//}
//
//inline int kthAncestor(int x , int k) // gets the kth ancestor of the node
//{
//	int log;
//	for(log=1 ; 1<<log <= L[x]  ; log++);
//	log--;
//	for(int j = log ; j>=0 ; j--)
//		if((1<<j) <= k)
//			x = dp[x][j]   , k -= (1<<j);
//	return x;
//}
//
//int getKth(int p, int q, int k, int LCA) {
//	int d,log,i;
//	if(LCA == p) {
//		d = L[q] - L[p] + 1;
//		swap(p,q);
//		k = d - k + 1;
//	}
//	else if(LCA != q)
//
//		if(L[p] - L[LCA] + 1 < k) {
//			d = L[p] + L[q] - 2 * L[LCA] + 1;
//			k = d - k + 1;
//			swap(p,q);
//		}
//
//		for(log=1;(1<<log)<=L[p];log++);
//		log--;
//		k--;
//		for(i=log;i>=0;i--)
//			if((1<<i) <= k) 
//				p = dp[p][i] , 	k -= (1<<i);
//
//		return p;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//
//	while(scanf("%d" , &n)==1)
//	{
//		if(!n)break;
//		G.clear();
//		Set(in,0);
//		G.resize(n+1);
//		int root=0;
//		int a,b,c;
//
//
//		FOR(i,0,n-1)
//		{
//			scanf("%d %d" , &a , &b);
//			--a ,--b;
//			G[a].push_back(b);
//			in[b]++ ;
//		}
//		FOR(i,0,n) 
//			if(!in[i]) {root=i;break;} ;
//
//		generate(root);
//		int k;
//		scanf("%d" , &k);
//		while(k--)
//		{
//			scanf("%d %d" , &a , &b);
//			--a , --b;
//			int lca = LCA(a,b);
//			int dist = L[a]+L[b] - 2*L[lca] +1;
//			if(dist&1)
//			{
//				int kth = getKth(a,b,(dist+1)/2,lca);
//				printf("The fleas meet at %d.\n",kth+1);
//			}
//			else
//			{
//				int k1 = getKth(a,b,dist/2,lca);
//				int k2 = getKth(a,b,dist/2 +1,lca);
//				if(k1>k2)swap(k1,k2);
//				printf("The fleas jump forever between %d and %d.\n",k1+1 , k2+1);
//			}
//		}
//	}
//	return 0;
//}