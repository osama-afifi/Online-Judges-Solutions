//#include <iostream>
//#include <stdio.h>
//#include <math.h>
//
//using namespace std;
//
//int gcd(int a, int b)
//{
//if(b==0)return a;
//else return gcd(b,a%b);
//}
//int lcm(int a, int b)
//{
//return (a/gcd(a,b))*b;
//}
//
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int n;
//
//	while(scanf("%d",&n)==1)
//	{
//		if(!n)break;
//		int count=0;
//
//int divisor[10000];
//int m=0;
//		for(int i=1;i*i<=n;i++)
//		{
//			if(n%i==0)
//			{
//				divisor[m++]=i;
//				if(i*i!=n)divisor[m++]=n/i;
//			}
//		}
//
//for(int i=0;i<m;i++)
//		for(int j=i;j<m;j++)
//		if(lcm(divisor[i],divisor[j])==n)
//			count++;		
//		
//
//		printf("%d %d\n",n,count);
//
//	}
//	return 0;
//}