//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <cstring>
//#include <vector>
//
//using namespace std;
//
//int n,c;
//int arr[100007];
//
//bool possible(int mid)
//{
//	int count=1,prev=0;
//for(int i = 1 ; i<n && count<c ;i++)
//	if(arr[i]-arr[prev]>=mid)
//	{
//		count++;
//		prev=i;
//	}
//return count==c;
//}
//
//int main() 
//{
//	freopen("input.in","r",stdin);
//
//	int t;
//	scanf("%d",&t);
//	while(t--)
//	{
//		scanf("%d%d",&n,&c);
//		for(int i = 0 ; i<n ; i++)
//			scanf("%d",&arr[i]);
//
//		sort(arr,arr+n);
//		int l=0,h=arr[n-1],mid;
//		while(l<=h)
//		{
//			mid=(l+h)>>1;
//			if(possible(mid))
//				l=mid+1;
//			else
//				h=mid-1;
//		}
//		printf("%d\n",l-1);
//	}
//
//
//	return 0;
//}p