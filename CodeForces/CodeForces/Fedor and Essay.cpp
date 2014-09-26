//
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
//#define MAX 200009
//
//int n,m,SCC;
//vector< vector<int> >V;
//
//int zatouna=0;
//int nodelow[MAX];
//int nodeindex[MAX];
//bool vis[MAX];
//int component[MAX];
//int degree[MAX];
//stack<int>S;
//
//void tarjanSCC(int cur)
//{
//	nodeindex[cur]=nodelow[cur]=zatouna++;
//	vis[cur]=1;
//	S.push(cur);
//	FOR(i,0,V[cur].size())
//	{
//		int v=V[cur][i];
//		if(nodeindex[v]==-1)
//			tarjanSCC(v);
//		if(vis[v])
//			nodelow[cur]=min(nodelow[cur],nodelow[v]);
//	}
//
//	if(nodeindex[cur]==nodelow[cur]) //SCC Root Found
//	{
//		while(1)
//		{
//			int v=S.top();
//			component[v]=SCC;
//			vis[v]=0;
//			S.pop();			
//			if(v==cur)break;
//		}
//		SCC++;
//	}
//
//}
//
//
//string inp[200009];
//string str[200009];
//pair<int,int> minR[200009];
//int c=0;
//
//int countR(string &s)
//{
//	int c=0;
//	FOR(i,0,s.length())
//		c+=(s[i]=='R');
//	return c;
//}
//void lower(string &s)
//{
//	FOR(i,0,s.length())
//		s[i]= tolower(s[i]);
//}
//int main()
//{
//	freopen("input.in","r",stdin);
//	
//
//	while(scanf("%d",&n)==1)
//	{
//		if(!n && !m)break;
//
//		Set(degree,0);
//		zatouna=SCC=0;
//		
//		int n1,n2;
//		while(!S.empty())S.pop();
//		Set(vis,0);
//		Set(nodelow,0);
//		Set(nodeindex,-1);
//		
//		// Graph Input
//		map<string,int>M;
//		FOR(i,0,n)
//		{
//			cin>>inp[i];
//			lower(inp[i]);
//		}
//		c=0;
//		scanf("%d",&m);
//		V.clear();
//		V.resize(m*2+2);
//
//		FOR(i,0,m)
//		{
//			string s1,s2;
//			cin>>s1>>s2;
//			lower(s1);
//			lower(s2);
//			if(M.find(s1)==M.end())
//				M[s1] = c++;
//			if(M.find(s2)==M.end())
//				M[s2] = c++;
//			V[M[s1]].push_back(M[s2]);
//		}
//		
//		for(map<string,int>::iterator it = M.begin() ; it!=M.end() ; it++)
//			str[it->second] = it->first;
//
//		tarjanSCC(0);
//		FOR(i,0,c)
//			minR[i]=make_pair(1<<25,1<<25);
//		FOR(i,0,c)
//			minR[component[i]] = min(minR[component[i]], make_pair(countR(str[i]),(int)str[i].length()));
//
//		int R=0,C=0;
//		FOR(i,0,n)
//		{
//			map<string,int>::iterator it;
//			it = M.find(inp[i]);
//			if(it==M.end())
//				R+=countR(inp[i]),C+=inp[i].length();
//			else
//			{
//				pair<int,int> temp = minR[component[it->second]];
//				R+=temp.first,C==temp.second;
//			}
//		}
//		cout << R << " " << C <<endl;
//	}
//	return 0;
//}
//
