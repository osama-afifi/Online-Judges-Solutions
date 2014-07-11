//#include <iostream>
//#include <math.h>
//#include <stdio.h>
//
//using namespace std;
//
//long long  input[10000007];
//long long  temp[10000007];
//
//long long counter=0;
//void merge(int beg , int end)
//{
//	long long  mid =  floor((double)(beg+end)/2.0);
//	
//
//	long long  il=beg,ir=mid+1,i3=0;
//
//	while(il<=mid && ir <=end)
//	{
//		if(input[il]<=input[ir])
//			temp[i3++]=input[il++];
//		else
//		{
//			temp[i3++]=input[ir++];
//			counter+=mid+1-il;
//		}
//	}
//
//	while(il<=mid)
//		temp[i3++]=input[il++];
//
//	while(ir<=end)
//		temp[i3++]=input[ir++];
//
//	for(long long  i = beg ; i<=end ; i++)
//		input[i]=temp[i-beg];
//
//}
//
//
//void merge_sort(int beg , int end)
//{
//	if(end>beg)
//	{
//		long long  mid =  floor( (double)(beg+end)/2.0);
//		merge_sort(beg,mid);
//		merge_sort(mid+1,end);
//		merge(beg,end);
//	}
//
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	long long n;
//	while(scanf("%lld",&n)==1)
//	{
//		counter=0;
//		for(long long  i = 0 ; i < n ; i++){
//			scanf("%d",&input[i]);	
//		}
//
//		merge_sort(0,n-1);
//
//		printf("%lld\n",counter);
//	}
//
//
//	return 0;
//}