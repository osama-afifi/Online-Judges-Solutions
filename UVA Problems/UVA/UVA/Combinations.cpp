//#include <iostream>
//#include <cstring>
//#include <stdio.h>
//#include <string>
//#include <math.h>
//#include <cmath>
//
//using namespace std;
//int N,M,X;
//int arr[101];
//int gcd(int x, int y)
//{
//	return !(x%y) ? y : gcd(y,x%y);
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	while(scanf("%d%d",&N,&M) != EOF)
//	{
//		if(N==0 && M==0)break;
//
//		if(N==M)
//		{
//			printf("%d things taken %d at a time is 1 exactly.\n",N,M);
//			continue;
//		}
//
//		X=M;
//
//		if(M>N/2)
//		{
//			X = N - M;
//		}
//
//		long res=1;
//
//		for(int i = 0 ; i < X ; i++)
//		{
//			res*=(N-i);
//			res/=(i+1);
//		}
//
//		printf("%d things taken %d at a time is %d exactly.\n",N,M,res);
//	}
//
//
//	return 0;
//}