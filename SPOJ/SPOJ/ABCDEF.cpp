//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <queue>
//
//using namespace std;
//
//int arr[109];
//int V1[100*100*100+5];
//int V2[100*100*100+5];
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int n,v1,v2;
//	while(cin>>n)
//	{
//		for(int i = 0 ; i < n ; i++)
//			cin>>arr[i];
//		v1=0,v2=0;
//		for(int i = 0 ; i < n ; i++)
//				for(int j = 0 ; j < n ; j++)
//					for(int k = 0 ; k < n ; k++)
//						V1[v1++]=arr[i]*arr[j]+arr[k];
//		for(int i = 0 ; i < n ; i++)
//			if(arr[i])
//				for(int j = 0 ; j < n ; j++)
//					for(int k = 0 ; k < n ; k++)
//						V2[v2++]=arr[i]*(arr[j]+arr[k]);
//
//		long long res=0;
//
//		sort(V1,V1+v1);
//		sort(V2,V2+v2);
//		vector<int>::iterator it;
//		int c1=0,c2=0;
//		int b,e,mid;
//		for(int i = 0 ;i<v1 ; i++)
//		{
//			b=0,e=v2-1,mid=0;
//			while(b<=e)
//			{
//				mid=(b+e)/2;
//				if(V1[i]==V2[mid])
//				{
//					c1=0,c2=0;
//					while(i+c1<v1 && V1[i+c1]==V2[mid])
//						c1++;
//					while(mid && V2[mid]==V2[mid-1])
//					mid--;
//					while(mid+c2<v2 && V1[i]==V2[mid + c2])
//						c2++;
//						
//
//					i+=c1;
//					//++c2;
//					res+=c1*c2;
//					//res++;
//					i--;
//					break;
//				}
//				else if(V1[i]>V2[mid])
//					b=mid+1;
//				else
//					e=mid-1;
//			}
//
//		}
//
//
//		cout<<res<<endl;
//	}
//
//
//
//	return 0;
//}
