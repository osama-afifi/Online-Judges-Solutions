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
//	int n;
//	bool first=true;
//	while( scanf("%d",&n) ==1)
//	{
//		if(!first)putchar('\n');
//		first=false;
//			 printf("%lld\n",nCr(2*n,n)/(n+1));
//	}
//
//	return 0;
//
//}