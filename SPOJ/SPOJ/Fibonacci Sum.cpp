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
//const int K = 3;
//
//// computes A * B
//matrix mul(matrix A, matrix B)
//{
//    matrix C(K+1, vector<LL>(K+1));
//    REP(i, K) REP(j, K) REP(k, K)
//        C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
//    return C;
//}
//
//// computes A ^ p
//matrix pow(matrix A, int p)
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
//    F1[2] = 0;
//	F1[3] = 1;
//
//    // create matrix T
//    matrix T(K+1, vector<LL>(K+1));
//	
//	/*
//		1 0 1	g(n)		g(n+1)
//		0 0 1	f(n)	=	f(n+1)
//		0 1 1	f(n+1)		f(n+2)
//
//	*/
//
//    T[1][1] = 1, T[1][2] = 0, T[1][3] = 1;
//	T[2][1] = 0, T[2][2] = 0, T[2][3] = 1;
//	T[3][1] = 0, T[3][2] = 1, T[3][3] = 1;
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
//cin>>t;
//while(t--)
//{
//	LL a,b;
//	cin>>a>>b;
//	cout << (fib(b)-fib(a-1)+MOD)%MOD <<endl;
//}
//
//return 0;
//}