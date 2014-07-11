//#include<iostream>
//#include<stdio.h>
//#include<math.h>
//
//using namespace std;
//
//unsigned long long square(unsigned long long  x)
//{return x*x;}
//
//unsigned long long  bigmod(int n , int p , int m)
//{
//	if(!p) return 1;
//	if(p&1) return (n%m)*bigmod(n , p-1 , m)%m;
//	else  return square(bigmod(n , p/2 , m))%m ;
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t,kase=0;
//	cin>>t;
//
//	while(t--)
//	{
//		unsigned long long  n;
//		cin>>n;
//		unsigned long long res=n*bigmod(2,n-1,1000000007)%1000000007;
//		cout<<"Case #"<<++kase<<": "<<res<<endl;;
//
//	}
//
//	return 0;
//}