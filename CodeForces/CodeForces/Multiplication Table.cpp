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
//LL n,m,k;
//LL target;
//
//LL f(LL q)
//{
//	LL c =0;
//	FOR(i,1,n+1)
//		c += min(m,(q-1)/i);
//	return c;
//}
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	while(cin>>n>>m>>k)
//	{
//		target = m*n-k;
//		LL b=1, e=n*m, res = -1;
//		while(b<=e)
//		{
//			LL mid = (b+e)/2;
//			if(f(mid)<k)
//				b = mid+1, res = mid;
//			else e = mid-1;
//		}
//		cout << res <<endl;
//	}
//	
//
//
//	return 0;
//}