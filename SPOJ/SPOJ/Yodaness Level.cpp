////// AC
////// Method : merge sort
//////
////#include <iostream>
////#include <algorithm>
////#include <stdio.h>
////#include <cstring>
////#include <string>
////#include <sstream>
////#include <vector>
////#include <map>
////#include <set>
////#include <queue>
////
////using namespace std;
////#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
////#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
////#define Set(a, s) memset(a, s, sizeof (a))
////using namespace std;
////
////map<string,int>M;
////int n;
////int arr[30009];
////int temp[30009];
////long long res=0;
////
////void merge(int b ,int e)
////{
////	int mid = (b+e)/2;
////	int i1=0,i2=b,i3=mid+1;
////
////	while(i2<=mid && i3<=e)
////	{
////		if(arr[i2] <= arr[i3])
////			temp[i1++]=arr[i2++];		
////		else
////		{
////			temp[i1++]=arr[i3++];
////			res += mid-i2+1;	
////		}
////	}
////		while(i2<=mid)
////			temp[i1++]=arr[i2++];
////		while(i3<=e)
////			temp[i1++]=arr[i3++];
////
////		for(int i=b; i<=e ; i++)
////			arr[i]=temp[i-b];
////}
////
////void merge_sort(int b ,int e)
////{
////	if(b>=e)return;
////	int mid = (b+e)/2;
////	merge_sort(b,mid);
////	merge_sort(mid+1,e);
////	merge(b,e);
////}
////int main()
////{
////	freopen("input.in","r",stdin);
////	int t;
////
////	scanf("%d",&t);
////	while(t--)
////	{
////		res=0;
////		M.clear();
////		scanf("%d",&n);
////		char c[25];
////		FOR(i,0,n)
////		{
////		scanf("%s",&c);
////		M[c]=i;
////		}
////		FOR(i,0,n)
////		{
////		scanf("%s",&c);
////		arr[i]=M[c];
////		}
////		merge_sort(0,n-1);
////		printf("%lld\n",res);
////	}
////	return 0;
////}
////
//
////////////////////////////////////////////////////
//
//
//// Method : BIT
//
//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <set>
//#include <queue>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//using namespace std;
//
//map<string,int>M;
//int n;
//int arr[30009];
//
//int T[30009];
//void upd(int i ,int v)
//{
//	if(i==0)return;
//	while(i<=30000)
//	{
//		T[i]+=v;
//		i+= (i&-i);
//	}
//}
//int cum(int i)
//{
//	int sum = 0;
//	while(i>0)
//	{
//		sum+=T[i];
//		i-=(i&-i);
//	}
//	return sum;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t;
//
//	scanf("%d",&t);
//	while(t--)
//	{
//		Set(T,0);
//		M.clear();
//		scanf("%d",&n);
//		char c[34];
//		FOR(i,0,n)
//		{
//			scanf("%s",&c);
//			M[c]=i+1;
//		}
//		long long sum = 0;
//		FOR(i,0,n)
//		{
//			scanf("%s",&c);
//			int idx = M[c];
//			sum += i-cum(idx-1);	
//			upd(idx,1);
//		}
//		printf("%lld\n",sum);
//	}
//	return 0;
//}
//
