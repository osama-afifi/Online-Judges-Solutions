//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <string>
//#include <cmath>
//using namespace std;
//
//#define MAXN 10009
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//
//int dp[MAXN][50]; // [n][logn]
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
//void generate(int root)
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
//int LCA(int x , int y)
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
//		if(dp[x][j]!=-1  && dp[x][j]!=dp[y][j])
//			x = dp[x][j] , y = dp[y][j];
//	return T[x];
//}
//
//inline int kthAncestor(int x , int k) // gets the kth ancestor of the node
//{
//	int log;
//	for(log=1 ; 1<<log <= L[x]  ; log++);
//	log--;
//	for(int j = log ; j>=0 ; j--)
//		if((1<<j) <= k)
//			x = dp[x][j]  , k -= (1<<j);;
//	return x;
//}
//
//
//
//int in[MAXN];
//int main()
//{
//	freopen("input.in","r",stdin);
//	
//		G.clear();
//
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
//		int k;
//		scanf("%d" , &k);
//		while(k--)
//		{
//			int a,b;
//			scanf("%d %d" , &a , &b);
//			--a , --b;
//			printf("%d\n",LCA(a,b)+1);
//			printf("%d\n",kthAncestor(2,1)+1);
//		}
//	
//
//}