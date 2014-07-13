//#include <iostream>
//#include <stdio.h>
//
//using namespace std;
//
//long long gcd(int a, int b)
//{return !b ? a : gcd(b,a%b);}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int a,b,x,y,aa,bb,xx,yy;
//
//	cin>>a>>b>>x>>y;
//	int g=gcd(x,y);
//	x/=g;
//	y/=g;
//	aa=a/x;
//	bb=b/y;
//
//	if(a>x && b>y)
//		cout<<x*min(aa,bb)<<" "<<y*min(aa,bb)<<endl;
//	else
//		puts("0 0");
//
//
//
//	return 0;
//}