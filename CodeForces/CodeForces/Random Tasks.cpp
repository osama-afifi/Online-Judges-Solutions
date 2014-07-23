//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<set>
//#include<map>
//#include<queue>
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) (A.begin(), A.end())
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//int oo=1<<25;
//int x[] = {8,3,2,1,129};
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair 
//#define MAX 100000
//using namespace std;
//
//
//LL m;
//int k;
//LL C[65][65];
//LL dp[65][65][2];
//
////LL solve(int idx , int one, bool b)
////{
////	if(one>k)return 0;
////	if(idx==-1)
////		return one==k;
////
////	if(dp[idx][one][b]!=-1)
////		return dp[idx][one][b];
////
////	LL sum = 0;
////	sum+= solve(idx-1, one, b | ( n & (1LL<<idx)) );
////	if( b ||  n &(1LL<<idx) )
////		sum+= solve(idx-1, one+1, b );
////	return dp[idx][one][b] = sum;
////}
//
//LL calc(int n, int i, int one, bool b){
//	if (one < 0)
//		return 0;
//	if (i == -1)
//		return !one;
//	if (dp[i][one][b] == -1)
//		return dp[i][one][b];
//	LL sum=0;
//	sum += calc(n, i - 1, one, b || ((1<<i)&n));
//	if (b || ((1<<i)&n))
//		sum += calc(n, i - 1, one - 1, b);
//
//	return dp[i][one][b] = sum;
//}
//
//LL choose(int n , int k)
//{
//	if(n<=0)
//		return 0;
//	if(C[n][k]!=-1)
//		return C[n][k];
//	if(k==1)return n;
//	return C[n][k] = choose(n-1,k) + choose(n-1,k-1);
//}
////	0000101001001
//
//LL solve(LL n)
//{
//	FOR
//}
//
//LL solve(LL n)
//{
//	Set(dp,-1);
//	LL x = calc(n, 64, k, 0);
//	Set(dp,-1);
//	LL y = calc(2*n,64, k,0);
//	return y-x;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	Set(C,-1);
//	choose(64,64);
//
//	while(cin>>m>>k)
//	{
//		LL b= 0, e = 1e18, res = -1;
//		while(b<=e)
//		{
//			LL mid = (b+e)/2;
//			LL x = solve(mid);
//			if(x<m)
//				b = mid+1;
//			else if(x>m)
//				e = mid-1;
//			else 
//			{
//				res = mid;
//				break;
//			}
//		}
//		cout << res <<endl;
//	}
//	return 0;
//}
//
