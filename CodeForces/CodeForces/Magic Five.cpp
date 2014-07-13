////Not Accepted
//
//#include <vector>
//#include <list>
//#include <map>
//#include <set>
//#include <queue>
//#include <deque>
//#include <stack>
//#include <bitset>
//#include <algorithm>
//#include <functional>
//#include <numeric>
//#include <utility>
//#include <sstream>
//#include <iostream>
//#include <iomanip>
//#include <cstdio>
//#include <cmath>
//#include <cstdlib>
//#include <ctime>
//#include <cstring>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair
//
//long long square(long long x)
//{
//	return x*x;
//}
//long long bigmod(long long  b,long long  p, long long  m)
//{
//	if(p==0)
//		return 1;
//	else if(p%2==0)
//		return square((bigmod(b,p/2,m)))%m;
//	else
//	return (b%m)*(bigmod(b,p-1,m))%m;
//
//}
//long long M = 1000000007 ;
//
//long long  modInverse(long long  a, long long  n) {
//	return bigmod(a,n-2, n);
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	
//	string a;
//	long long k;
//	while(cin>>a>>k)
//	{
//	
//
//	long long ans = 0;
//	long long L = a.length();
//	
//		long long s2 = bigmod(2,k*L, M) -1 ;
//		long long s3 = bigmod(2,L, M) -1;
//
//		s3 = modInverse(s3,M);
//		s2 = (s2%M*s3%M)%M;
//
//	FOR(i,0,a.length())
//	{
//
//		 if(a[i]=='5' || a[i]=='0')
//		{
//		long long s1 = bigmod(2,i, M)%M;
//		ans = ( ans%M + s1%M )%M;
//		}
//
//	}
//		cout<< ((ans%M)*(s2%M))%M <<endl;
//	}
//}