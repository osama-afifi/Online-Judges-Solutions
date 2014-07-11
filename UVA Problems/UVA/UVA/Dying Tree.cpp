//
//
//#include <vector>
//#include <list>
//#include <map>
//#include <set>
//#include <queue>
//#include <deque>
//#include <stack>
//#include <bitset>
//#include <algorithm>
//#include <functional>
//#include <numeric>
//#include <utility>
//#include <sstream>
//#include <iostream>
//#include <iomanip>
//#include <cstdio>
//#include <cmath>
//#include <cstdlib>
//#include <ctime>
//#include <cstring>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair
//
//
//
//vector< pair<int,int> >doc;
////vector<int>X;
////vector<int>Y;
//int n,m;
//double k,d;
////int N;
//
//bool can;
//bool G[103][103];
//bool D[103][103];
//bool vis[105];
//vector< vector < pair<int,int> > >T;
//
//void solve(int u)
//{
//	vis[u]=1;
//	if(can)return;
//	FOR(i,0,doc.size())
//		FOR(j,0,T[u].size())
//	{
//		int X1=T[u][j].first;
//		int Y1=T[u][j].second;
//
//		if( sqrt(  ((X1-doc[i].first)*(X1-doc[i].first)) + ((Y1-doc[i].second)*(Y1-doc[i].second)) ) <=d)
//		{
//			can=1;
//			return;
//		}
//	}
//	FOR(i,0,n)
//			if(G[u][i] && !vis[i])
//			{
//				//vis[i]=1;
//				solve(i);
//				//vis[i]=0;
//			}
//
//}
//
//int main(){
//
//	freopen("input.in","r",stdin);
//
//	int t;
//	cin>>t;
//
//	while (t--)
//	{	
//		doc.clear();
//		Set(G,0);
//		Set(vis,0);
//		cin>>n>>m>>k>>d;
//		FOR(i,0,m)
//		{
//			double a,b;
//			cin>>a>>b;
//			doc.push_back(make_pair(a,b));
//		}
//		int bra;
//		bool done = 0;
//		T.clear();
//		T.resize(n);
//		FOR(i,0,n)
//		{
//			cin>>bra;
//			FOR(j,0,bra)
//			{
//				double a,b;
//				cin>>a>>b;
//				T[i].push_back(make_pair(a,b));
//			}
//
//		}
//
//		for(int i = 0 ; i<n ; i++)
//			for(int j = 0 ; j<T[i].size() ; j++)
//				for(int k = 0 ; k<n ; k++)
//					for(int l = 0 ; l<T[k].size() ; l++)
//						if(i!=k)
//						{
//							int X1=T[i][j].first;
//							int X2=T[k][l].first;
//							int Y1=T[i][j].second;
//							int Y2=T[k][l].second;
//							if( sqrt(  ((X1-X2)*(X1-X2)) + ((Y1-Y2)*(Y1-Y2)) ) <=k);
//							G[i][k]=G[k][i]=1;
//						}
//
//						can=0;
//						solve(0);
//
//						if(can)puts("Tree can be saved :)");
//						else puts("Tree can't be saved :(");
//
//
//	}
//	return 0;
//}
//
