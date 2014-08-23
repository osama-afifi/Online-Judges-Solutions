//
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
//
//using namespace std;
//
//int n;
//double X[109];
//double Y[109];
//double V[109];
//
//double resphi = 2.0 - ((1 + sqrt(5)) / 2.0);
//
//double f(double x, double y)
//{
//	double maxi=0;
//	FOR(k,0,n)
//		maxi = max(maxi, (double)sqrt((X[k]-x)*(X[k]-x)+(Y[k]-y)*(Y[k]-y))/(double)V[k]);
//	return maxi;
//}
//
//double golden(double mid)
//{
//	double b2=-1000000,e2=1000000;
//	double mini =1e9;
//	double p1,p2;
//	FOR(z,0,75)
//	{
//
//		p1 = b2+(e2-b2)*resphi;
//		p2 = e2-(e2-b2)*resphi;
//		if(f(mid,p1)>f(mid,p2))
//			b2=p1;
//		else e2=p2;
//	}
//	return f(mid,(p1+p2)/2.0);
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		cin>>n;
//		FOR(i,0,n)
//			cin>>X[i]>>Y[i]>>V[i];
//		double b1=-1000000,e1=1000000;
//		double mid;
//		long double mini = 1e18;
//		double p1,p2;
//
//		
//		FOR(z,0,70)
//		{
//			//p1 = b1+(e1-b1)/3.0;
//			//p2 = e1-(e1-b1)/3.0;
//			p1 = b1+(e1-b1)*resphi;
//			p2 = e1-(e1-b1)*resphi;
//			
//			if(golden(p1)>golden(p2))
//				b1=p1;
//			else e1=p2;
//		}
//		cout << setprecision(6) << fixed << golden((p1+p2)/2.0) << endl;
//	}
//
//	return 0;
//}
