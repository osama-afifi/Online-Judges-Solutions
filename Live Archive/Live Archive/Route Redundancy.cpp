//#include <iostream>
//#include <iomanip>
//#include <algorithm>
//#include <cstring>
//#include <cstdio>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//
//int const oo=1<<25;
//int flow[1007][1007];
//int dp[1007][1007];
//int vis[2001];
//int n;
//int mini=oo;
//bool BFS(int s , int t)
//{
//	queue <int> BFS;
//	for(int i = 0 ; i<=n ; i++)
//		vis[i]=-1;
//
//	BFS.push(s);
//	int current;
//	while(!BFS.empty())
//	{
//		current=BFS.front();
//
//		if(current==t)
//			return true;
//		BFS.pop();
//		for(int i = 0 ; i<n ; i++ )
//		{
//			if(vis[i]==-1 && flow[current][i] )
//			{
//				vis[i]=current;
//				BFS.push(i);
//			}
//		}
//	}
//	return false;
//}
//
//void get_flow(int s,int node)
//{
//	if(s==node)
//		return;
//	if(flow[vis[node]][node]<mini)
//		mini=flow[vis[node]][node];
//
//	get_flow(s,vis[node]);
//	flow[vis[node]][node]-=mini;	
//	flow[node][vis[node]]+=mini;
//
//}
//
//int ford_fulkerson(int s , int t)
//{
//	int maxflow=0;
//	while(BFS(s,t))
//	{
//		get_flow(s,t);
//		maxflow+=mini;
//		mini=oo;
//	}
//	return maxflow;
//}
//
////int dp[107][107];
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int kase=0;
//	int t,d,m,a,b;
//	cin>>t;
//
//	while(t--)
//	{
//		cin>>d;
//		cin>>n>>m>>a>>b;
//
//		for(int i=0 ; i< n ;i++ )
//		{
//			for(int j=0 ; j< n ;j++ )
//			{
//				flow[i][j]=0;
//				dp[i][j]=-oo;
//			}
//			flow[i][i]=0;
//			dp[i][i]=0;
//		}
//
//		int n1,n2,c;
//		for(int i=0 ; i< m ;i++ )
//		{
//			cin>>n1>>n2>>c;
//		
//				flow[n1][n2]+=c;
//				if(dp[n1][n2]==oo)
//				dp[n1][n2]=c;
//				else dp[n1][n2]=max(dp[n1][n2],c);
//		}
//
//		for(int k=0 ; k< n ;k++ )
//			for(int i=0 ; i< n ;i++ )
//				for(int j=0 ; j< n ;j++ )
//					dp[i][j]=max(dp[i][j],min(dp[i][k],dp[k][j]));
//
//		int sflow=dp[a][b];
//		int maxflow=ford_fulkerson(a,b);		
//
//		double res=(double)maxflow/(double)sflow;
//
//		cout<<++kase<<" "<<setprecision(3)<<fixed<<res<<endl;
//	}
//	return 0;
//}
//
