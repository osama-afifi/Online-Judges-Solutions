//// 7alawany Solution
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
//vector< vector<int> >V;
//int n,m;
//vector<int>dfsnum;
//vector<int>nodeParent;
//vector<int>dfslow;
//vector<bool>artt;
//vector<string>res;
////vector< pair<int,int> >bridge;
//int dfscount, rootNode, rootChildren;
//string ans[1009];
//void bridges(int node)
//{
//	dfsnum[node]=dfslow[node]=dfscount++;
//	FOR(i,0,V[node].size())
//	{
//		int v=V[node][i];
//		if(dfsnum[v]==-1)
//		{
//			nodeParent[v]=node;
//			if(node==rootNode)rootChildren++;
//			bridges(v);
//
//			if(dfslow[v]>=dfsnum[node])
//				artt[node]=1;
//			//if(dfslow[v]>dfsnum[node])
//			//	if(node<v)
//			//	bridge.push_back(make_pair(node,v));
//			//	else
//			//bridge.push_back(make_pair(v,node));
//
//			dfslow[node]=min(dfslow[node],dfslow[v]);
//		}
//		else if(v!=nodeParent[node])
//			dfslow[node]=min(dfslow[node],dfslow[v]);
//	}
//}
//map<string,int>M;
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int kase=0;
//
//	while(scanf("%d",&n)==1)
//	{
//		res.clear();
//		if(!n)break;
//		if(kase)putchar('\n');
//		
//		M.clear();
//		int index=0;
//		string text;
//		
//		dfscount=0;
//		V.clear();
//	//	bridge.clear();
//		V.resize(n);
//		dfsnum.assign(n,-1);
//		dfslow.assign(n,0);
//		artt.assign(n,0);
//		nodeParent.assign(n,-1);
//		int m,k,num;
//		FOR(i,0,n)
//		{
//			cin>>text;
//			M[text]=i;
//			ans[i]=text;
//		}
//		scanf("%d",&m);
//			string s1,s2;
//			FOR(i,0,m)
//			{
//			cin>>s1>>s2;
//			V[M[s1]].push_back(M[s2]);
//			V[M[s2]].push_back(M[s1]);
//			}
//
//		FOR(i,0,n)
//			if(dfsnum[i]==-1)
//			{
//				rootChildren=0,rootNode=i;
//				bridges(i);
//				artt[rootNode]=(rootChildren>1);
//			}
//		
//		FOR(i,0,n)
//			if(artt[i])
//				res.push_back(ans[i]);
//		printf("City map #%d: %d camera(s) found\n",++kase,res.size());
//		sort(res.begin(),res.end());
//		FOR(i,0,res.size())
//			cout<<res[i]<<endl;
//	}	
//	return 0;
//}
