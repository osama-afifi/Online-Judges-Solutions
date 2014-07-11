//// Meet in the Middle
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
//#define mp make_pair 
//using namespace std;
//typedef long long LL;
//LL n,A,B;
//
//void getSubsets(int i , LL sum , vector<LL> &out , vector<int> &in)
//{
//	if(i==in.size())
//	{
//		out.push_back(sum);
//		return;
//	}
//	getSubsets(i+1,sum+(LL)in[i] , out,in);
//	getSubsets(i+1,sum , out,in);
//}
//
//
//int bs_u(int b , int e , LL v , vector<LL>&arr)
//{
//	int ret = e;
//	while(b<=e)
//	{
//		int mid = (b+e)/2;
//		if(arr[mid]+v<=B)
//			ret = mid , b = mid+1;
//		else e = mid-1;
//	}
//	return ret;
//}
//
//int bs_l(int b , int e , LL v , vector<LL>&arr)
//{
//		int ret = 0;
//	while(b<=e)
//	{
//		int mid = (b+e)/2;
//		if(arr[mid]+v>=A)
//			ret = mid , e = mid-1;
//		else b = mid+1;
//	}
//	return ret;
//}
//int main()
//{
//	freopen("input.in","r",stdin);
//	while(scanf("%lld" , &n)==1)
//	{
//		
//		scanf("%lld %lld" , &A , &B);
//		vector<int>V1,V2;
//		FOR(i,0,n)
//		{
//			int num;
//			scanf("%d" , &num);
//			if(i<n/2)
//				V1.push_back(num);
//			else V2.push_back(num);
//		}
//		vector<LL>X1;
//		vector<LL>X2;
//		getSubsets(0,0,X1,V1);
//		getSubsets(0,0,X2,V2);
//	//	X2.erase(X2.begin());
//		sort(X1.begin() , X1.end());
//		sort(X2.begin() , X2.end());
//		LL res = 0;
//		FOR(i,0,X1.size())
//		{
//			//LL b = bs_l(0,X2.size()-1 , X1[i], X2);
//			//LL e = bs_u(0,X2.size()-1 , X1[i], X2);
//			
//			res += (LL)(upper_bound(X2.begin(), X2.end() , B-X1[i]) - lower_bound(X2.begin(), X2.end() , A-X1[i])) ;
//		}
//		printf("%lld\n" , res);
//	}
//
//
//	return 0;
//}
