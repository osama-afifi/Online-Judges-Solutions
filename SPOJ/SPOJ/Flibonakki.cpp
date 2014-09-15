////
////#include <iostream>
////#include <algorithm>
////#include <stdio.h>
////#include <cstring>
////#include <string>
////#include <sstream>
////#include <vector>
////#include <math.h>
////#include <map>
////#include <set>
////#include <queue>
////#include <time.h>
////#include <limits.h>
////
////using namespace std;
////#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
////#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
////#define Set(a, s) memset(a, s, sizeof (a))
////#define mp make_pair 
////#define pb push_back 
////#define REP(i,n) for (int i = 1; i <= n; i++)
////
////
////
////
////typedef long long LL;
////typedef vector<vector<LL> > matrix;
////
////#define maxbuf 50000000
////char inbuf[maxbuf],outbuf[maxbuf];
////int pi,inp,oup;
////bool sign=false;
//// 
////void getnum( LL &x)
////{
////     x=0;
////     while((inbuf[inp]<'0'||inbuf[inp]>'9') && inbuf[inp]!='-')++inp;
////     while( inbuf[inp]>='0'&&inbuf[inp]<='9')
////            x=x*10 + inbuf[inp++]-'0';
////}
//// 
////void putnum( LL x)
////{
////     char s[15];
////     pi=-1;
////     do{
////          s[++pi]= (x-x/10*10)+'0';
////          x/=10;
////     }
////     while( x>0);
////     ++pi;
////     while( pi)
////            outbuf[oup++] = s[--pi];
////     outbuf[oup++]='\n';
////}
//// 
////void getin()
////{
////     fread_unlocked( inbuf,sizeof(char),maxbuf,stdin);
////     inp=oup=0;
////}
//// 
////void putout()
////{
////     fwrite_unlocked(outbuf,sizeof(char),oup,stdout);
////}
////
////
////const LL MOD = 1000000007;
////const int K = 3;
////matrix dp[64];
////vector<LL> F1(K+1);
////matrix C(K+1, vector<LL>(K+1));
////// computes A * B
////__inline void mul(const matrix &A, const matrix &B)
////{
////
////	REP(i, K) 
////		REP(j, K) 
////	{
////		C[i][j] = 0;
////		REP(k, K)
////			C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
////	}
////
////}
////
////// computes A ^ p
////matrix pow(matrix A, LL p)
////{
////	if (p == 1)
////		return A;
////	if (p % 2)
////	{
////		mul(A, pow(A, p-1));
////		return C;
////	}
////	matrix X = pow(A, p/2);
////	mul(X, X);
////	return C;
////}
////
////__inline LL f(LL N)
////{
////	if(N<=0)
////		return 0;
////
////	if (N == 1)
////		return 1;
////	matrix T = dp[0];
////	for(int q = 0 ; N>0 && q<=55 ; q++)
////		if((N & 1LL<<q))
////		{
////			REP(i, K) 
////				REP(j, K) 
////			{
////				C[i][j] = 0;
////				REP(k, K)
////					C[i][j] = (C[i][j] + T[i][k] * dp[q][k][j]) % MOD;
////			}
////
////			N-=(1LL<<q);
////			T=C;
////		}
////
////		LL res = 0;
////		REP(i, K)
////			res = (res + T[1][i] * F1[i]) % MOD;
////		return res;
////}
////
////int main()
////{
////	freopen("input.in","r",stdin);
////
////	LL t;
////	getin();
////	getnum(t);
////
////
////	F1[1] = 0;
////	F1[2] = 1;
////	F1[3] = 1;
////
////	matrix T(K+1, vector<LL>(K+1));
////
////	/*
////	1 1 1	g(n)		g(n+1)
////	0 5 3	f(4n+2)	=	f(4n+6)
////	0 3 2	f(4n+1)		f(4n+5)
////
////	*/
////
////	T[1][1] = 1, T[1][2] = 1, T[1][3] = 1;
////	T[2][1] = 0, T[2][2] = 5, T[2][3] = 3;
////	T[3][1] = 0, T[3][2] = 3, T[3][3] = 2;
////
////	for(int i =	1 ; i<= 55 ; i++)
////		dp[i]  = pow(T,1LL<<i);
////
////	dp[0] = matrix (K+1, vector<LL>(K+1));
////	dp[0][1][1] =dp[0][2][2] =dp[0][3][3] =1;
////
////	while(t--)
////	{
////		LL a;
////		getnum(a);
////		putnum(f(a));
////		//printf("%lld\n",f(a));
////	}
////	 putout();
////
////	return 0;
////}
//
//
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
//#define REP(i,n) for (int i = 1; i <= n; i++)
//
//typedef long long LL;
//typedef vector<vector<LL> > matrix;
//const LL MOD = 1000000007;
//const int K = 2;
//
//// computes A * B
//__inline matrix mul(const matrix &A, const matrix &B)
//{
//    matrix C(K+1, vector<LL>(K+1));
//    REP(i, K) REP(j, K) REP(k, K)
//        C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
//    return C;
//}
//
//// computes A ^ p
//matrix pow(matrix A, LL p)
//{
//    if (p == 1)
//        return A;
//    if (p % 2)
//        return mul(A, pow(A, p-1));
//    matrix X = pow(A, p/2);
//    return mul(X, X);
//}
//
//// returns the N-th term of Fibonacci sequence
//LL fib(int N)
//{
//	if(N<=0)
//		return 0;
//    // create vector F1
//    vector<LL> F1(K+1);
//    F1[1] = 0;
//    F1[2] = 1;
//
//
//    // create matrix T
//    matrix T(K+1, vector<LL>(K+1));
//
//
//    T[1][1] = 1, T[1][2] = 1;
//	T[2][1] = 1, T[2][2] = 0;
//
//
//    // raise T to the (N-1)th power
//    if (N == 1)
//        return 1;
//    T = pow(T, N);
//
//    // the answer is the first row of T . F1
//    LL res = 0;
//    REP(i, K)
//        res = (res + T[1][i] * F1[i]) % MOD;
//    return res;
//}
//
//int main()
//{
//freopen("input.in","r",stdin);
//
//int t;
//scanf("%d",&t);
//	LL a;
//while(t--)
//{
//
//	scanf("%lld",&a);
//	printf("%d\n",(fib(a<<1LL)*fib((a<<1LL) +1))%MOD);
//}
//
//return 0;
//}