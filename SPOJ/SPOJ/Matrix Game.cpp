//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <math.h>
//#include <map>
//#include <set>
//#include <queue>
//#include <cstdio>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair 
//typedef long long LL;
//using namespace std;
//
//
//int t;
//
//int arr[55][55];
//int z[55];
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	cin>>t;
//	while(t--)
//	{
//		int n,m;
//		cin>>n>>m;
//
//		FOR(i,0,n)
//			FOR(j,0,m)
//			cin>>arr[i][j];
//
//		int g=0;
//		FOR(i,0,n)
//		{
//			g=0;
//			for(int j=m ; j-- ; )
//				g = arr[i][j] - (arr[i][j]<=g);
//			z[i]=g;
//		}
//
//		int c=0;
//		FOR(i,0,n)
//			c^=z[i];
//		if(c) 
//			cout<<"FIRST\n";
//		else  
//			cout<<"SECOND\n";
//	}
//
//	return 0;
//}