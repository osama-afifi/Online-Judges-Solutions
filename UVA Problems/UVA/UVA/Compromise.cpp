//#include <iostream>
//#include <stdio.h>
//#include <string>
//#include <sstream>
//#include <cstring>
//#include <set>
//
//using namespace std;
//
//int dp[1005][1005];
//
//int max(int a, int b) {return (a>b) ? a :b;}
//int min(int a, int b) {return (a<b) ? a :b;}
//
//int maxi;
//
//string arr1[105];
//string arr2[105];
//string out[105];
//char path[1005][1005];
//
//int c=0;
//bool done;
//bool first;
////void print_LCS(int i,int j)
////{
////	if (i<1 || j<1)
////       return;
////    if (arr1[i]==arr2[j])
////    {
////       print_LCS(i-1,j-1);
////	   if(!first)putchar(' ');
////       cout<<arr1[i];
////	   	first=false;
////		return;
////    }
////
////    else if (dp[i][j]==dp[i-1][j])
////	{
////         print_LCS(i-1,j);
////	}
////    else
////        print_LCS(i,j-1);
////}
//
////
////void print_LCS(int i , int j,int index)
////{
////	if(done)return;
////	if(i==0 || j==0)
////	{
////		cout<<out[0];
////		for(int x=0 ; x<index ; x++)
////			cout<<" "<<out[x];
////		done=true;
////		return;
////	}
////	if(arr1[i]==arr2[j])
////	{
////		out[index]=arr1[i];
////		print_LCS(i-1,j-1,index+1);
////	}
////	else if (dp[i-1][j]>dp[i][j-1])
////		print_LCS(i-1,j,index);
////	else if (dp[i][j-1]>=dp[i-1][j])
////		print_LCS(i,j-1,index);
////	else
////	{
////		print_LCS(i-1,j,index);
////		print_LCS(i,j-1,index);
////	}
////}
//
//void print_LCS(int i,int j)
//{
//	if(0 == i || 0 ==j)return;
//	if('\\' == path[i][j]) {
//		print_LCS(i-1,j-1);
//		if(!first)putchar(' ');
//		cout<<arr1[i-1];
//		first=false; 
//	}
//	else if('|' == path[i][j]) print_LCS(i-1,j);
//	else if('-' == path[i][j]) print_LCS(i,j-1);
//}
//
//int LCS(int x , int y)
//{
//	for(int i=0 ; i<=x ; i++)
//		for(int j=0 ; j<=y ; j++)
//		{
//			if (i == 0 || j == 0)
//				dp[i][j] = 0;
//			else if(arr1[i-1]==arr2[j-1])
//			{
//				dp[i][j]=dp[i-1][j-1]+1;
//				path[i][j]='\\';
//			}
//			else
//			{
//				if(dp[i-1][j]>dp[i][j-1])
//				{
//					dp[i][j]=dp[i-1][j];
//					path[i][j]='|';
//				}
//				else
//				{
//					dp[i][j]=dp[i][j-1];
//					path[i][j]='-';
//				}
//			}
//		}
//		return dp[x][y];
//}
//
//string text;
//int main()
//{
//	freopen("input.in","r",stdin);
//	first=true;
//
//	int n,m;
//	string text;
//
//	while(cin>>text)
//	{		
//		done=false;
//		first=true;
//		n=0,m=0,c=0;
//		if(text=="#")break;
//		memset(dp,0,sizeof dp);
//		arr1[n++]=text;
//		while(cin>>text)
//		{
//			if(text=="#")break;
//			arr1[n++]=text;		
//		}
//		while(cin>>text)
//		{
//			if(text=="#")break;
//			arr2[m++]=text;	
//		}
//		LCS(n,m);
//		print_LCS(n,m);
//		putchar('\n');
//	}
//
//
//	return 0;
//}