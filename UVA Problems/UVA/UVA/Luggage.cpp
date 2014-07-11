//# include <iostream>
//# include <string>
//# include <sstream>
//# include <stdio.h>
//
//using namespace std;
//
//
//int dp[1001][30001];
//int value[1001];
//
//
//int knapsack(int n , int W)
//{
//	dp[0][0]=0;
//	for(int i  = 1  ; i <= n ; i++)
//	{
//		dp[i][0]=0;
//		dp[0][i]=0;
//	}
//
//
//	for(int i  = 1  ; i <= n ; i++)
//		for(int j  = 1  ; j <= W ; j++)	
//			if(j-value[i]>=0 && value[i]+dp[i-1][j-value[i]]>dp[i-1][j])
//				dp[i][j]=value[i]+dp[i-1][j-value[i]];
//			else dp[i][j]=dp[i-1][j];
//
//			return dp[n][W];
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int n,t,g,c;
//	scanf("%d",&t);
//	cin.ignore();
//	string text;
//	stringstream ss;
//	while(t--)
//	{
//		int n=1;
//		int sum=0;
//		getline(cin,text);
//		ss.clear();
//		ss<<text;
//		while(ss>>value[n])
//		{
//			sum+=value[n];
//			n++;
//		}
//
//		if(sum%2!=0 || text=="" || knapsack(n,sum/2)!=sum/2)
//			puts("NO");
//		else
//			puts("YES");
//
//	}
//
//	return 0;
//}
//
//
