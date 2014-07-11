//// NOT AC
//
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
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair 
//#define MAX 10009 
//using namespace std;
//
//pair<pair<int,int> ,int > C[10009];
//
//int main ()
//{
//		freopen("input.in","r",stdin);
//	int t , n;
//	scanf("%d", &t);
//	char s[10];
//
//	while(t--)
//	{
//			scanf("%d", &n);
//			int a , b, c;
//			for (int i = 0; i < n-1; ++i) 
//			{
//				scanf("%d %d %d", &a, &b, &c);
//				--a , --b;
//				C[i] = mp( mp (a,b) , c );
//			}
//			while (true)
//			{
//				scanf("%s", &s);
//				if (s[0] == 'D')break;	
//				scanf("%d %d", &a, &b);
//				--a , --b;
//				if (s[0] == 'Q')	
//					printf("%d\n", C[a].second);
//				else 
//					 C[a].second = b;								
//			}	
//	}
//	return 0;
//}