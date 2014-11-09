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
//#include<stack>
//#include<math.h>
//
//using namespace std;
//
//
//#define Set(a, s) memset(a, s, sizeof (a))
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
//
//char dir;
//int a[252], r[252], dp[251][251][2];
//vector< int > Ws, Es;
//int t, n;
//
//int solve(int w, int e, int dir, int irritayed)
//
////
////int solve( int wst, int est, int irr, char d, int ti )
////{
////    if( wst == (int)Ws.size() && est ==(int)Es.size() )
////        return irr;
////
////    int &ans = dp[ wst ][est ][ d=='W'];
////
////    if( ans != -1 )
////        return ans;
////	
////    ans = INT_MAX;
////
////    if( wst < (int)Ws.size() )
////    {
////        int newT = (( d == 'W' ) ? max( ti+3, a[ Ws[wst] ] ) : max( ti+t, a[ Ws[wst] ] ));
////        if( d == 'l' )
////            newT = a[ Ws[wst] ];
////        ans = min( ans, solve( wst + 1, est , irr +(newT > a[ Ws[wst] ]+r[ Ws[wst] ]), 'W', newT));
////    }
////
////    if( est < (int)Es.size() )
////    {
////        int newT = (( d == 'E' ) ? max( ti+3, a[ Es[est] ] ) : max( ti+t, a[ Es[est] ] ));
////        if( d == 'l' )
////            newT = a[ Es[est] ];
////        ans = min( ans, solve( wst , est + 1 , irr +(newT > a[ Es[est] ]+r[ Es[est] ]), 'E', newT));
////    }
////
////    return ans;
////}
////
//
//int main()
//{
//    ios_base::sync_with_stdio(0);
//    freopen("input.in", "r" , stdin);
//    while( cin>>t>>n )
//    {
//        Ws.clear();
//        Es.clear();
//      rep( i, 0, n)
//      {
//        cin>>dir>>a[i]>>r[i];
//      if( dir == 'W')
//        Ws.push_back(i);
//      else
//        Es.push_back(i);
//      }
//
//
//      Set( dp, -1);
//      //cout << solve(0, 0, 0, 'l', 0 ) << endl;
//	  cout << solve(0,0,0) << endl;
//    }
//    return 0;
//}
