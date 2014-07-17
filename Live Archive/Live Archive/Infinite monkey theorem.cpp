//// Accepted
//// BIT
//#include <iostream>
//#include <stdio.h>
//#include <algorithm>
//#include <iomanip>
//#include <string>
//#include <cstring>
//#include <vector>
//#include <map>
//#include <math.h>
//#include <queue>
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair
//#define MAX 1000009
//using namespace std;
//
//string target;
//vector< pair<char , double> > V;;
//int n,m;
//int F[20];
//double dp[1000][11];
//bool vis[1000][11];
//void failureFunction(const char* p)
//{
//	int m = strlen(p), k = 0;
//	F[0] = 0;
//	for (int q = 1; q <= m - 1; ++q) {
//		while (k > 0 && p[k] != p[q])
//			k = F[k - 1];
//		if (p[k] == p[q])
//			k++;
//		F[q] = k;
//	}
//}
//
//double solve(int i , int pre)
//{
//	if(pre==target.length())
//		return 1.0;
//	if(i==m)
//		return 0.0;
//	if(vis[i][pre])
//		return dp[i][pre];
//	vis[i][pre]=1;
//	double sum = 0.0;
//	FOR(k,0,V.size())
//	{
//		char c = V[k].first;
//		int q = pre;
//		while(q>0 && target[q]!=c)
//			q = F[q-1];
//		if(target[q]==c)
//			++q;
//		sum += solve(i+1,q)*V[k].second;	
//	}
//	
//	return dp[i][pre] = sum;
//}
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	while(cin>>n>>m)
//	{
//		V.clear();
//	if(!n && !m )break;
//	Set(vis,0);
//		FOR(i,0,n)
//		{
//			char c;
//			double d;
//			cin>>c>>d;
//			V.push_back(make_pair(c,d));
//		}
//		cin>>target;
//		failureFunction(target.c_str());
//		cout <<  setprecision(2) << fixed << (solve(0,0)*100.0) << "%" <<endl;
//	
//	}
//	return 0;
//}
