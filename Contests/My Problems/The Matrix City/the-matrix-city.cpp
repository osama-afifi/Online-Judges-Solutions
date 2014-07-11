//#include<iostream>
//#include<cstdlib>
//#include<stdio.h>
//
//using namespace std;
//
//long long fact(int n)
//{return n ? n*fact(n-1) : 1;}
//
//
//int main()
//{
//	freopen("the-matrix-city.in","r",stdin);
//	long long t,x1,x2,y1,y2,kase=0,xdiff,ydiff;
//	scanf("%lld",&t);
//	while(t--)
//	{
//		scanf("%lld%lld%lld%lld",&x1,&y1,&x2,&y2);
//		 xdiff=x2-x1;
//		 ydiff=y2-y1;
//		printf("Case#%lld: %lld\n",++kase,fact(xdiff+ydiff)/(fact(xdiff)*fact(ydiff)));
//	}
//
//
//return 0;
//}