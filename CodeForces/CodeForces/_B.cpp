//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<set>
//#include<map>
//#include<queue>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) (A.begin(), A.end())
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//int oo=1<<25;
//
//
//int part[100];
//vector< pair< pair<int,int>,int> >N;
//		vector< vector<int> >adj;
//void dfs(int idx , int x)
//{
//	if(part[idx]!=-1)
//		return;
//	part[idx] = x;
//	FOR(i,0,adj[idx].size())
//		dfs(adj[idx][i] , x);
//}
//
//int main() 
//{
//	freopen("input.in", "r" , stdin);
//	int n,m;
//	while(cin>>n>>m)
//	{
//		//vector< pair<int,int> >V;
//		N.clear();
//		adj.clear();
//		Set(part,-1);
//		adj.resize(n+1);
//		int d[100];
//		Set(d,0);
//		FOR(i,0,m)
//		{
//			int a,b;
//			cin>>a>>b;
//			//V.push_back(mp(a,b));
//			adj[a-1].push_back(b-1);
//			adj[b-1].push_back(a-1);
//			d[a-1]++;
//			d[b-1]++;
//		}
//
//
//		int c = 0;
//		FOR(i,0,n)
//		{
//			if(part[i]==-1)
//			{
//			dfs(i,c);
//			++c;
//			}
//		}
//
//			FOR(i,0,n)
//				N.push_back(mp(mp(part[i],d[i]),i));
//			sort(N.begin() , N.end());
//			reverse(N.begin() , N.end());
//			set<int>S;
//			LL res = 1;
//			FOR(i,0,n)
//			{
//				FOR(j,0,adj[N[i].second].size())
//				{
//					if(S.find(adj[N[i].second][j])!=S.end())
//					{
//						res *=2;							
//						break;
//					}
//				}
//				S.insert(N[i].second);
//			}
//
//			//
//			res = 1;
//			FOR(i,0,c)
//			{
//				int q = 0;
//				FOR(j,0,n)
//					if(part[j]==i)
//						q++;
//				--q;
//				while(q-->0)
//					res *=2;
//			}
//			cout<<res<<endl;
//
//
//	}
//	return 0;
//}