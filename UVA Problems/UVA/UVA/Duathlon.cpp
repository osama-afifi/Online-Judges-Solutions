//#include <iostream>
//#include <stdio.h>
//#include <algorithm>
//#include <iomanip>
//#include <string>
//#include <cstring>
//#include <vector>
//#include <map>
//#include <math.h>
//#include <queue>
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair
//#define pb push_back
//#define all(V) V.begin(),V.end()
//#define MAX 1000009
//#define eps 1e-9
//typedef long long LL;
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//using namespace std;
//
//double t;
//int n;
//double R[25];
//double C[25];
//double resphi = 2.0 - ((1 + sqrt(5)) / 2.0);
//
//
//double f(double r)
//{
//	double k=t-r;
//	double cheat = r/R[n-1]+k/C[n-1];
//	double mini=1e100;
//
//	FOR(i,0,n-1)
//	{
//		double time = r/R[i]+k/C[i];
//		mini = min(time,mini);
//	}
//	return mini-cheat;
//}
//double golden()
//{
//	double b=0,e=t;
//	FOR(i,0,500)
//	{
//		double p1 = b + (e-b)*resphi;
//		double p2 = e - (e-b)*resphi;
//		if(f(p1)<f(p2))
//			b=p1;
//		else
//			e=p2;
//	}
//
//	return (b+e)/2.;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	while(cin>>t)
//	{
//
//		cin>>n;
//		FOR(i,0,n)
//			cin>>R[i]>>C[i];	
//		/*FOR(i,0,100)
//		cout<<i<<" " <<f(i)<<endl;
//		*/
//		double res = golden();
//		if (f(res) < 0.0) {
//			printf("The cheater cannot win.\n");
//		} else {
//			printf("The cheater can win by %.0lf seconds with r = %.2lfkm and k = %.2lfkm.\n",  f(res) * 60*60, res, t - res);
//		}
//
//
//
//	}
//
//	return 0;
//}
