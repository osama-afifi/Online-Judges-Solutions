//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int const oo = 1<<15;
//
//int arr[5001];
//
//int main()
//{
//
//	freopen("input.in","r",stdin);
//
//
//	int n;
//
//	while(cin>>n)
//	{
//
//		if(!n)break;
//		for(int i=0; i<n; i++)
//			cin>>arr[i];
//
//		sort(arr,arr+n);
//
//		priority_queue<int> Q;
//
//		int sum=0;
//		Q.push(arr[0]+arr[1]);
//		for(int i=2; i<n; i++)
//		{
//		sum+=arr[i]+Q.top();
//		Q.push(sum);
//		}
//		cout<<sum<<endl;
//	}
//
//	return 0;
//}