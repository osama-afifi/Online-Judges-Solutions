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
//using namespace std;
//typedef unsigned long long LL;
//
//
//void genGrundy()
//{
//	int arr[130];
//	arr[0]=arr[1]=0;
//	FOR(i,0,129)
//	{
//		set<int>S;
//		FOR(j,1,i/2 +1)
//			S.insert(arr[i-j]);
//		int g=0;
//		while(S.find(g)!=S.end())g++;
//		arr[i]=g;
//	}
//	FOR(i,0,129)
//		cout<<i<<" "  << arr[i]<<"\n";
//}
//
//LL f(LL i)
//{
//	if(i%2==1)
//		return f(i/2);
//	else return i/2;
//}
//int main()
//{
//	freopen("input.in","r",stdin);
//
////	genGrundy();
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		LL nimber =0, x;
//		int n;
//		cin>>n;
//		FOR(i,0,n)
//		{
//			cin>>x;				
//			nimber ^= f(x);
//		}
//		if(nimber)
//			cout << "YES"<<endl;
//		else
//			cout << "NO"<<endl;
//	}
//	
//	return 0;
//}
//
//
