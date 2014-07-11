//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <string>
//#include <cmath>
//using namespace std;
//
//#define MAXN 1000
//
//void computeCartesianTree(int A[MAXN], int N, int T[MAXN])
//{
//	int st[MAXN], i, k, top = -1;   
//	for (i = 0; i < N; i++)
//	{
//		k = top;
//		while (k >= 0 && A[st[k]] > A[i])
//			k--;
//		if (k != -1)
//			T[i] = st[k];
//		if (k < top)
//			T[st[k + 1]] = i;
//		st[++k] = i; // insert A[i] and ignore bigger elements
//		top = k;
//	}
//	T[st[0]] = -1; // first has no parent
//}
//
//
//
//////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
//
//int n; 
//vector<int> sTree; 
//vector<int> levels; 
//void comp(int S = 0, int E = n - 1, int ind = 0) 
//{ 
//	if (S == E) 
//		sTree[ind] = S; 
//	else
//	{
//
//		comp(S, (S + E) / 2, ind * 2 + 1); 
//		comp((S + E) / 2 + 1, E, ind * 2 + 2); 
//		sTree[ind] =  levels[sTree[ind * 2 + 1]] < levels[sTree[ind * 2 + 2]] ? 
//			sTree[ind * 2 + 1] 
//		: sTree[ind * 2 + 2]; 
//	}
//} 
//
//int RMQ(int qS, int qE, int rS = 0, int rE = n - 1, int n = 0) 
//{ 
//	if (qS > rE || qE < rS) return -1; 
//	if (rS >= qS && rE <= qE) return sTree[n]; 
//	int s1 = RMQ(qS, qE, rS, (rS + rE) / 2, n * 2 + 1); 
//	int s2 = RMQ(qS, qE, (rS + rE) / 2 + 1, rE, n * 2 + 2); 
//	if(s1 == -1) return s2;
//	if(s2 == -1) return s1;
//	return  (levels[s1] <levels[s2] ? s1 : s2); 
//} 
//int N; 
//vector<vector<int> > g; 
//vector<int> tour; 
//vector<int> tourInd; 
//void dfs(int n, int l) 
//{ 
//	int ind = tour.size(); 
//	for (int i = 0; i < g[n].size(); i++) { 
//		dfs(g[n][i], l + 1); 
//		tour.push_back(n); 
//		levels.push_back(l); 
//	} 
//	tour.push_back(n); 
//	levels.push_back(l); 
//	tourInd[n] = ind; 
//} 
//void generate(int root) 
//{ 
//	levels.clear(); 
//	tour.clear(); 
//	tourInd.clear();
//	tourInd = vector<int>(N + 1); 
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