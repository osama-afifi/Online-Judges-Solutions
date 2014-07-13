//
//#include<iostream>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<queue>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//using namespace std;
//string text;
//int n,h;
//int oo =1<<25;
//int mini=-oo;
//int tar;
////true down
////false up
//#define DOWN 1
//#define UP 0
//
//int dp[5][25][11][11][2];
//
//long long solve(int num,int index , int h  , int d, bool dir , bool first)
//{
//	if(d<0 || h<0)return 0;
//	if(index==n &&h==0 && d==0)
//		return 1;
//	if(index==n)return 0;
//	if(dp[num][index][h][d][dir]!=-1)
//		return dp[num][index][h][d][dir];
//	long long sum=0;
//	for(int i = num+1 ; i<4 ; i++)
//			if(dir==DOWN)
//				sum+=solve(i,index+1,h,d-1,UP,0);
//			else
//				sum+=solve(i,index+1,h,d,UP,0);
//	if(!first)
//	for(int i = num-1 ; i>=0 ; i--)
//			if(dir==DOWN)
//				sum+=solve(i,index+1,h,d,DOWN,0);
//			else
//				sum+=solve(i,index+1,h-1,d,DOWN,0);
//	return dp[num][index][h][d][dir]=sum;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//
//	while(cin>>n>>h)
//	{	
//		Set(dp,-1);
//		tar=(1<<4)-1;
//		int sum=0;
//		for(int i = 0 ; i<4 ; i++)
//			dp[0][0][h][h-1][UP]=sum+=solve(i,1,h,h-1,UP,1);
//		cout<<sum<<endl;
//	}
//
//	return 0;
//}