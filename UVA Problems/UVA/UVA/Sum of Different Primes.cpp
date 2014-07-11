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
//
//vector< pair<int,int> >V;
//
////int dp[10009];
////int freq[10009];
//
//#define OPEN 1
//#define CLOSE 0
//
//bool prime[1300];
//vector<int>P;
//
//inline void sieve()
//{
//	Set(prime,1);
//	FOR(i,2,1125)
//	{
//		if(prime[i])
//		{
//			P.push_back(i);
//			for(int j=i*i;j<1125;j+=i)
//				prime[j]=0;
//		}
//	}
//	prime[1]=0;
//	
//}
//
//int N,K;
//int dp[1300][20][200];
//long long solve(int n , int k, int prev)
//{
//	if(n<0 || k<0)return 0;
//	if(n==0 && k==0)return 1;
//	if(dp[n][k][prev]!=-1)
//		return dp[n][k][prev];
//	long long sum=0;
//	for(int i=prev-1;i>=0;i--)
//		sum+=solve(n-P[i],k-1,i);
//	return dp[n][k][prev]=sum;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int n;
//	sieve();
//	while(scanf("%d%d",&N,&K)==2)
//	{
//		if(N==0 && K==0)break;
//		Set(dp,-1);
//		printf("%lld\n",solve(N,K,P.size()));
//	}
//	return 0;
//}
