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
//int cum[5009];
//
//bool uni(int n)
//{
//	set<char>S;
//	while(n>0)
//	{
//		if(S.find(n%10)!=S.end()) return false;
//		S.insert(n%10);
//		n/=10;
//	}
//	return true;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	
//	Set(cum,0);
//	FOR(i,1,5001)
//		if(uni(i))
//			cum[i]=cum[i-1]+1;
//		else cum[i]=cum[i-1];
//	
//		int n,m;
//		while(cin>>n>>m)
//		{
//		cout<<cum[m]-cum[n-1]<<endl;
//		}
//
//}
//
//
