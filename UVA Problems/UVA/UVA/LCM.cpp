

//////////////////////	NOT SOLVED YET
//#include <iostream>
//#include <map>
//#include <cstdio>
//#include <queue>
//#include <vector>
//#include <cstring>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define LL long long 
//#define pii pair<int,int>
//#define pll pair<LL,LL>
//#define MAX_BOLTS 500
//#define MAX_NUTS  500
//#define mp make_pair
//
//int gcd(int a ,int b)
//{return a==0 ? b : gcd(b%a,a) ; }
//int lcm(int a , int b)
//{ return (a/gcd(a,b))*b;}
//
//bool prime[1000001];
//vector<int>P;
//
//inline void sieve(int N)
//{
//	P.clear();
//	Set(prime,0);
//	for(int i = 2 ; i*i<N  ; i++)
//	{
//		if(!prime[i])
//			for(int j=i*i ; j<N ; j+=i)
//				prime[j]=1;
//	}
//	FOR(i,2,N)
//		if(!prime[i])
//			P.push_back(i);
//}
//
//long long dp[1000001];
//int maxi[1000001];
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	sieve(1000001);
//
//		FOR(i,0,1000001)
//		maxi[i]=1;
//
//	for(int i = 0 ; i< P.size() && P[i]<=1000 ; i++)
//		for(int j = P[i] ; j<=1000000 ; j*=P[i])
//			maxi[j]=P[i];
//
//
//	dp[1] = 1;
//	FOR(i,2,1000001)
//	{
//		int x = (maxi[i]*dp[i-1]);
//		while(x%10==0)
//			x/=10;
//		x%=1000000;
//		dp[i]=x;
//	}
//
//	int n;
//	while(cin>>n)
//	{
//		if(!n)break;
//		int x = dp[n];
//
//		while(x%10==0)
//		{
//			x/=10;
//		}
//
//		cout<<x%10<<endl;
//
//	}
//
//	return 0;
//}