//#include <iostream>
//#include <string>
//#include <stdio.h>
//#include <math.h>
//
//
//using namespace std;
////1000000000
//long temp[500001];
//long input[500001];
//
//long count=0;
//
//void merge(int beg ,int end)
//{
//	int mid =  floor( (double)(beg+end)/2.0);
//	int i1=0,i2=beg,i3=mid+1;
//
//	while(i2<=mid && i3<=end)
//		if(input[i2] <= input[i3])
//			temp[i1++]=input[i2++];
//		
//		else
//		{
//			temp[i1++]=input[i3++];
//		count+=mid+1-i2;	
//		}
//
//		while(i2<=mid)
//			temp[i1++]=input[i2++];
//		while(i3<=end)
//			temp[i1++]=input[i3++];
//
//		for(int i=beg; i<=end ; i++)
//			input[i]=temp[i-beg];
//}
//
//void merge_sort(int beg ,int end)
//{
//	if(beg<end)
//	{
//		int mid =  floor( (double)(beg+end)/2.0);
//		merge_sort(beg ,mid);
//		merge_sort(mid+1,end);
//		merge(beg,end);
//	}
//}
//
//
//int main()
//{
//	string output[]={"Carlos","Marcelo"};
//	freopen("input.in","r",stdin);
//	long long n;
//	while(scanf("%lld",&n)==1)
//	{
//		if(!n)break;
//		count=0;
//		for(int i = 0 ; i<n ; i++)
//			scanf("%lld",&input[i]);
//		merge_sort(0,n-1);
//		cout<<output[count%2]<<endl;
//	}
//
//
//
//	return 0;
//}