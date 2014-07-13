//
//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<queue>
//#include<set>
//#include<stack>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define LL long long
//#define mp make_pair
//using namespace std;
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	string s = "abcd";
//	int n;
//
//	while(scanf("%d",&n)==1)
//	{
//		long long  x=0,y=0,sumX=0,sumY=0,sumsqX=0,sumsqY=0;
//
//		long long res = 0;
//			FOR(i,0,n)
//		{
//			scanf("%lld %lld",&x,&y);
//
//			res += i*(x*x) - 2*x*sumX + sumsqX;
//			res += i*(y*y) - 2*y*sumY + sumsqY;
//			sumX += x;
//			sumY += y;
//			sumsqX += x*x;
//			sumsqY += y*y;
//		}
//		cout<<res<<endl;
//	}
//	return 0;
//}