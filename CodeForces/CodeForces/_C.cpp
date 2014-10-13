//
//
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
//#include<stack>
//#include<math.h>
//
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) A.begin(), A.end()
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//
//LL a,b;
//LL MOD = 1e9+7;
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//
//	while(cin >> a >> b)
//	{
//		LL res=0;
//		FOR(mod,1,b)
//		{
//				res += (((((mod%MOD) * (b%MOD))%MOD) * ((a*(a+1)/2)%MOD))%MOD) + (mod*a)%MOD;
//				res%=MOD;
//		}
//		cout << res%MOD <<endl;
//	}
//	return 0;
//}