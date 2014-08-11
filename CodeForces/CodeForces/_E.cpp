//#include <cstdio>
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <utility>
//#include <cstdlib>
//#include <memory>
//#include <queue>
//#include <cassert>
//#include <cmath>
//#include <ctime>
//
//using namespace std;
//
//#define PB push_back
//#define F first
//#define S second
//#define MP make_pair 
//#define SZ(C) ((int) (C).size())
//#define FORN(i, n) for (int i = 0; i < (int) n; ++i)
//#define FORD(i, n) for (int i = ((int) n) - 1; i >= 0; --i)
//#define y1 gftxdtrtfhyjfctrxujkvbhyjice
//#define y0 ehfoiuvhefroerferjhfjkehfjke
//#define left sdhfsjkshdjkfsdfgkqqweqweh
//#define right yytrwtretywretwreytwreytwr
//#define ALL(C) (C).begin(), (C).end()
//
//template <typename T>
//inline T sqr( T x ) {
//	return x * x;
//}
//
//typedef long long ll;
//typedef unsigned long long ull;
//typedef unsigned int uint;
//typedef pair <int,int> pii;
//typedef pair <ll, ll> pll;
//typedef vector <ll> vll;
//typedef vector <int> vi;
//typedef vector <vector <int> > vvi;
//typedef vector <pii> vii;
//typedef vector <vector<pii> > vvii;
//
//#define MAXN 100009
//const double EPS = 1e-9;
//
//struct DSU {
//	vi par;
//	vi sz;
//
//	DSU()
//	{}
//	DSU( int n ) {
//		par.assign(n, 0);
//		sz.assign(n, 1);
//
//		FORN(i, n) {
//			par[i] = i;
//		}
//	}
//
//	int get_set( int x ) {
//		return x == par[x] ? x : par[x] = get_set(par[x]);
//	}
//
//	bool union_set( int x, int y ) {
//		x = get_set(x);
//		y = get_set(y);
//
//		if  (x == y) {
//			return false;
//		}		
//
//		if  (sz[x] > sz[y]) {
//			swap(x, y);
//		}
//
//		par[x] = y;
//		sz[y] += sz[x];
//		return true;
//	}
//};
//
//vi g[MAXN];
//int n, m, q;
//int bigPath[MAXN];
//int center[MAXN];
//DSU dsu;
//bool used[MAXN];
//int dist1[MAXN];
//int dist2[MAXN];
//
//void markCenter( int v ) {
//	used[v] = true;
//		
//}
//
//void dfs( int v, int par, int &dist, int &x, int curD ) {
//	if  (curD > dist) {
//		dist = curD;
//		x = v;
//	}	
//
//	FORN(i, SZ(g[v])) {
//		int to = g[v][i];
//		if  (to != par) 
//			dfs(to, v, dist, x, curD + 1);
//
//	}
//}
//
//int findGr( int root ) {
//	int D = 0;
//	int x = root;
//	dfs(root, -1, D, x, 0);
//	return x;
//}
//
//void dfs( int v, int par, int D, int *dist ) {
//	dist[v] = D;
//
//	FORN(i, SZ(g[v])) {
//		int to = g[v][i];
//
//		if  (to != par) {
//			dfs(to, v, D + 1, dist);
//		}
//	}
//}
//
//void calcDist( int root, int *dist ) {
//	dfs(root, -1, 0, dist);
//}
//
//void precalcTree( int start ) {
//	int x = findGr(start);
//	int y = findGr(x);
//
//	calcDist(x, dist1);
//	calcDist(y, dist2);
//
//	bigPath[dsu.get_set(x)] = dist1[y];
//	
//	int cent = x;
//	int minDiff = abs(dist1[x] - dist2[x]);
//
//	queue <int> q;
//	q.push(x);
//	used[x] = true;
//	while (!q.empty()) {
//		int v = q.front();
//		q.pop();
//
//		int curDiff = abs(dist1[v] - dist2[v]);
//		if  (curDiff < minDiff) {
//			cent = v;
//			minDiff = curDiff;
//		}
//
//	   	FORN(i, SZ(g[v])) {
//	   		int to = g[v][i];
//
//	   		if  (!used[to]) {
//	   			q.push(to);
//	   			used[to] = true;
//	   		}
//	   	}
//	}
//
//	center[dsu.get_set(x)] = cent;
//}
//
//void precalc() {
//	FORN(i, n) {
//		if  (!used[i]) {
//			precalcTree(i);
//		}	
//	}
//}
//
//int main() {
////	freopen("in.txt", "r", stdin);
////	freopen("out.txt", "w", stdout);
//
//	freopen("input.in", "r" , stdin);
//	scanf("%d%d%d", &n, &m, &q);
//
//	dsu = DSU(n);
//
//	FORN(i, m) {
//		int a, b;
//		scanf("%d%d", &a, &b);
//		--a;
//		--b;
//
//		g[a].PB(b);
//		g[b].PB(a);
//
//		dsu.union_set(a, b);
//	}
//
//	precalc();
//
//	return 0;
//}
