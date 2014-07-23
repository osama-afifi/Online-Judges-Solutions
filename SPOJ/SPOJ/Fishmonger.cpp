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
//int cost[55][55];
//int tt[55][55];
//int n,t;
//pair<int,int> d[55][1007];
//
//pair<int,int> solve(int node  , int time)
//{
//	if(time>t)
//		return make_pair(oo,oo);
//	if(node==n-1)
//		return make_pair(0,time);
//
//	if(d[node][time].first!=-1)
//		return d[node][time];
//
//	int dist=oo;
//	int tim=oo;
//
//	for(int i = 0 ; i<n ; i++)
//		if(i!=node)
//		{
//			pair<int , int > s = solve( i, time + tt[node][i] );
//			if(dist > s.first + cost[node][i])
//			{
//				dist = s.first + cost[node][i];
//				tim=s.second;
//			}
//			else if(dist == s.first + cost[node][i] && tim>s.second)
//				tim=s.second;
//		}	
//		return d[node][time]=make_pair(dist,tim);
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	while(scanf("%d%d",&n,&t)==2)
//	{
//		if(n==0 && t==0)break;
//
//		for(int i= 0 ; i < n ; i++)
//			for(int j= 0 ; j < n ; j++)
//				scanf("%d",&tt[i][j]);
//
//
//		for(int i= 0 ; i < n ; i++)
//			for(int j= 0 ; j < n ; j++)
//				scanf("%d",&cost[i][j]);
//
//		for(int i= 0 ; i < n ; i++)
//			for(int j= 0 ; j <= 1000 ; j++)
//				d[i][j].first=-1;
//
//		pair<int,int> res=solve(0,0);
//		printf("%d %d\n",res.first,res.second);
//
//	}
//
//
//	return 0;
//}
