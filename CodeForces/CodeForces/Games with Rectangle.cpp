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
//int oo =1<<25;
//int dp[1009][1009];
//
//long long solve(int len , int k)
//{
//	if(k==0)return 1;
//	if(len<=0)return 0;	
//	if(dp[len][k]!=-1)return dp[len][k];
//	return dp[len][k] = (solve(len-2,k-1)+2*solve(len-1,k)-solve(len-2,k)+1000000007) %1000000007;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	Set(dp,-1);
//	int n,m,k;
//	while(cin>>n>>m>>k)
//		cout<<(solve(n-2,k)*solve(m-2,k))%1000000007<<endl;
//	
//	
//	return 0;
//}