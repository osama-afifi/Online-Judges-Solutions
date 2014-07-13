//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<queue>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) (A.begin(), A.end())
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//int oo=1<<25;
//
//
//using namespace std;
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int n;
//	string s;
//	while(cin>>n)
//	{
//		cin>>s;
//		int mini = 1<<25;
//		int c1=0;
//		for(int i = 1 ; i<n ; i+=2)
//		{
//			c1 += ( (s[i-1] != '0') + (s[i] != '1') );
//		}
//		c1 += ( (n&1) && s[n-1]=='1');
//
//		int c2=0;
//		for(int i = 1 ; i<n ; i+=2)
//		{
//			c2 += ( (s[i-1] != '1') + (s[i] != '0') );
//		}
//		c2 += ( (n&1) && s[n-1]=='0');
//		int res = min(c1,c2);
//		cout << res <<endl;
//	}
//	return 0;
//}
//
