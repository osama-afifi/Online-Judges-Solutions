//
//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<queue>
//#include<stack>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//using namespace std;
//
//string text;
//int t,n;
//int oo =1<<25;
//int dp[109][26*101];
//long long solve(int index , int sum)
//{
//	if(sum<0)return 0;
//	if(!index) return (!sum);
//	if(dp[index][sum]!=-1)
//		return dp[index][sum];
//	long long total=0;
//	for(int i = 0 ; i<26 ; i++)
//	total = (total + solve(index-1,sum-i))%1000000007;
//	return dp[index][sum]=total ;
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t;Set(dp,-1);
//	while(cin>>t)
//	while(t--)
//	{
//		
//		cin>>text;
//		int s=0;
//		FOR(i,0,text.length())
//			s+=text[i]-'a';
//		cout<<(solve(text.length(),s)-1)<<endl;	
//	}
//
//	return 0;
//}