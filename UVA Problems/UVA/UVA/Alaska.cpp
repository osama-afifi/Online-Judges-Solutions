//#include<iostream>
//#include<stdio.h>
//#include<algorithm>
//
//using namespace std;
//
//int arr[1500];
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int n;
//
//	while(cin>>n)
//	{
//	if(!n)break;
//	for(int i =0 ; i<n ; i++ )
//		cin>>arr[i];
//	sort(arr,arr+n);
//	bool invalid=false;
//	for(int i =1 ; i<n ; i++ )
//	{
//		if(arr[i]-arr[i-1]>200)
//			invalid=true;
//		if(invalid)break;
//	}
//	if(2*(1422-arr[n-1])>200)
//		invalid=1;
//
//	if(invalid)
//		puts("IMPOSSIBLE");
//	else
//		puts("POSSIBLE");
//	}
//	
//return 0;
//}