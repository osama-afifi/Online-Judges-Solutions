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
//typedef long long LL;
//using namespace std;
//
//LL arr1[100009];
//LL arr2[100009];
//
//int n,m;
//
//LL f(LL v)
//{
//	LL sum=0;
//	FOR(i,0,m)
//		if(arr2[i]>v)
//			sum+= abs(arr2[i]-v);
//
//	FOR(i,0,n)
//		if(arr1[i]<v)
//			sum+= abs(arr1[i]-v);
//	return sum;
//}
//
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	
//	while(cin>>n>>m)
//	{
//		FOR(i,0,n)
//			cin>>arr1[i];
//		FOR(i,0,m)
//			cin>>arr2[i];
//		// ternary search
//		LL b=0,e=1e9+1;
//
//		while(b<e)
//		{
//			LL p1 = (b*2+e)/3;
//			LL p2 = (b+2*e)/3;
//			if(f(p1)>f(p2))
//				b=p1+(b==p1);
//			else
//				e=p2-(e==p2);
//		}
//		cout << f(b) <<"\n";
//	}
//	return 0;
//}