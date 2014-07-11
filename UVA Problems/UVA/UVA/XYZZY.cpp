//#include <iostream>
//#include <cstdlib>
//#include <stdio.h>
//#include <math.h>
//#include <cstring>
//#include <stdio.h>
//#include <vector>
//
//using namespace std;
//
//
//
//int min(int a , int b)
//{return a< b ? a : b;}
//
//int n,x,m;
//int const oo = 1<<25;
//
//int c[107][107];
//int d[107];
//int cost[107];
//vector< vector<int> >V;
//
//
//struct edge
//{
//	int from,to;
//
//}e[10007];
//
//bool visit[107];
//bool exist;
//
//void dfs(int node)
//{
//	if(node==n-1)exist=1;
//	visit[node]=1;
//	for(int i = 0 ; i<V[node].size() ; i++)
//		if(!visit[V[node][i]])
//			dfs(V[node][i]);
//		
//}
//
//
//int main()
//{	
//	freopen("input.in","r",stdin);
//	int num;
//	while(cin>>n)
//	{
//		if(n<0)break;
//		V.clear();
//		V.resize(n+1);
//
//			m=0;
//		for(int i = 0 ; i <n ; i++)
//		{	
//			cin>>cost[i];
//		//	cost[i]*=-1;
//			cin>>x;
//
//			while(x--)
//			{			
//				cin>>num;
//				V[i].push_back(num-1);
//				e[m].from=i;
//				e[m].to=num-1;
//				m++;
//			}
//		}
//
//		//BF
//
//		for(int i = 0 ; i <n ; i++)
//			d[i]=-oo;
//
//		d[0]=100;
//
//		for(int i = 0 ; i <n-1 ; i++)
//			for(int j = 0 ; j<m ; j++)
//				if(d[e[j].from]>0 && d[e[j].to]<d[e[j].from]+cost[e[j].to])
//					d[e[j].to]=d[e[j].from]+cost[e[j].to];
//		
//		exist=0;
//		memset(visit,0,sizeof(visit));
//		
//		for(int j = 0 ; j<m ; j++)
//				if(d[e[j].from]>0 && d[e[j].to]<d[e[j].from]+cost[e[j].to])
//				{
//					dfs(e[j].from);
//					if(exist)
//				break;
//				}
//
//		if(d[n-1]>0 || exist)
//			puts("winnable");
//		else
//			puts("hopeless");
//			
//
//
//	}
//
//	return 0;
//}
