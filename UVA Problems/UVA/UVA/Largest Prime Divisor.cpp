//#include <iostream>
//#include <cstring>
//#include <stdio.h>
//#include <math.h>
//
//bool isprime[10000001];
//long long prime[10000001];
//int m=0;
//
//void sieve(long long  N)
//{
//	memset(isprime,1,sizeof isprime);
//	isprime[0]=0;
//	isprime[1]=0;
//
//	for(long long  i =2 ; i <=N ; i+=(1+(1&i)))
//	{
//		if(!isprime[i])continue;
//		prime[m++]=i;
//		for(long long  j=2*i ; j<=N ; j+=i)
//			isprime[j]=false;
//	}
//}
//
//long long LPD(long long  x)
//{
//	int count=0;
//	long long  n=x;
//	long long  k=0,lpd=-1;
//	while(n>1 && prime[k]<=n && k<m)
//	{
//		if(n%prime[k]==0)
//		{
//			count++;
//			while(n%prime[k]==0)
//			{
//				n/=prime[k];
//				if(prime[k]!=x)
//					lpd=prime[k];
//			}
//		}
//		k++;
//
//	}
//if(n==1 && count>1)
//	return lpd;
//if(n!=1 && count>0)
//	return n;
//
//	return	-1;
//
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	long long  n;
//	sieve(10000000);
//	while(scanf("%lld",&n)==1)
//	{
//		if(!n)break;
//		n=(n<0) ? -n : n;
//		printf("%lld\n",LPD(n));
//
//	}
//	return 0;
//}