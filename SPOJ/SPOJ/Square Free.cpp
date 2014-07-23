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
//int arr[100007];
//
//int sq[1000];
//int m=0;
//
//int d[100000][10];
//int co[10];
//int main ()
//{ 
//	freopen("input.in","r",stdin);
//	int t;
//	memset(arr,0,sizeof arr);
//	memset(d,0,sizeof d);
//	memset(co,0,sizeof co);
//	scanf("%d",&t);
//	int m=0;
//	for(int i = 2 ; i*i<=100000 ; i++)
//		sq[m++]=i*i;
//
//
//	
//	for(int j = 1 ; j<=100000 ; j++)
//	{
//
//		bool s=false;
//		for(int i = 0 ; i<m ; i++)
//			if(j%sq[i]==0)
//			{
//				s=true;
//				break;
//			}
//
//							for(int i = 0 ; i <10 ; i++)
//					d[j][i]=d[j-1][i];
//
//			if(!s)
//			{
//				int z=j;
//				while(z>0)
//				{
//					d[j][z%10]=d[j-1][z%10]+1;
//					z/=10;
//				}
//
//			}
//		
//	}
//
//	while(t--)
//	{
//		int a,b,d;
//		scanf("%d%d%d",&a,&b,&d);
//		int sum=0;
//		if(a>b)
//			swap(a,b);
//
//
//		printf("%d\n",/*arr[b]-arr[a]*/+d[b][d]-d[a-1][d]);
//	}
//
//	return 0;
//}
