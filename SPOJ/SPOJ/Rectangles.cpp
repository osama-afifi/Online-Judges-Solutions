//#include <iostream>
//#include <string>
//#include <sstream>
//#include <cstring>
//#include <algorithm>
//#include <map>
//#include <queue>
//#include <vector>
//#include <stdio.h>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define LL long long 
//#define pii pair<int,int>
//#define pll pair<LL,LL>
//
//
//int const oo = 1<<25;
//
//
//bool prime[10007];
//int divisor[10007];
//long long res[10007];
//
//inline void sieve(int MAX)
//{
//	Set(prime,0);
//	Set(divisor,0);
//	divisor[1]=1;
//	FOR(i,2,MAX)
//	{
//		if(!prime[i])
//		{
//			for(int j =i ; j*j<=MAX/2 ; j+=i)
//				divisor[j]++,prime[i]=1;
//		}
//	}
//}
//
//int divo(int n)
//{
//int x=n;
//int p=2,c=1;
//if(n==2)return 1;
//while(p*p<=n)
//	if(x%p==0)
//		c++,p++;
//	else p++;
//return c;
//}
//int main()
//{
//
//	freopen("input.in","r",stdin);
//	int n;
//	//sieve(10001);
//	FOR(i,1,10001)
//		divisor[i]=divo(i);
//	res[0]=0;
//	res[1]=1;
//	FOR(i,2,10001)
//		res[i]=res[i-1]+divisor[i];
//	while(scanf("%d",&n)==1)
//	{
//		printf("%lld\n",res[n]);
//	}
//	return 0;
//}
