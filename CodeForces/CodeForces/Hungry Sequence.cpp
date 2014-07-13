//
//#include <vector>
//#include <list>
//#include <map>
//#include <set>
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
//#include <ctime>
//#include <cstring>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair
////1299709
//
//vector<int>P;
//bool p[1299709];
// void sieve(int N)
//{
//	
//	for(int i = 2 ; i*i<N ; i++)
//	{
//	if(!p[i])
//		for(int j=i*i ; j<=N ; j+=i)
//			p[j]=1;
//	}
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int n;
//	Set(p,0);
//	sieve(1299710);
//	while(cin>>n)
//	{
//		int c=0;
//		for(int i =2 ; c<n ; i++)
//				if(!p[i])
//					if(c)
//						printf(" %d", i),++c;
//					else
//				printf("%d", i),++c;
//		putchar('\n');
//	
//	}
//
//}