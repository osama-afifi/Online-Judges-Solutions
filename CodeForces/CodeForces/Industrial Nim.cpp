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
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) A.begin(), A.end()
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//int oo=1<<25;
//
//LL grundy(LL i)
//{
//	if(i%4==0)
//		return i;
//	if(i%4==1)
//		return 1;
//	if(i%4==2)
//		return i+1;
//	return 0;
//}
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	LL n;
//	while(cin>>n)
//	{
//		LL res=0;
//		LL m,k;
//		FOR(i,0,n)
//		{
//			cin>>m>>k;
//			res ^= grundy(m-1);
//			res ^= grundy(m+k-1);
//		}
//		if(res)
//			cout << "tolik\n";
//		else
//			cout << "bolik\n";
//	}
//
//
//	return 0;
//}