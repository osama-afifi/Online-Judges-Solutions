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
//#define MAX 100009 
//using namespace std;
//
//int l1;
//int l2;
//string s1,s2;
//int d[1009][1009];
//vector<int> V[300];
//int const oo = 1<<25;
//int bs(int j, char c )
//{
//	int b = 0;
//	int e = V[c].size()-1;
//	int res=-1;
//	while(b<=e)
//	{
//		int mid = (b+e)/2;
//		if(V[c][mid]>=j)
//			e=mid-1,res=V[c][mid];
//		else b=mid+1;
//	}
//	return res;
//}
//
//int solve(int i , int j)
//{
//	if(i==s1.length())
//		return oo;
//	if(d[i][j]!=-1)return d[i][j];
//	int ss1 = oo;
//	int ss2 = oo;
//	int q = bs(j,s1[i]);
//	ss1 = solve(i+1,j);
//	if(q!=-1)
//		ss2 = solve(i+1, q+1)+1; 
//	else ss2 = 1;
//	return d[i][j] = min(ss1, ss2);
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	while(cin>>s1>>s2)
//	{
//		Set(d,-1);
//		l1 = s1.length();
//		l2 = s2.length();
//		FOR(i,0,l2)
//			V[s2[i]].push_back(i);
//		int res = solve(0,0);
//		printf("%d\n", res);
//	}
//
//	return 0;
//}
//
//
