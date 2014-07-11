//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <stdio.h>
//#include <math.h>
//#include <vector>
//
//using namespace std;
//
//string sides[]={ "front", "back", "left", "right", "top" , "bottom"};
//
//vector< vector<int> > V;
//int n;
//int dp[105][505];
//int const oo = 1<<25;
//int path[500][100];
//int first=0;
//int solve(int index , int color )
//{
//	if(index<0)
//		return 0;
//	if(dp[index][color]!=-1)
//		return dp[index][color];
//	dp[index][color]=0;
//	int s1=0,s2=0;
//	int cc=0;
//	for(int i = 0 ; i<6 ; i++)
//		if(color==7 || V[index][i]==color)
//		{
//			s1=solve(index-1 , (i%2==0) ? V[index][i+1] : V[index][i-1])+1;
//			if(s1>dp[index][color])
//			{
//				dp[index][color]=s1;
//				//path[color][index]= i ;
//				//if(color==7)first=index;
//				cc=i;
//			}
//		}
//		s2=solve(index-1, color);
//		if(s1>s2)
//		{
//			dp[index][color]=s1;
//			path[index][color]=cc;
//		}
//		else
//		{
//			dp[index][color]=s2;
//			path[index][color]=7;
//		}
//		return dp[index][color];
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int kase=0;
//	bool first=true;
//
//	while(cin>>n)
//	{
//		if(!first)cout<<endl;
//		first=false;
//
//		memset(dp,-1,sizeof dp);
//		memset(path,-1,sizeof path);
//
//		if(!n)break;
//
//		int num;
//
//		V.clear();
//		V.resize(n+1);
//
//		for(int i = 0 ; i < n ; i++)
//			for(int j = 0 ; j < 6 ; j++)
//			{
//				cin>>num;
//				V[i].push_back(num-1);
//			}
//			cout<<"Case #"<<++kase<<endl;
//			cout<<solve(n-1,7)<<endl;
//
//			int side = 7;
//
//			for(int i = n-1 ; i>=0 ; i--)
//			{
//				side=path[i][side];
//				if(side!=7)
//					cout<<i+1<<" "<<sides[side]<<endl;
//			}
//			
//	}	
//
//	return 0;
//}