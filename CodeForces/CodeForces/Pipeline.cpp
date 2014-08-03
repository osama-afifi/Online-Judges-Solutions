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
//#define ALL(A) A.begin(), A.end()
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//int oo=1<<25;
//
//__inline LL cum(LL c)
//{
//	return (c*(c+1))/2;
//}
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	LL n,k;
//	while(cin>>n>>k)
//	{
//		LL sum = 1;
//		int c=0;
//		LL b = 1 , e  =k, res=-1;
//		while(b<=e)
//		{
//			LL mid = (b+e)/2;
//			if(cum(k)-cum(mid)-(k-mid-1)<n)
//				e = mid-1;
//			else b = mid+1, res = mid;
//		
//		}
//		if(res>0)
//			cout << k-res << endl;
//		else cout << -1 <<endl;
//	}
//
//	return 0;
//}