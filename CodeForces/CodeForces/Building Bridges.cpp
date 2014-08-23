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
//#define eps 1e-9
//typedef long long LL;
//using namespace std;
//
//const LL oo = 1LL<<25;
//
//int A[100009];
//int B[100009];
//int I[100009];
//int AA,BB;
//
//__inline double euc(double x1,double y1,double x2,double y2)
//{
//	return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
//}
//int n,m;
//
//double f(int right, int left)
//{
//	return euc(0,0,AA,A[left])+euc(AA,A[left],BB,B[right])+I[right];
//}
//
//int ternary(int x)
//{
//	int b=0,e=n-1;
//	int ret=b;
//	while(b+3<e)
//	{
//		int p1= b+(e-b)/3;
//		int p2= e-(e-b)/3;
//		if(f(x,p1)>f(x,p2))
//			b=p1;
//		else e=p2;
//	}
//	ret=b;
//	FOR(i,b,e+1)
//		if(f(x,ret)>f(x,i))
//			ret=i;
//	return ret;
//}
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	while(cin>>n>>m)
//	{
//		cin>>AA>>BB;
//
//		FOR(i,0,n)
//			cin>>A[i];
//
//		FOR(i,0,m)
//			cin>>B[i];
//
//		FOR(i,0,m)
//			cin>>I[i];
//
//		double mini =1e100;
//		pair<int,int>res;
//	/*	FOR(i,0,m)
//
//			FOR(j,0,n)
//		{
//			double d1=euc(0,0,AA,A[j]);
//			double d2=euc(AA,A[j],BB,B[i]);
//			double d=d1+d2+I[i];
//			if(d<mini)
//				mini=d, res=mp(j,i);
//		}
//*/
//		FOR(i,0,m)
//		{
//
//			int idx = ternary(i);
//			double d1=euc(0,0,AA,A[idx]);
//			double d2=euc(AA,A[idx],BB,B[i]);
//			double d=d1+d2+I[i];
//			if(d<mini)
//				mini=d, res=mp(idx,i);
//		}
//
//		cout << res.first+1 << " " <<res.second+1 <<endl; 
//
//	}
//
//	return 0;
//}