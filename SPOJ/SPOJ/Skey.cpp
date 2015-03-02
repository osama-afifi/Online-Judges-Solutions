//
//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <math.h>
//#include <map>
//#include <set>
//#include <queue>
//#include <time.h>
//#include <limits.h>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair 
//#define pb push_back 
//typedef long long LL;
//
//LL modPow(LL n , LL p , LL M)
//{
//	if(p==0)
//		return 1;
//	if(p==1)
//		return n%M;
//	LL x = modPow(n,p/2,M);
//	if(p%2==1)
//		return (n*x*x)%M;
//	return (x*x)%M;
//}
//
//LL modInverse(LL n ,LL M)
//{
//	return modPow(n,M-2,M)%M;
//}
//
//
//LL mod_inv( LL a, LL m )
//{
//  if( m == 1 )
//    return 1;
//  LL x = 0, y = 1;
//  LL r = m, s = a % m;
//  while( s )
//  {
//    LL q = r / s;
//    LL t = y;
//    y = x - q * y, x = t;
//    t = s;
//    s = r - q * s, r = t;
//  }
//  if( r > 1 )
//    return -1;
//  if( x < 0 )
//    x += m;
//  return x;
//}
//
//int main() 
//{
//	freopen("input.in","r",stdin);
//
//	int t;
//	scanf("%d",&t);
//	int kase=0;
//	while(t--)
//	{
//		LL A,N,P,M;
//		scanf("%lld %lld %lld %lld", &A, &N, &P, &M);
//
//		LL res;
//		
//			res = M;
//			res *= (modPow(A%P,N+1,P)-1+P)%P;
//			res *= A;
//			res %= P;
//			LL den = (modPow(A%P,N,P)*((A-1+P)%P))%P;
//			res *= (mod_inv(den,P)+P)%P;
//			res %=P;
//		
//		printf("Case %d: %lld\n", ++kase, res);
//	}
//
//	return 0;
//}
