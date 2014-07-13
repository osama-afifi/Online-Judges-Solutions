//
//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<queue>
//#include<stack>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//using namespace std;
//
//string text;
//int t,n;
//int oo =1<<25;
//
//vector< pair<int,int> >V;
//
//#define OPEN 1
//#define CLOSE 0
//
//int N,K;
//
//int arr[5][5];
//int main()
//{
//	freopen("input.in","r",stdin);
//
//
//	while(scanf("%d%d%d",&arr[0][0],&arr[0][1],&arr[0][2])==3)
//	{
//		long long sum=0;
//		for(int i = 1 ; i<3 ; i++)
//			for(int j = 0 ; j<3 ; j++)
//			{
//				scanf("%d",&arr[i][j]);
//				
//			}
//			for(int i = 0 ; i<3 ; i++)
//				for(int j = 0 ; j<3 ; j++)
//					sum+=arr[i][j];
//			sum/=2;
//			arr[0][0]=sum-arr[0][1]-arr[0][2];
//			arr[1][1]=sum-arr[1][0]-arr[1][2];
//			arr[2][2]=sum-arr[2][0]-arr[2][1];
//			for(int i = 0 ; i<3 ; i++)
//			{
//				for(int j = 0 ; j<3 ; j++)
//				{
//					if(j)
//						printf(" %d",arr[i][j]);
//					else
//					printf("%d",arr[i][j]);
//				}
//					putchar('\n');
//			}
//			//	printf("%d\n",sum/2);
//	}
//
//
//
//	return 0;
//}