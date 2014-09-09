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
//#include<stack>
//#include<math.h>
//
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) A.begin(), A.end()
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//
//
//int G(int n)
//{
//	if(n==1)
//		return 0;
//	set<int>S;
//	FOR(i,1,((n)/2)+1)
//		S.insert(G(n-i));
//	int g=0;
//	while(S.find(g)!=S.end())	g++;
//	return g;
//}
//
//LL SG(LL n)
//{
//	if(n%2==1)
//	return SG(n/2);
//	return n;
//
//}
//
//int main()
//{
//	//freopen("input.in", "r" , stdin);
//
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		int n;
//		cin>>n;
//		LL res=0;
//		FOR(i,0,n)
//		{
//			LL num;
//			cin>>num;
//			res ^= SG(num);
//		}
//		if(res)
//			cout << "YES" <<endl;
//		else
//			cout << "NO" <<endl;
//	}
//
//
//	return 0;
//}