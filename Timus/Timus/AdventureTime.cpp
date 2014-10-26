//#include <iostream>
//#include <stdio.h>
//#include <cmath>
//#include <math.h>
//#include <vector>
//#include <sstream>
//#include <map>
//#include <set>
//#include <algorithm>
//#include <string>
//#include <iomanip>
//#include <cstring>
//#include <limits.h>
//#include <queue>
//using namespace std;
//
//
//#define rep(i, x, y) for(int i = x; i < y; i++)
//#define Rep(i, x, y) for(int i = x; i <= y; i++)
//#define vi vector<int>
//#define vvi vector<vector<int> >
//#define vp vector< pair< int, int > >
//#define point pair<double, double >
//#define pp push_back
//#define mp make_pair
//#define eps pow(10.0,-9.0)
//#define MOD 1000000007
//#define oo 1e18
//#define Maxi 250000
//typedef unsigned long long ull;
//typedef long long ll;
//ll nCr( int n, int r )
//{
//	long double anss = 1;
//	if( n-r > r ) 
//		r = n-r;
//	for( int i=r+1, j = 2; i<=n || j<=n-r ; i++, j++ )
//	{
//		if( i<=n )
//			anss *= i;
//		if( j<=n-r )
//			anss /= j;
//	}
//	return anss;
//}
//
//bool compare( int a, int b )
//{
//	return a > b;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	//freopen("input.in", "r" , stdin);
//	int n;
//	string line;
//	while( cin>>line>>n )
//	{
//		map< char, int > M;
//		rep( i, 0, (int) line.size() )
//			M[ line[ i ] ] ++;
//		vector< int > V;
//		map< char, int >::iterator it;
//		for( it = M.begin() ; it != M.end() ; it++ )
//			V.push_back( it->second );
//		sort( V.begin(), V.end(), compare );
//		ll ans = 0;
//		rep( i, 0, min(n, (int)V.size() ) )
//			ans += V[ i ];
//		cout<<ans<<" ";
//		ans = 1;
//		if( (int) V.size() > n )
//		{
//			int count = 0, num = 0;
//			rep( j, n, (int)V.size() )
//				if( V[ j ] == V[ n-1 ] )
//					num++;
//			if( num )
//			{
//				rep( i, 0, n )
//					if( V[ n ] == V[ i ] )
//						count++;
//				ans = nCr( count+num, count );
//			}
//
//		}
//		cout<<ans<<endl;
//	}
//	return 0;
//}