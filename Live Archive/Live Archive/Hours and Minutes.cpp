//
//#include <vector>
//#include <list>
//#include <map>
//#include <set>
//#include <cstring>
//#include <queue>
//#include <deque>
//#include <stack>
//#include <bitset>
//#include <algorithm>
//#include <functional>
//#include <numeric>
//#include <utility>
//#include <sstream>
//#include <iostream>
//#include <iomanip>
//#include <cstdio>
//#include <cmath>
//#include <cstdlib>
//
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair
//#define MAX 100048
//
//set<int>S;
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int n;
//
//			int hpos=0,mpos=0;
//
//	FOR(i,1,721)
//		{
//			mpos++;
//			if(i%12==0)hpos++;
//
//			mpos = mpos%60;
//			hpos = hpos%60;
//
//			int a1 = 6 * abs(hpos-mpos);
//			int a2 = 6 * (60-abs(hpos-mpos));
//			S.insert(min(a1,a2));
//		}
//
//	while(cin>>n)
//	{
//		if(S.find(n)!=S.end())
//			puts("Y");
//		else
//			puts("N");
//
//	}
//
//}
//
//
