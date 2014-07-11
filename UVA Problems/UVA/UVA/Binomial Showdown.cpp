//#include <iostream>
//#include <stdio.h>
//#include <math.h>
//
//using namespace std;
//
//long long nCr(long long n , long long r)
//{
//	long double res=1;
//
//	if(r==n-1)return n;
//	r = (r>n-r) ? n-r : r;
//	for(int i =1 ; i<=r ; i++)
//	{
//		res *= (n-i+1);
//		res /= i;
//	}
//	return res;
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	long long n,k;
//
//	while( scanf("%lld %lld",&n,&k) ==2)
//	{
//		if(n==0 && k ==0)break;
//			 printf("%llu\n",nCr(n,k));
//	}
//
//	return 0;
//
//}