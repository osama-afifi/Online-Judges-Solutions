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
//
//
//bool p[1000*1009];
//void sieve(int n=1000001)
//{
//	for(int i=2 ; i*i<=n ; i++)
//		if(!p[i])
//			for(int j=i*i ; j<=n ; j+=i)
//				p[j]=1;
//}
//
//int main ()
//{ 
//	freopen("input.in","r",stdin);
//	sieve();
//	vector<int>P;
//	FOR(i,2,1000*1001)
//		if(!p[i])
//			P.pb(i);
//	int A,B;
//	int kase=0;
//	while(scanf("%d %d",&A,&B)==2)
//	{
//		if(!A && !B)break;
//		map<int,int>M1;
//		map<int,int>M2;
//
//		while(A>1)
//		{
//			FOR(i,0,P.size())
//				if(A%P[i]==0)
//					A/=P[i],M1[P[i]]++;
//		}
//
//		while(B>1)
//		{
//			FOR(i,0,P.size())
//				if(B%P[i]==0)
//					B/=P[i],M2[P[i]]++;
//		}
//
//		int d = max(M1.size(), M2.size());
//		vector<int>E;
//		map<int,int>::iterator it;
//		int res=0;
//		for(it=M2.begin() ; it!=M2.end() ; it++)
//		{
//			M1[it->first] =  abs(M1[it->first] - M2[it->first]);
//		}
//		for(it=M1.begin() ; it!=M1.end() ; it++)
//			res += it->second;
//
//		printf("%d. %d:%d\n", ++kase, M1.size() , res);
//	}
//
//
//	return 0;
//}
