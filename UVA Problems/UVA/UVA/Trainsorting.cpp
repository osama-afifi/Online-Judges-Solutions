//#include <iostream>
//#include <stdio.h>
//#include <cstring>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
////int arr[2005];
//vector < int > arr;
//int lis[2005];
//int lds[2005];
//
//
//void LIS(int n)
//{
//	memset(lis, 0, sizeof(lis));
//	for(int i = 0 ; i<n ; i++)
//	{
//		int maxi=0;
//		for(int j = 0 ; j<i ; j++)
//			if(arr[j]>arr[i] && lis[j]>maxi)
//				maxi=lis[j];
//		lis[i]=maxi+1;
//	}
//
//}
//void LDS(int n)
//{
//	memset(lds, 0, sizeof(lds));
//	for(int i = 0 ; i<n ; i++)
//	{
//		int maxi=0;
//		for(int j = 0 ; j<i ; j++)
//			if(arr[j]<arr[i] && lds[j]>maxi)
//				maxi=lds[j];
//		lds[i]=maxi+1;
//	}
//
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int num,n,t;
//	scanf("%d",&t);
//
//	while(t--)
//	{
//		scanf("%d",&n);
//		arr.clear();
//		for(int i=0;i<n;i++)
//		{
//			scanf("%d",&num);
//			arr.push_back(num);
//		}
//		reverse(arr.begin(),arr.end());
//		LIS(n);
//		LDS(n);
//		int maxi=0;
//
//		for(int i=0; i<n ; i++)
//		if(lis[i]+lds[i]-1>maxi)
//			maxi=lis[i]+lds[i]-1;
//		
//		printf("%d\n", maxi);
//
//
//	}
//
//	return 0;
//}