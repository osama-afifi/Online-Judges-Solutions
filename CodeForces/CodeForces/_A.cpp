//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<queue>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) (A.begin(), A.end())
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//int oo=1<<25;
//
//int gcd(int a , int b)
//{
//	if(b==0)
//		return a;
//	return gcd(b, a%b);	
//}
//
//int base(int n , int b)
//{
//	int sum = 0;
//	while(n>0)
//	{
//		sum+= n%b;
//		n/=b;
//	}
//	return sum;
//}
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	int n;
//	while(cin>>n)
//	{
//		LL res = 0;
//		FOR(i,2,n)
//			res += base(n,i);
//		int g = gcd(n-2,res);
//		cout<< res/g  << "/" <<  (n-2)/g <<endl;
//	}
//	return 0;
//}