//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<queue>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) (A.begin(), A.end())
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//
//int oo=1<<28;
//
//int arr[100009];
//int arr2[100009];
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	int n;
//
//	while(cin>>n)
//	{
//		int beg, end;
//		bool valid=1;
//		FOR(i,0,n)
//		{
//			cin>>arr[i];
//			arr2[i] = arr[i];
//		}
////		arr[n]=oo;
//		sort(arr2,arr2+n);
////		arr2[n]=oo;
////		n++;
//		FOR(i,0,n-1)
//		{
//			beg = end = i;;
//			bool enter =0;
//			while(arr[i]>arr[i+1])
//			{
//				i++;
//				enter = 1;
//				end++;
//			}
//			end -= (end==n);
//			if(enter)
//			{
//				reverse(arr+beg,arr+beg+(end-beg+1));
//				//valid =1;
//				//FOR(i,0,n)
//				//{
//				//	valid &= (arr[i]==arr2[i]);	
//				//}
//				break;
//			}
//
//		}
//
//
//		FOR(i,0,n)
//		{
//			valid &= (arr[i]==arr2[i]);	
//		}
//
//		if(valid)
//		{
//			cout << "yes" <<endl;
//			cout << beg+1 << " " <<end+1 <<endl;
//		}
//		else 
//			cout << "no" <<endl;
//	}
//
//	return 0;
//}