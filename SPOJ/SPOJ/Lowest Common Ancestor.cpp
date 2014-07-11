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
//#define MAX 1009 
//using namespace std;
//
//int n;
////int N;
//
//vector<int> sTree; 
//vector<int> levels;
//vector<int> tour; 
//vector<int> tourInd;
//vector<vector<int> > G; 
//int in[MAX];
//
//
//void comp(int l = 0, int r = n - 1, int ind = 0) 
//{ 
//	if (l == r) 
//	{
//		sTree[ind] = l; 
//		return;
//	}
//	comp(l, (l + r) / 2, ind * 2 + 1); 
//	comp((l + r) / 2 + 1, r, ind * 2 + 2); 
//	sTree[ind] =  (levels[sTree[ind * 2 + 1]] < levels[sTree[ind * 2 + 2]] ? 
//		sTree[ind * 2 + 1] 
//	: sTree[ind * 2 + 2]); 
//
//} 
//
//int RMQ(int a, int b, int l = 0, int r = n - 1, int n = 0) 
//{ 
//	if (a > r || b < l) return -1; 
//	if (l >= a && r <= b) return sTree[n]; 
//	int s1 = RMQ(a, b, l, (l + r) / 2, n * 2 + 1); 
//	int s2 = RMQ(a, b, (l + r) / 2 + 1, r, n * 2 + 2); 
//	if(s1 == -1) return s2;
//	if(s2 == -1) return s1;
//	return  (levels[s1] <levels[s2]) ? s1 : s2; 
//} 
//
//void dfs(int n, int l) 
//{ 
//
//	for (int i = 0; i < G[n].size(); i++) { 
//		dfs(G[n][i], l + 1); 
//		tour.push_back(n); 
//		levels.push_back(l); 
//	} 	
//	int ind = tour.size(); 
//	tour.push_back(n); 
//	levels.push_back(l); 
//	tourInd[n] = ind; 
//} 
//void generate(int root) 
//{ 
//	levels.clear(); 
//	tour.clear();
//	tourInd = vector<int>(n + 1); 
//	dfs(root, 0); 
//	n = levels.size(); 
//	sTree = vector<int>(1 << int(2 + 1e-9 + log(n) / log(2))); 
//	comp(); 
//} 
//int getQuery(int t1, int t2) 
//{ 
//	if (tourInd[t1] < tourInd[t2]) 
//		return tour[RMQ(tourInd[t1], tourInd[t2])]; 
//	return tour[RMQ(tourInd[t2], tourInd[t1])]; 
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t,kase=0;
//	scanf("%d" , &t);
//
//	while(t--)
//	{
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
//		printf("Case %d:\n" , ++kase);
//		while(k--)
//		{
//			int a,b;
//			scanf("%d %d" , &a , &b);
//			--a , --b;
//			printf("%d\n", getQuery(a , b)+1);
//		}
//	}
//
//
//	return 0;
//}