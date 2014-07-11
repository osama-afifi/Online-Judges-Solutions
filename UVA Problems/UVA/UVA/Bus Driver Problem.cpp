//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//int arr1[107];
//int arr2[107];
//int main()
//{
//	freopen("input.in","r",stdin);
//	int n,d,r;
//	while(cin>>n>>d>>r)
//	{
//		if(!n && !d && !r)break;
//		for(int i = 0 ;i<n ;i++)
//			cin>>arr1[i];
//		for(int i = 0 ;i<n ;i++)
//			cin>>arr2[i];
//		sort(arr1,arr1+n);
//		sort(arr2,arr2+n);
//		int sum=0;
//		for(int i = 0 ;i<n ;i++)
//		{
//			if(d<arr1[i]+arr2[n-1-i])
//			sum+=(arr1[i]+arr2[n-1-i]-d)*r;
//
//		}
//		cout<<sum<<endl;
//	}
//
//	return 0;
//}