//#include <iostream>
//#include <string>
//#include <cstring>
//
//using namespace std;
//
//int dp[1005][1005];
//
//int max(int a, int b) {return (a>b) ? a :b;}
//int min(int a, int b) {return (a<b) ? a :b;}
//
//string text1,text2;
//
//int LCS(int x , int y)
//{
//	for(int i=1 ; i<=x ; i++)
//		for(int j=1 ; j<=y ; j++)
//		{
//			if(text1[i-1]==text2[j-1])
//				dp[i][j]=dp[i-1][j-1]+1;
//			else
//				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//		}
//		return dp[x][y];
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	while(getline(cin,text1))
//	{
//		getline(cin,text2);
//		memset(dp,0,sizeof dp);
//		cout<<LCS(text1.length(),text2.length())<<endl;	
//	}
//
//
//	return 0;
//}