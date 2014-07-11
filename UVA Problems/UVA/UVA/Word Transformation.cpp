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
//vector<string>V;
//vector< vector<int> >G;
//map<string,int>M;
//int n=0;
//bool vis[209];
//bool can( string &s1 , string &s2)
//{
//	if(s1.length()!=s2.length())return false;
//	int c=0;
//	FOR(i,0,s1.length())
//	{
//		if(s1[i]!=s2[i])c++;
//		if(c>1)return false;
//	}
//	return (c==1);
//}
//
//int bfs(int s, int t)
//{
//	queue< pair<int,int> >Q;
//	Q.push(make_pair(s,0));
//	Set(vis,0);
//	pair<int,int> c;
//	while(!Q.empty())
//	{
//		c=Q.front();
//		Q.pop();
//		if(c.first==t)return c.second;
//		FOR(i,0,G[c.first].size())
//			if(!vis[G[c.first][i]])
//			{
//				vis[G[c.first][i]]=1;
//				Q.push(make_pair(G[c.first][i],c.second+1));
//			}
//	}
//	return -1;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t;
//	scanf("%d",&t);
//	string s,s1,s2;
//	while(t--)
//	{
//		V.clear();
//		M.clear();
//		G.clear();
//		n=0;
//		while(cin>>s && s!="*")
//			V.push_back(s),M[s]=n++;
//
//		G.resize(n+1);
//		FOR(i,0,V.size())
//			FOR(j,i,V.size())
//			if(can(V[i],V[j]))
//				G[i].push_back(j),G[j].push_back(i);
//
//		cin.ignore();
//			while(getline(cin,s))
//			{
//			if(s=="")break;
//			stringstream ss;
//			ss<<s;
//			ss>>s1;
//			ss>>s2;
//			cout<<s1<<" "<<s2<<" "<<bfs(M[s1],M[s2])<<endl;
//
//			
//			}
//			if(t)putchar('\n');
//	}
//	return 0;
//}
