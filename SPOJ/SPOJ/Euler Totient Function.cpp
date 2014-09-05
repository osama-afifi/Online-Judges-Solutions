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
//#include <time.h>
//#include <limits.h>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair 
//#define pb push_back 
//typedef long long LL;
//
//map<LL,int>M;
//
//int main() 
//{
//	freopen("input.in","r",stdin);
//	
//	int t;
//	int n;
//	scanf("%d",&t);
//	while(t--)
//	{
//		scanf("%d",&n);
//		int x=n;
//		int res = x;
//		for(int j=2;j*j<=x;j++)
//		{
//			if(x%j==0) 
//				res -= res/j;
//			while(x%j==0)
//				x/=j;
//		}
//		if(x>1)
//			res -= res/x;
//
//		printf("%d\n", res);
//	}
//
//	return 0;
//}
