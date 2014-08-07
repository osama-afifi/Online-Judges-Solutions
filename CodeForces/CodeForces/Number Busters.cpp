//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<sstream>
//#include<queue>
//#include<set>
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) A.begin(), A.end()
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//
//LL a,b,w,x,c;
//__inline bool f(LL k)
//{
//	return ( c-k <= a+((b-k*x)-w+1)/w );
//}
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//	while(cin>>a>>b>>w>>x>>c)
//	{
//		LL b=0,e=1e17,res=-1;		
//		while(b<=e)
//		{
//			LL mid = (b+e)/2;
//			if(f(mid))
//				e=mid-1,res=mid;
//			else b = mid+1;
//		}
//		cout << res << endl;
//	}
//
//	return 0;
//}