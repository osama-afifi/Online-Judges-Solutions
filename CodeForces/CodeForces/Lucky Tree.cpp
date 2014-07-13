//
//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<queue>
//#include<set>
//#include<stack>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define LL long long
//#define mp make_pair
//using namespace std;
//
//
//vector< vector<int> > G;
//int comp[100009];
//int col =0;
//set<long long>S;
//
//void gen(long long n)
//{
//	if(n>10e9+4)return;
//	S.insert(n);
//	gen(n*10+4);
//	gen(n*10+7);
//}
//
//
//void dfs(int u)
//{
//	if(comp[u]!=-1)return;
//	comp[u]=col;
//	FOR(i,0,G[u].size())
//		dfs(G[u][i]);	
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	string s = "abcd";
//	int n;
//	gen(4);
//	gen(7);
//	while(scanf("%d",&n)==1)
//	{
//		Set(comp,-1);
//		G.clear();	
//		G.resize(n+1);
//		int a,b;
//		long long c;
//		FOR(i,0,n-1)
//		{
//			scanf("%d %d %I64d",&a,&b,&c);
//
//			--a,--b;
//			if(S.find(c)!=S.end())continue;
//			G[a].push_back(b);	
//			G[b].push_back(a);	
//		}
//
//		FOR(i,0,n)
//			if(comp[i]==-1)
//			{
//				dfs(i);
//				col++;
//			}
//
//			long long sum = 0;
//			vector<long long>C;
//			C.resize(col);
//			FOR(i,0,n)
//				C[comp[i]]++;
//
//			FOR(i,0,n)
//				sum+= (long long)((long long)n-C[comp[i]])*(long long)((long long)n-C[comp[i]]-1LL);
//
//
//			cout<<sum<<endl;
//	}
//	return 0;
//}