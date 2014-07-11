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
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//using namespace std;
//
//int G[100];
//stack<int>S;
//int path[35];
//vector< vector<int> >V;
//void bfs(int s,int t)
//{
//	queue<int>Q;
//	stack<int>S;
//	Q.push(s);
//	Set(path,-1);
//	int c;
//	while(!Q.empty())
//	{
//		c=Q.front();
//		Q.pop();
//		if(c==t)break;
//		FOR(i,0,V[c].size())
//			if(path[V[c][i]]==-1)
//			{
//				path[V[c][i]]=c;
//				Q.push(V[c][i]);
//			}
//	}
//	for(int i =t ; i!=s ; i=path[i])
//		S.push(i);
//	putchar(G[s]);
//	while(!S.empty())
//		putchar(G[S.top()]),S.pop();
//	putchar('\n');
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t;
//	scanf("%d",&t);
//	while(t--)
//	{
//		map<char,int>M;
//		map<char,int>::iterator it;
//		V.clear();
//		V.resize(30);
//		string s1,s2;
//		int e,q;
//		cin>>e>>q;
//		int n=0;
//		FOR(i,0,e)
//		{
//			cin>>s1>>s2;
//			if(M.find(s1[0])==M.end())
//				M[s1[0]]=n++;
//			if(M.find(s2[0])==M.end())
//				M[s2[0]]=n++;
//
//			V[M[s2[0]]].push_back(M[s1[0]]);
//			V[M[s1[0]]].push_back(M[s2[0]]);
//
//		}
//
//		for(it=M.begin() ; it!=M.end() ; it++)
//			G[it->second]=it->first;
//
//		while(q--)
//		{
//			cin>>s1>>s2;
//			bfs(M[s1[0]],M[s2[0]]);
//		}
//		if(t)putchar('\n');
//	}
//	return 0;
//}
