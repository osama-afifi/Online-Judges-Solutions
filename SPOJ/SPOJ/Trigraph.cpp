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
//typedef long long LL;
//int n;
//
//LL d[100009][3];
//int arr[100009][3];
//LL solve(int idx, int col)
//{
//	if(idx>=n || col<0 || col>=3)return (1LL<<50);
//	if(idx==n-1 && col==1)
//		return arr[idx][col];
//	if(d[idx][col]!=-1)
//		return d[idx][col];
//	LL s1 = solve(idx,col+1)+arr[idx][col];
//	LL s2 = solve(idx+1,col+1)+arr[idx][col];
//	LL s3 = solve(idx+1,col)+arr[idx][col];
//	LL s4 = solve(idx+1,col-1)+arr[idx][col];
//
//	return d[idx][col] = min(min(s1,s4),min(s2,s3));
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int k=0;
//	while(cin>>n)
//	{
//		if(!n)break;
//		Set(d,-1);
//		FOR(i,0,n)
//			FOR(j,0,3)
//			cin>>arr[i][j];
//		LL res = solve(0,1);
//		cout<< ++k<<". ";
//		cout<< res <<endl;
//	}
//
//	return 0;
//}