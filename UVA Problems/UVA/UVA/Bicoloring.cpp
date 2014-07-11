//#include <iostream>
//#include <iomanip>
//#include <stdio.h>
//#include <algorithm>
//#include <string>
//#include <cstring>
//#include <sstream>
//#include <vector>
//#include <queue>
//#include <math.h>
//
//using namespace std;
//int  const oo = 1<<25;
//int min(int x, int y){ return x < y ? x : y; }
//int max(int x, int y){ return x > y ? x : y; }
//
//vector < vector<int> > V;
//bool vis[220];
//int color[220];
//
////void dfs(int node , int prev_col)
////{
////	vis[node]=true;	
////	if(prev_col<0) color[node]=0;
////	else color[node]=(prev_col+1)%2;
////
////	for(int i = 0 ; i<V[node].size() ; i++)
////		if(!vis[V[node][i]])
////			dfs(V[node][i],color[node]);		
////}
//
//int main()
//{
//	string ans[]={"NOT BICOLORABLE.","BICOLORABLE."};
//	int n,m,kase=0;
//	freopen("input.in","r",stdin);
//	while( scanf("%d",&n) ==1 )
//	{
//		memset(vis,0,sizeof vis);
//		memset(color,-1,sizeof color);
//		if(!n)break;
//		scanf("%d",&m);
//		int n1,n2;
//		V.clear();
//		V.resize(n);
//		for(int i = 0 ; i<m ; i++ )
//		{
//			scanf("%d%d",&n1,&n2);
//			V[n1].push_back(n2);
//			V[n2].push_back(n1);
//		}
//bool bi=true;
//		queue< pair<int,int> >BFS;
//		BFS.push(make_pair(0,0));
//		pair< int,int >current;
//		color[0]=1;
//		while(!BFS.empty())
//		{
//			current=BFS.front();
//
//			BFS.pop();
//			if(current.second%2==0)
//				color[current.first]=0;
//			else color[current.first]=1;
//
//			for(int i = 0 ; i<V[current.first].size() ; i++)
//			{
//				if(!vis[V[current.first][i]]/* && color[i]==-1*/)
//				{
//					vis[V[current.first][i]]=true;
//					BFS.push(make_pair(V[current.first][i],current.second+1));
//				}
//				else if(color[current.first]==color[V[current.first][i]])
//				{
//				bi=false;
//				break;
//				}
//			}
//			if(!bi)break;
//		}
//		cout<<ans[bi]<<endl;
//	}
//	return 0;
//}