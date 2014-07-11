//#include <iostream>
//#include <cstring>
//#include <string>
//#include <map>
//#include <algorithm>
//#include <queue>
//#include <vector>
//#include <stdio.h>
//
//using namespace std;
//
//int const oo = 1<<25;
//
//struct Node
//{
//	int node,cost;
//	Node()
//	{}
//	Node(int n , int v) : node(n),cost(v)
//	{}
//	bool operator < (const Node & a )const
//	{
//		return cost>a.cost;
//	}
//
//};
//
//vector< pair<int ,int > > G[10003]; 
//string s1,s2;
//int n,t,q,n1,n2,w;
//string text;
//int d[10003];
//map<string,int> M;
//int st,ta;
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	scanf("%d",&t);
//	while(t--)
//	{
//		int index=1;
//		M.clear();
//		scanf("%d",&n);
//		//G.clear();
//		//G.resize();
//		for(int i = 0 ; i<=n ; i++)
//			G[i].clear();
//
//		for(int i= 0 ; i < n ; i++)
//		{
//			cin>>text;
//			M[text]=index;
//			scanf("%d",&q);
//			while(q--)
//			{
//				scanf("%d%d",&n1,&w);
//				G[index].push_back(make_pair(n1,w));
//				//G[n1].push_back(make_pair(M[text],w));
//			}
//			index++;
//		}
//		int z;
//		scanf("%d",&z);
//		string s1,s2;
//		while(z--)
//		{
//			cin>>s1>>s2;
//			priority_queue< Node > Q;
//			st=M[s1];
//			ta=M[s2];
//			Q.push(Node(st,0));
//			for(int i = 0 ; i<=n ; i++)
//				d[i]=oo;
//			d[st]=0;
//			Node c;
//			while(!Q.empty())
//			{
//				c=Q.top();
//				Q.pop();
//				if(c.node==ta)
//					break;
//				for(int i = 0 ; i<G[c.node].size() ; i++)
//				{
//					if(d[G[c.node][i].first]>d[c.node]+G[c.node][i].second)
//					{
//						d[G[c.node][i].first]=d[c.node]+G[c.node][i].second;
//						Q.push(Node(G[c.node][i].first,c.cost+G[c.node][i].second));
//					}
//				}
//			}
//			printf("%d\n",d[ta]);
//			//	if(t)putchar('\n');
//		}
//	}
//	return 0;
//}
