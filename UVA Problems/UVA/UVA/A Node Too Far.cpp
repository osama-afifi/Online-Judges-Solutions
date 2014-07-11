//#include <iostream>
//#include <cstring>
//#include <stdio.h>
//#include <queue>
//#include <map>
//
//using namespace std;
//
//bool Node[61][61];
//bool VIS[61];
//int n;
//int ind;
//
//void BFS(int s , int ttl)
//{
//
//	queue < pair <int,int> > BFS;
//
//	BFS.push( make_pair(s,0) );
//
//	bool found = false;
//
//	pair < int ,int > current;
//
//	while(!BFS.empty())
//	{
//		current=BFS.front();
//		
//		BFS.pop();
//
//		for(int i=0;i<ind;i++)
//		{
//			if(Node[current.first][i] && !VIS[i] && current.second<ttl)
//			{
//				VIS[i]=true;
//				BFS.push( make_pair(i,current.second+1) );				
//			}
//		}
//
//	}
//
//}
//
//
//
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int kase=0;
//	int n1,n2,s,ttl;
//	while(cin>>n)
//	{
//		memset(VIS,false,sizeof(VIS));
//		memset(Node,false,sizeof(Node));
//		if(n==0)break;
//
//		map< int , int > M;
//		ind=0;
//		for(int i = 0 ; i < n ; i++)
//		{
//			scanf("%d%d",&n1,&n2);
//			if(M.find(n1)==M.end())M[n1]=ind++;
//			if(M.find(n2)==M.end())M[n2]=ind++;
//
//			Node[M[n1]][M[n2]]=Node[M[n2]][M[n1]]=true;
//
//		}
//
//		while(cin>>s>>ttl)
//		{
//			if(s==0 && ttl==0)break;
//
//			memset(VIS,false,sizeof(VIS));
//
//			VIS[M[s]]=true;
//			BFS(M[s],ttl);
//			int count=0;
//			for(int i=0 ; i<ind ; i++)
//				if(VIS[i])
//					count++;
//			printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++kase,ind-count,s,ttl);	
//		}
//	}
//	return 0;
//}
//
