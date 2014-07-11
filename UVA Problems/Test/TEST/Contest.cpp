//#include<iostream>
//#include<algorithm>
//#include <iomanip>
//#include <string>
//#include <cstring>
//#include <vector>
//#include <queue>
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//using namespace std;
//
//// bugs life
//
//vector< vector<int> >V;
//int n,m;
//bool vis[2009];
//int color[2009];
//bool bic(int s)
//{
//	pair<int,int>cur;
//	queue< pair<int,int> >Q;
//	Q.push(make_pair(s,0));
//	while(!Q.empty())
//	{
//		cur=Q.front();
//		Q.pop();
//		color[cur.first]=cur.second%2;
//		FOR(i,0,V[cur.first].size())
//			if(!vis[V[cur.first][i]])
//			{
//		//		if(color[V[cur.first][i]]==-1 || color[V[cur.first][i]]!=color[cur.first])
//				{
//				
//			Q.push(make_pair(V[cur.first][i],cur.second+1));
//			V[cur.first][i]=1;
//				}
//			
//			}
//				else if(color[V[cur.first][i]]==color[cur.first])
//					return false;
//	
//	}
//	return true;
//}
//bool bicobico()
//{
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
//		return bi;
//
//
//}
//
//string res[]={"Suspicious bugs found!","No suspicious bugs found!"};
//int main()
//{
//	freopen("input.in","r",stdin);
//	int kase=0;
//	int t;
//	scanf("%d", &t);
//	while(t--)
//	{
//		Set(vis,0);
//		Set(color,-1);
//		V.clear();
//		scanf("%d %d", &n, &m);
//		V.resize(n);
//		int n1,n2;
//		FOR(i,0,m)
//		{
//			scanf("%d %d", &n1, &n2);
//			V[n1-1].push_back(n2-1);
//			V[n2-1].push_back(n1-1);
//		}
//
//		bool b=1;
//		FOR(i,0,n)
//			if(color[i]==-1)
//		color[i]=0,vis[i]=1,b&=bic(i);
//		
//		cout<<"Scenario #"<<++kase<<":"<<endl;
//		if(!b)
//		puts("Suspicious bugs found!");
//		else
//		puts("No suspicious bugs found!");
//
//	}
//
//
//	return 0;
//}