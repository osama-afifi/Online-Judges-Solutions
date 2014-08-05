//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<queue>
//#include<set>
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) A.begin(), A.end()
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//int oo=1<<25;
//
//int n;
//int acc[100009];
//int dp[100009];
//int par[100009];
//
//
//__inline LL cum(LL x)
//{
//	return (x*(x+1))/2;
//}
//
//int solve(int n)
//{
//	if(dp[n]!=-1)
//		return dp[n];
//	set<int>S;
//	for(int k=2 ; cum(k)<=n ; k++)
//		if(n-cum(k)>=0 && (n-cum(k))%k==0 )
//		{
//			LL a= (n-cum(k))/k;
//			int cur=0;
//			FOR(j,0,k)
//				cur ^= solve(a+j+1);
//			S.insert(cur);
//			if(cur==0 && par[n]==0)
//				par[n]=k;
//		}
//		int g=0;
//		while(S.find(g)!=S.end())++g;
//		return dp[n]=g;
//}
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//	acc[0]=0;
//	FOR(i,1,100000+1)
//		acc[i]= acc[i-1]^i;
//
//	while(cin>>n)
//	{
//		Set(dp,-1);
//		int res = solve(n);
//		if(res==0)
//			cout << -1 <<endl;
//		else 
//			cout << par[n] <<endl;
//
//	}
//	return 0;
//}