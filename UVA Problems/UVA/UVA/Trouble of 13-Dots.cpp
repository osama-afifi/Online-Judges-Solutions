//#include <iostream>
//#include <algorithm>
//#include <cstdlib>
//#include <cstring>
//
//using namespace std;
//
//int const oo = 1<<25;
//int max(int a , int b ) { return (a>b) ? a : b ;}
//int value[101];
//int weight[101];
//int dp[101][40001];
//int total;
//
//int W,n;
//
//int solve(int n,int w)
//{	
//	if(n==0)
//	{
//	    int net_weight = W + 200 - w;
//            if (net_weight > W && net_weight <= 2000)
//                return -oo;
//
//		return 0;
//	}
//
//	if(w<0)return -oo;
//	if(dp[n][w]!=-1)return dp[n][w];
//	int s1,s2=-oo;
//	 s1=solve(n-1,w);
//	 if(w-weight[n]>=0)
//	 s2=solve(n-1,w-weight[n])+value[n];
//	
//	return dp[n][w]=max(s1,s2);
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	
//
//	while(cin>>W>>n)
//	{
//		total=0;
//	memset(dp,-1,sizeof dp);
//		for(int i = 1 ; i<=n ; i++)
//			scanf("%d%d",&weight[i],&value[i]);
//
//		
//		int res;
//		
//		 res=solve(n,W+200);
//	
//
//		printf("%d\n",res);
//
//	}
//
//	return 0;
//}
