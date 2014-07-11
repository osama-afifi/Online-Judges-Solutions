//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <queue>
//#include <stack>
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair
//using namespace std;
//
//const int MX = 405; 
//vector< vector<int> > G;
//int A[MX]; 
//int B[MX]; 
//bool vis[MX]; 
//bool match(int i) 
//{ 
//	FOR(j,0,G[i].size()) 
//	{ 
//		int v = G[i][j]; 
//		if (vis[v]) 
//			continue; 
//		vis[v] = 1; 
//		if (A[v] == -1 || match(A[v]) ) 
//		{ 
//			A[v] = i; 
//			B[i] = v; 
//			return true; 
//		} 
//	} 
//	return false; 
//} 
//int runMatching() 
//{ 
//	int cc = 0; 
//	Set(A, -1); 
//	Set(B, -1); 
//	FOR(i,0,121) 
//	{ 
//		Set(vis,0); 
//		if (match(i)) 
//			cc++; 
//	} 
//	return cc; 
//} 
//
//int main()
//{
//	freopen("input.in","r" , stdin);
//	int t;
//	scanf("%d",&t);
//	while(t--)
//	{
//		G.clear();
//		G.resize(121);
//		int n;
//		int a,b;
//		scanf("%d",&n);
//	
//		FOR(i,0,n)
//		{
//			scanf("%d %d",&a,&b);
//			G[a].push_back(b);
//		}
//		int res = runMatching();
//		printf("%d\n",res);
//
//	}
//	return 0;
//}
//
