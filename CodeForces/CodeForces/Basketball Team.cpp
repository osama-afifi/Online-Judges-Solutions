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
//#include<stack>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define LL long long
//using namespace std;
//
//string text;
//int t,n;
//int oo =1<<25;
//
//vector< pair<int,int> >V;
//
//#define OPEN 1
//#define CLOSE 0
//
//long double C(int n, int k) 
//{
//	if(k>n)return 0;
//	k=min(k,n-k);
//	long double res = 1;
//	for(int i = n; i>=n-k+1 ; --i) {
//		res *= i;
//		res /= (n - i + 1); 
//	}
//	return res;
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int n,m,h,num;
//	while(cin>>n>>m>>h)
//	{
//
//		long double sum=0;
//		int abolwafa;
//		FOR(i,0,m)
//		{
//			cin>>num;
//			sum+=num;
//			if(i+1==h)
//				abolwafa=num;
//		}
//
//		if(sum<n)
//		{puts("-1.0");continue;}
//
//
//		long double all=C(sum-1,n-1);
//		long double withoutwafa=C(sum-abolwafa,n-1);
//
//		long double res = withoutwafa/all;
//
//		cout<<setprecision(10)<<fixed<<1-res<<endl;
//
//
//	}
//
//
//	return 0;
//}