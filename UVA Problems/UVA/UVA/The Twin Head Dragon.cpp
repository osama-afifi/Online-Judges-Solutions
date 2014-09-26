//The Twin Head Dragon
//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<sstream>
//#include<queue>
//#include<set>
//#include<stack>
//#include<math.h>
//
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) A.begin(), A.end()
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//
//vector< pair< pair<int,int> , int > > edges;
//vector< vector< pair<int,int> > >G;
//int n;
//
//bool vis[30];
//double avg[30][30];
//int pmask[30][30];
//pair<int , vector<int> > path[30][30];
//int start;
//
//void dfs(int cur,vector<int>P, int cost)
//{
//	if(vis[cur])
//		return;
//	vis[cur]=1;
//	FOR(i,0,edges.size())
//		if(cur == edges[i].first.first)
//		{
//			P.push_back(i/2);
//			dfs(edges[i].first.second,P, cost + edges[i].second);
//			P.pop_back();
//		}
//
//
//		path[start][cur] = mp(cost,P); 
//
//}
//
//bool dpvis[1<<15];
//double dp[1<<15];
//
//double solve(int mask)
//{
//	if(mask ==((1<<(n-1))-1))
//		return 0.0;
//	if(dpvis[mask])
//		return dp[mask];
//	dpvis[mask]=1;
//	double mini = 1e9;;
//	FOR(i,0,n)
//		FOR(j,0,n)
//		if(i!=j)	
//			if((mask & pmask[i][j])==0)
//				mini = min( mini, solve(mask | pmask[i][j]) + avg[i][j]);
//
//	return dp[mask]=mini;
//}
//
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//
//	while(cin>>n)
//	{	
//		if(!n)break;
//		
//		Set(pmask,0);
//		Set(avg,0);
//		Set(path,0);
//		edges.clear();
//		G.clear();
//		G.resize(n+1);
//		int a,b,c;
//		FOR(i,0,n-1)
//		{
//			cin>>a>>b>>c;
//			G[a].push_back(mp(b,c));
//			G[b].push_back(mp(a,c));
//			edges.push_back(mp(mp(a,b),c));
//			edges.push_back(mp(mp(b,a),c));
//		}
//		FOR(i,0,n)
//		{
//			Set(vis,0);
//			start=i;
//			dfs(i,vector<int>(),0);
//		}
//
//		FOR(i,0,n)
//		{
//			FOR(j,0,n)
//				if(i!=j)
//				{
//					avg[i][j] = (double)((double)path[i][j].first / (double)(path[i][j].second.size()));
//					FOR(k,0,path[i][j].second.size())
//						pmask[i][j] |= (1<<(path[i][j].second[k]));
//				}
//		}
//
//		Set(dpvis,0);
//		double res = solve(0);
//		cout << setprecision(4) << fixed <<  res << endl;
//
//	}
//
//	return 0;
//}