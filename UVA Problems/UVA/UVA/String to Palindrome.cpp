//#include <iostream>
//#include <cstring>
//#include <string>
//
//
//using namespace std;
//
//int min(int a , int b , int c)
//{
//	if(c<b && c<a)return c;	
//	if(b<a && b<c)return b;
//	return a;
//}
//
//string text;
//int const oo = 1<<25;
//int dp[1000][1000];
//
//
//int solve(int i , int j)
//{
//	if(dp[i][j]!=-1)return dp[i][j];
//
//	if(j-i<1)return 0;
//
//	if(text[i]==text[j])
//		return dp[i][j]=solve(i+1,j-1);
//	else
//	{
//		int min=oo;
//		int s1=solve(i+1,j);
//		int s2=solve(i,j-1);
//		int s3=solve(i+1,j-1);
//
//		if(s1<min)
//			min=s1;
//		
//		if(s2<min)
//			min=s2;
//		
//		if(s3<min)
//			min=s3;
//
//
//	return dp[i][j]=1+min;
//	}
//
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t,kase=0;
//
//	cin>>t;
//	cin.ignore();
//	while(t--)
//	{
//		memset(dp,-1 ,sizeof dp);
//	getline(cin,text);
//	
//	int res=solve(0,text.length()-1);
//	cout<<"Case "<<++kase<<": "<<res<<endl;
//	}
//
//
//return 0;
//}