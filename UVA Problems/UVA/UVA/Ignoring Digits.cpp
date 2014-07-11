//#include <iostream>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <queue>
//#include <stack>
//
//using namespace std;
//bool vis[100009];
//pair<int,int> path[100009];
//int main()
//{
//	freopen("input.in","r",stdin);
//	string list;
//	int n;
//
//	while(cin>>list>>n)
//	{
//		if(list=="0" && n==0)break;
//
//		memset(vis,0,sizeof(vis));
//		memset(path,-1,sizeof(path));
//		vector<int> V;
//		for(int i = 0 ; i <list.size() ; i++)
//			V.push_back(list[i]-'0');
//		sort(V.begin(),V.end());
//
//		queue< pair<int,int> >Q;
//		for(int i = 0 ; i <V.size() ; i++)
//			if(V[i]!=0)
//				Q.push(make_pair(V[i],V[i]%n));
//		pair<int,int> cur;
//		bool found=0;
//
//		int start=1000;
//		while(!Q.empty())
//		{
//
//			cur=Q.front();
//			Q.pop();
//			if(Q.size()<start)
//				start=Q.size();
//			if(cur.second==0)
//			{found=1;break;}
//			if(vis[cur.second])continue;
//			vis[cur.second]=1;
//			for(int i = 0 ; i<V.size() ; i++)
//			//	if(!vis[(cur.second*10+V[i])%n])
//					if(path[(cur.second*10+V[i])%n].first==-1)
//					{
//					//	vis[(cur.second*10+V[i])%n]=1;
//						path[(cur.second*10+V[i])%n].first=cur.second;
//						path[(cur.second*10+V[i])%n].second=V[i];
//						Q.push(make_pair(cur.first,(cur.second*10+V[i])%n));	
//					}
//		}
//		if(found)
//		{
//
//
//			stack<int>res;
//			int i;
//			bool done=0;
//			for(int i = 0 ; i <V.size() ; i++)
//				if(V[i] && V[i]%n==0)
//				{printf("%d\n",cur.first);done=1;break;};
//			if(done)continue;
//			for( i = 0 ; i!=cur.first && i!=-1 ; i=path[i].first)
//			{
//				if(path[i].second && path[i].second%n==0)break;
//				res.push(path[i].second);
//			}
//			printf("%d",cur.first);
//			while(!res.empty())
//			{printf("%d",res.top());res.pop();}
//			putchar('\n');
//		}
//		else
//			puts("impossible");
//	}
//	return 0;
//}