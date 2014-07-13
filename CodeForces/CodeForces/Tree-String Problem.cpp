//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<set>
//#include<map>
//
//#include<queue>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) (A.begin(), A.end())
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//
//
//vector< vector< int > > G;
//string s[300009];
//int F[300009];
//int n;
//string text;
//
//
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
//
//
//int dfs(int node , int pre)
//{
//	int sum = 0;
//	FOR(i,0,G[node].size())
//		if(G[node][i]!=node)
//		{
//			int &to = G[node][i];
//			string &pat = s[to];
//			int q = pre;
//			FOR(i,0,pat.size())
//			{
//				while(q>0 && text[q]!=pat[i])
//					q = F[q-1];
//				if(text[q]==pat[i])
//					++q;
//				if(q==text.length())
//					++sum;
//			}
//			sum += dfs(to, q);
//		}
//		return sum;
//}
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	while(cin>>n)
//	{
//		G.clear();
//		int num;
//		G.resize(n+2);
//		FOR(i,2,n+1)
//		{
//			cin>>num;
//			G[num].push_back(i);
//			cin>>s[i];
//		}
//		cin>>text;
//		failureFunction(text.c_str());
//
//		cout << dfs(1,0) <<endl;
//
//	}
//	return 0;
//}