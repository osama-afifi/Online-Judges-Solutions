//#include <iostream>
//#include <algorithm>
//#include <cstdlib>
//#include <stdio.h>
//#include <math.h>
//#include <cstring>
//#include <stdio.h>
//#include <vector>
//
//using namespace std;
//
//int dp[107][107];
//int const oo = 1<<25;
//int main()
//{	
//	freopen("input.in","r",stdin);
//int n,m;	
//int t;
//cin>>t;
//int kase=0;
//while(t--)
//{
//	cin>>n;
//	cin>>m;
//for(int i = 0 ; i< n ; i++)
//{
//	for(int j = 0 ; j< n ; j++)	
//		dp[i][j]=oo;
//	dp[i][i]=0;
//}
//int n1,n2;
//for(int i = 0 ; i< m ; i++)
//{
//	cin>>n1>>n2;
//	dp[n1][n2]=dp[n2][n1]=1;
//}
//
//
//for(int k = 0 ; k< n ; k++)
//for(int i = 0 ; i< n ; i++)
//	for(int j = 0 ; j< n ; j++)
//		dp[i][j]=min(dp[i][j], dp[i][k]+dp[k][j]);
//
//int maxi=0;
//int s,t;
//cin>>s>>t;
//
//for(int i = 0 ; i< n ; i++)
//	maxi=max(maxi,dp[s][i]+dp[i][t]);
//
//
//cout<<"Case "<<++kase<<": "<<maxi<<endl;
//
//}
//	
//
//	return 0;
//}
