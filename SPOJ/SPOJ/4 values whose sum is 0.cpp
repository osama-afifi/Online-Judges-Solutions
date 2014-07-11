//// Meet in the Middle
//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <set>
//#include <queue>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair 
//using namespace std;
//
//int A[4009];
//int B[4009];
//int C[4009];
//int D[4009];
//
//vector<int>V;
//int n;
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	while(scanf("%d" , &n)==1)
//	{
//		V.clear();
//		int a,b,c,d;
//		for(int i = 0 ; i < n ; i++)
//			scanf("%d%d%d%d" , &A[i], &B[i], &C[i] , &D[i]);
//
//		for(int i = 0 ; i < n ; i++)
//			for(int j = 0 ; j < n ; j++)
//				V.push_back(A[i]+B[j]);
//		sort(V.begin(),V.end());
//
//		long long  res = 0;
//		for(int i = 0 ; i < n ; i++)
//			for(int j = 0 ; j < n ; j++)
//			{
//				vector<int> ::iterator it1 = lower_bound(V.begin(),V.end(), -(C[i]+D[j]));
//				if(it1==V.end())continue;
//				vector<int> ::iterator it2 = upper_bound(V.begin(),V.end(), -(C[i]+D[j]));
//				res += (int)(it2-it1);			
//			}
//
//		printf("%d\n", res);
//	}
//
//
//	return 0;
//}
