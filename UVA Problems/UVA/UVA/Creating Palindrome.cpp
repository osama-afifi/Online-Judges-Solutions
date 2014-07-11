//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <stdio.h>
//#include <string>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//
//int n,k;
//
//int arr[10009];
//
//
//int f(int i , int j , int c)
//{
//	if(c>k)return c;
//	if(i>j)
//			return 0;
//		if(arr[i] == arr[j])
//			return f(i+1 , j-1,c);
//		else
//			return min(f(i,j-1,c+1) , f(i+1,j,c+1))+1;		
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int t;
//	int kase = 0;
//	scanf("%d",&t);
//	while(t--)
//	{
//		scanf("%d %d",&n,&k);
//		printf("Case %d: " , ++kase);
//		bool palin = 1;
//		FOR(i,0,n)
//			scanf("%d", &arr[i]);
//
//		FOR(i,0,n)
//			if(arr[i]!=arr[n-1-i])
//				palin = 0;
//
//			if(palin)
//		{
//			puts("Too easy");
//			continue;
//		}
//
//		int res = f(0,n-1,0);
//		if(res>k)
//		{
//			puts("Too difficult");
//			continue;
//		}
//		else
//			printf("%d\n" , res);		
//	}
//
//	return 0;
//}