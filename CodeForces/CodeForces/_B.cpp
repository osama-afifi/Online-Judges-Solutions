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
//	LL n,x,y;
//
//LL f(LL i)
//{
//	LL j = max(((6L*n)+i-1)/i,y);
//	return i*j;
//}
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//
//
//	while(cin>>n>>x>>y)
//	{
//	
//		LL b=x,e=6*n;
//
//		while(b+100<=e)
//		{
//			LL s1 = b + (e-b)/3;
//			LL s2 = e - (e-b)/3;
//			
//			if(f(s1)>f(s2))
//				b = s1;
//			else
//				e = s2;
//		}
//
//		LL mini = 1e18;
//		LL indi = 1;
//		for(LL i = b  ; i<=e; i++)
//			if(f(i)<mini)
//				mini = f(i) , indi = i;
//			
//		cout << mini <<endl;
//		LL j = max(((6L*n)+indi-1)/indi,y);
//		cout << indi << " "  << j <<endl;
//
//	
//	}
//	return 0;
//}