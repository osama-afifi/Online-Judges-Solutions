//#include <iostream>
//#include <cstring>
//#include <string>
//#include <math.h>
//#include <stdio.h>
//#include <iomanip>
//#include <vector>
//#include <set>
//#include <map>
//#include <stack>
//#include <queue>
//
//using namespace std;
//
//#define FOR(i,a,b) for(int i=a ; i<b ; i++)
//#define Set(a,v) memset(a,v,sizeof(a))
//#define mp make_pair
//
//double X[30];
//double Y[30];
//int n;
//double R;
//
//int f(double x, double y)
//{
//	int c=0;
//	FOR(i,0,n)
//			if(((X[i]-x)*(X[i]-x) + (Y[i]-y)*(Y[i]-y)) <= R*R)		
//				++c;
//	return c;
//}
//
//int ternary(double y)
//{
//			double l=-1000000.0;
//			double r=1000000.0;
//		FOR(i,0,200)
//		{
//			double p1 = l+(r-l)/3.0;
//			double p2 = r-(r-l)/3.0;
//			if(f(p1,y)<f(p2,y))
//				l =p1;
//			else 
//				r = p2;
//		}
//	return f((l+r)/2.0,y);
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		cin>>R>>n;
//		FOR(i,0,n)
//			cin>>X[i]>>Y[i];
//
//			double l=-1000000.0;
//			double r=1000000.0;
//		FOR(i,0,200)
//		{
//			double p1 = l+(r-l)/3.0;
//			double p2 = r-(r-l)/3.0;
//			if(ternary(p1)<ternary(p2))
//				l = p1;
//			else 
//				r = p2;
//		}
//		double y = (l+r)/2.0;
//		int res = ternary(y);
//		cout << res <<endl;
//	}
//
//return 0;
//}