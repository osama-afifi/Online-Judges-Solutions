//#include<iostream>
//#include<string>
//#include<cstring>
//#include<algorithm>
//
//using namespace std;
//
//string text1,text2;
//int dp[1001][1001];
//
//int lcs(int n , int m)
//{
//	for(int i=n;i>=0;i--)
//		for(int j=m;j>=0;j--)
//			if(i==n || j==m)
//				dp[i][j]=0;
//			else if(text1[i]==text2[j])
//				dp[i][j]=max(dp[i][j],dp[i+1][j+1]+1);
//			else dp[i][j]=max(dp[i+1][j],dp[i][j+1]);
//			return dp[0][0];
//}
//
//int print(int n, int m , int LCS)
//{
//	
//
//
//	return 0;
//
//}
//
//
//int main()
//{
//	int t;
//	scanf("%d",&t);
//	while(t--)
//	{
//		cin>>text1>>text2;
//		int LCS=lcs(text1.length(),text2.length());
//		//		print(text1.length(),text2.length(),LCS);
//		cout<<LCS<<endl;
//	}
//
//	return 0;
//}