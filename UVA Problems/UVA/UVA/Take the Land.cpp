//#include <iostream>
//#include <string>
//#include <stdio.h>
//#include <cstring>
//using namespace std;
//
//
//
//int const oo = 1<<15;
//
//int arr[150][150];
//int sum[150];
//
//int main ()
//{
//	freopen ("input.in","r",stdin);
//
//	int n,m,num;
//	string text;
//
//	while(scanf("%d%d",&n,&m)==2)
//	{
//		if(!n && !m)break;
//
//		for(int i= 0 ; i< n ; i++)
//			for(int j= 0 ; j< m ; j++)
//			{
//				scanf("%d",&num);
//				arr[i][j] = (num) ? -oo : 1;
//			}
//
//			int cur=0,maxi=0;
//
//			for(int k= 0 ; k< n ; k++)
//			{
//				memset(sum,0,m*sizeof(int));
//
//				for(int i= k ; i< n ; i++)
//				{
//					for(int j= 0 ; j< m ; j++)
//						sum[j]+=arr[i][j];
//					cur=0;
//					for(int i= 0 ; i< m ; i++)
//					{
//						cur+=sum[i];
//						if(cur<0)cur=0;
//						else if(cur>maxi)
//							maxi=cur;
//					}
//				}
//			}
//
//			if(maxi<0)
//				puts("0");
//			else
//				printf("%d\n",maxi);
//
//
//	}
//
//
//
//
//
//	return 0;
//}
