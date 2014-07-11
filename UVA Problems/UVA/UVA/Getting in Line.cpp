//#include <iostream>
//#include <iomanip>
//#include <algorithm>
//#include <cstring>
//#include <stdio.h>
//#include <math.h>
//
//
//using namespace std;
//
//pair<int,int> point[10];
//double dist[10][10];
//int limit;
//double dp[10][1<<9];
//double const oo=1<<20;
//int n;
//int path[10][1<<9];
//
//double distance(int x1,int y1, int x2 , int y2)
//{
//	return sqrt(double(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))+16.0;
//}
//
//double tsp(int node , int vis)
//{
//	if(vis==limit)
//		return 0;
//
//	if(dp[node][vis]<0)
//		return dp[node][vis];
//
//	dp[node][vis]=oo;
//
//	for(int i = 0 ; i< n ; i++)
//		if(node!=i && !( (1<<i) & vis ))
//			if(tsp(i,(1<<i)|vis)+dist[node][i]<dp[node][vis])
//			{
//				dp[node][vis]=tsp(i,(1<<i)|vis)+dist[node][i];
//				path[node][vis]=i;
//			}
//			
//			
//	return dp[node][vis];
//
//}
//
//
//
//int main()
//{
//	int kase=0;
//	freopen("input.in","r",stdin);
//	while(scanf("%d",&n)==1)
//	{
//	if(!n)break;
//
//	memset(dp,-1 , sizeof dp);
//
//	for(int i = 0 ; i < n ; i++)
//		scanf("%d%d",&point[i].first,&point[i].second);
//	
//	for(int i = 0 ; i < n ; i++)
//		for(int j = 0 ; j < n ; j++)
//	dist[i][j]=distance(point[i].first,point[i].second,point[j].first,point[j].second);
//
//	limit=(1<<n)-1;
//	int start=0;
//	double res =oo;
//	double temp=0;
//	for(int i = 0 ; i< n ; i++)
//	{
//		temp=tsp(i,(1<<i));
//		if(temp<res)
//		{
//			res=temp;
//			start=i;
//		}
//	}

//	puts("**********************************************************");
//	cout<<"Network #"<<++kase<<endl;
//
//	int mask=0;
//	int x=start;
//	for(int i =0 ; i<n-1 ; i++)
//	{
//	x=path[x][mask|=1<<x]; 
//	cout<<"Cable requirement to connect ("<<point[start].first<<","<<point[start].second<<") to ("<<point[x].first<<","<<point[x].second<<") is "<<setprecision(2)<<fixed<<dist[start][x]<<" feet."<<endl;
//	start=x;
//	}
//
//	cout<<"Number of feet of cable required is "<<setprecision(2)<<fixed<<res<<"."<<endl;
//
//	}
//
//
//return 0;
//}