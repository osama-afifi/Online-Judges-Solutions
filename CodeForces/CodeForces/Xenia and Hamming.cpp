//
//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<set>
//#include<queue>
//#include<stack>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define LL long long
//#define mp make_pair
//using namespace std;
//
//LL gcd(LL a , LL b)
//{
//	return (b==0) ? a : gcd(b , a%b);
//}
//LL lcm(LL a , LL b)
//{
//	return (a/gcd(a,b))*b;
//}
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	LL n,m;
//	string a,b;
//	while(cin>>n>>m)
//	{
//		cin>>a>>b;
//		long long l1 = a.length() , l2 = b.length();
//		LL total = l1*n;
//		LL match = lcm(l1,l2);
//		LL repeat = total/match;
//		int GCD = gcd(l1,l2);
//
//		map< pair<char,int> , int >M;
//
//		FOR(i,0,l1)
//			M[mp(a[i] , i%GCD)]++;
//		LL c = 0;
//		FOR(i,0,l2)
//			c += M[mp(b[i] , i%GCD)];
//
//		c *= repeat;
//		c = total -c;
//		cout<< c <<endl;
//	}
//	return 0;
//}