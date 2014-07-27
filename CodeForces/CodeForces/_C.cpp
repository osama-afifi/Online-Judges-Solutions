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
//
//int oo=1<<28;
//
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	LL t,n,k,d1,d2;
//	cin>>t;
//
//	while(t--)
//	{
//		cin>>n>>k>>d1>>d2;
//		
//		bool yes = 0;
//
//		// case 1
//		LL d3 = d1+d2;
//		LL maxi = d1+d2;
//		LL q = d1+d1+d2;
//		if (q<=k && q<=(n-k) && (n-k-q)%3==0)
//			yes = 1;
//
//		// case 2
//		d3 = d1-d2;
//		maxi = abs(d1-d2);
//		q = max(d1,d2)+abs(d1-d2);
//		if (maxi<=k && q<=(n-k) && (n-k-q)%3==0)
//			yes = 1;
//
//		// case 3
//		d3 = d1-d2;
//		maxi = d1+abs(d1-d2);
//		q = d1+d2;
//		if (maxi<=k && q<=(n-k) && (n-k-q)%3==0)
//			yes = 1;
//
//		// case 4
//		d3 = d1+d2;
//		maxi = d1+d2;
//		q = d1+d2+d2;
//		if (maxi<=k && q<=(n-k) && (n-k-q)%3==0)
//			yes = 1;
//
//		if(yes)
//			cout<< "yes" <<endl;
//		else
//			cout<< "no" <<endl;
//	}
//
//
//	return 0;
//}