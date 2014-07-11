//# include <iostream>
//# include <stdio.h>
//# include <cstring>
//# include <algorithm>
//
//using namespace std;
//int maxi;
//int no;
//int sol;
//int output[50];
//int ind;
//int tracks[51];
//bool vis[50];
//int c;
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	while(cin>>maxi)
//	{
//		int dp[20][21];
//		memset(dp,0,sizeof(dp));
//		c=0;
//		sol=0;
//		bool vis[51];
//
//		cin>>no;
//		for(int i=0;i<no;i++)
//			scanf("%d",&tracks[i]);
//
//	/*	for (i=1;i<=N;i++)
//			for (w=1;w<=MW;w++) {
//				if (Wi[i] > w)
//					C[i][w] = C[i-1][w];
//				else
//					C[i][w] = max(C[i-1][w] , C[i-1][w-Wi[i]]+Vi[i]);
//			}
//			output(C[N][MW]);*/
//
//			for(int i=1;i<=no;i++)
//				for(int j=0;j<=20;j++)
//				{
//					if(tracks[i]>j)
//						dp[i][j]=dp[i-1][j];
//					else
//						dp[i][j] = max( dp[i-1][j] , dp[i-1][j-tracks[i]]+tracks[i] );
//
//				}
//
//				cout<<dp[20][no]<<endl;
//
//
//				//for(int i=0;i<c;i++)
//				//	printf("%d ",output[i]);
//
//			//	printf("sum:%d\n",sol);
//
//
//	}
//	return 0;
//}