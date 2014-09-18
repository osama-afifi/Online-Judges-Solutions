//#include <iostream>
//#include <iomanip>
//#include <string>
//#include <cstring>
//#include <math.h>
//#include <queue>
//#include <stack>
//#include <map>
//#include <set>
//#include <stdio.h>
//#include <sstream>
//#include <vector>
//
//using namespace std;
//
//#define FOR(i,a,b) for(int i=(a) ; i<b ; i++)
//#define Set(a,v) memset(a,v,sizeof(a))
//#define mp make_pair
//#define pb push_back
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		int kase=0;
//		cin>>kase;
//		double D,A,B,F;
//		cin>>D>>A>>B>>F;
//	//	A/=3600.;
//	//	B/=3600.;
//	//	F/=3600.;
//		double res=0;
//		double l=0,r=D;
//		bool turn=0;
//		while(l+1e-9<r)
//		{
//			double x,t;
//			double newl=0,newr=r-l;
//			
//			if(!turn)
//			{
//				x = (F*newr + B*newl)/(B+F);
//				t = (x-newl)/F;
//				res += x-newl;
//			}
//			else
//			{
//				x = (A*newr + F*newl)/(A+F);
//				t = (newr-x)/F;
//				res += newr-x;
//			}
//
//			r -= t*B;
//			l += t*A;
//
//			turn^=1;
//
//		}
//		cout << kase <<" " << setprecision(2) << fixed << res <<endl;
//
//	}
//
//
//	return 0;
//}