//
//
//#include <iostream>
//#include <cstring>
//#include <cstdlib>
//#include <stdio.h>
//#include <math.h>
//#include <cmath>
//#include <algorithm>
//
//using namespace std;
//
//int arr[1000007];
//
//int Extended_Euclid(int A, int B, int *X, int *Y)
//{
//    int x, y, u, v, m, n, a, b, q, r;
// 
//    /* B = A(0) + B(1) */
//    x = 0; y = 1;
// 
//    /* A = A(1) + B(0) */
//    u = 1; v = 0;
// 
//    for (a = A, b = B; 0 != a; b = a, a = r, x = u, y = v, u = m, v = n)
//    {
//        /* b = aq + r and 0 <= r < a */
//        q = b / a;
//        r = b % a;
// 
//        /* r = Ax + By - aq = Ax + By - (Au + Bv)q = A(x - uq) + B(y - vq) */
//        m = x - (u * q);
//        n = y - (v * q); 
//    }   
// 
//    /* Ax + By = gcd(A, B) */
//    *X = x; *Y = y;
// 
//    return b;
//}
//
//int gcd(int a, int b)
//{
//if(b==0)return a;
//else return gcd(b,a%b);
//}
//int z;
//void divc(int n)
//{
//	for(int i = 1 ; i<=n ; i++)
//		for(int j = i ; j<=n ; j+=i)
//			arr[j]++;	
//}
//
//
////int d[10001][10001];
//
//
//int main ()
//{ 
//	freopen("input.in","r",stdin);
//	int z=gcd(1000000,1000000);
//	memset(arr,0 , sizeof arr);
//
//	divc(z);
//	int t;
//
//	cin>>t;
//	
//int a,b,x,y;	
//	while(t--)
//	{
//		int g;
//		scanf("%d%d",&a,&b);
//		if(a<b)
//			swap(a,b);
//		
//		g = Extended_Euclid(a, b, &x, &y);
//		printf("%d\n",arr[g]);
//	
//	}
//
//	return 0;
//}
