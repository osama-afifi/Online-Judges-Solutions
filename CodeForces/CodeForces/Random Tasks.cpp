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
//LL C[65][65];
//
//LL choose(int n , int k)
//{
//	if(n<=0)return 0;
//	if(k==1)return n;
//	if(C[n][k]!=-1)	return C[n][k];
//	return C[n][k] = choose(n-1,k) + choose(n-1,k-1);
//}
//
////	0000101001001
//LL solve(LL n, int k)
//{
//	LL sum=0;
//	int ones=0;
//	for(int i=63; i>=0; i--)
//		if(k-ones>=0 && (n & (1LL<<i)))
//			sum += choose(i,k-ones), ones++;
//	return sum;
//}
//
//int k;
//
//LL solve(LL n)
//{
//	//	Set(dp,-1);
//	LL x = solve(n, k);
//	//	Set(dp,-1);
//	LL y = solve(2*n,k);
//	return y-x;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	Set(C,-1);
//	choose(64,64);
//	while(cin>>m>>k)
//	{
//		LL b= 1, e = 1e18, res = -1;
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
