//#include <iostream>
//#include <iomanip>
//#include <stdio.h>
//#include <algorithm>
//#include <string>
//#include <cstring>
//#include <sstream>
//#include <vector>
//#include <math.h>
//
//using namespace std;
//int  const oo = 1<<25;
//int path[500][500];
//int n,m,n1,n2,cost,kase=0,s,t,w;
//int min(int x, int y){ return x < y ? x : y; }
//int max(int x, int y){ return x > y ? x : y; }
//
//string text1,text2;
//
//int dp[1000][1000];
//string arr1[1000];
//string arr2[1000];
//string invalid = "!\"#$%&'()*+,-./:;<=>?@[\]^_`{|}~";
//void clean (string &text)
//{
//	for(int i = 0 ; i< text.length() ; i++ )
//		for(int j = 0 ; j< invalid.length() ; j++ )
//			if(text[i]==invalid[j])
//			{
//				text[i]=' ';
//			}
//}
//
//int LCS(int x , int y)
//{
//	for(int i=1 ; i<=x ; i++)
//		for(int j=1 ; j<=y ; j++)
//		{
//			if(arr1[i-1]==arr2[j-1])
//				dp[i][j]=dp[i-1][j-1]+1;
//			else
//				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//		}
//		return dp[x][y];
//}
//
//int main()
//{
//	int n,m,kase=0;
//	freopen("input.in","r",stdin);
//	while( getline(cin,text1) )
//	{
//		getline(cin,text2);
//
//		clean(text1);
//		clean(text2);
//		n=0,m=0;
//		stringstream ss;
//		ss<<text1;
//		while(ss>>arr1[n])
//			n++;
//
//		ss.clear();
//
//		ss<<text2;
//		while(ss>>arr2[m])
//			m++;
//
//		for(int i=0 ; i<=n ; i++)
//			for(int j=0 ; j<=m ; j++)
//				dp[i][j]=0;
//
//		int res=LCS(n,m);
//		bool blank=false;
//		if(text1=="" || text2=="" )
//			blank=true;
//		if(!blank)
//			cout<<setw(2)<<++kase<<". Length of longest match: "<<res<<endl;
//		else
//			cout<<setw(2)<<++kase<<". Blank!"<<endl;
//	}
//	return 0;
//}