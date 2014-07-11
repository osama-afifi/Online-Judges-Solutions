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
//	int t,n;
//	string text;
//	scanf("%d",&t);
//	cin.ignore();
//	while(t--)
//	{
//cin.ignore();
//		getline(cin,text);
//		n=text.length();
//		for(int j= 0 ; j< n ;j++)
//			arr[0][j] = (text[j]=='1') ? 1 : -oo;
//
//
//
//
//		for(int i= 1 ; i< n ; i++)
//		{
//			getline(cin,text);
//			for(int j= 0 ; j< n ;j++)
//				arr[i][j] = (text[j]=='1') ? 1 : -oo;
//		}
//
//		int maxi=0;
//		int cur=0;
//
//		for(int k= 0 ; k< n ; k++)
//		{
//			memset(sum,0,n*sizeof(int));
//
//			for(int i= k ; i< n ; i++)
//			{
//				for(int j= 0 ; j< n ; j++)
//					sum[j]+=arr[i][j];
//				cur=0;
//				for(int i= 0 ; i< n ; i++)
//				{
//					cur+=sum[i];
//					if(cur<0)cur=0;
//					else if(cur>maxi)
//						maxi=cur;
//				}
//			}
//		}
//
//		if(maxi<0)
//			puts("0");
//		else
//			printf("%d\n",maxi);
//		if(t)putchar('\n');
//
//	}
//
//
//
//
//
//	return 0;
//}
