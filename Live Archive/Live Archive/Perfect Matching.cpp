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
//using namespace std;
//
//long long pw[1005];
//long long hsh[1005];
//long long revhsh[1005];
//string s[1009];
//
//inline bool isPalin(string a)
//{
//	int len = a.length();
//	FOR(i,0,len/2)
//		if(a[i]!=a[len-i-1])return false;
//	return true;
//}
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int n,t;
//	pw[0]=1;
//	FOR(i,1,1002)
//		pw[i] = pw[i-1]*26;
//int kase=0;
//	scanf("%d",&t);
//	while(t--)
//	{
//		Set(hsh,0);
//		Set(revhsh,0);
//	scanf("%d",&n);
//	FOR(i,0,n)
//	cin>>s[i];
//
//	FOR(i,0,n)
//		FOR(j,0,s[i].length())
//	{
//		int len = s[i].length();
//		hsh[i] =  hsh[i] * 26LL + (long long)(s[i][j]-'a');
//		revhsh[i] = revhsh[i]* 26LL + (long long)(s[i][len-1-j]-'a');
//	}
//	
//	int count = 0;
//	FOR(i,0,n)
//		FOR(j,0,n)
//		if(i!=j && hsh[i]*pw[s[j].length()]+hsh[j] == revhsh[j]*pw[s[i].length()]+revhsh[i])
//			if(isPalin(s[i]+s[j]))
//			count++;
//			
//	 printf( "Case #%d: %d\n", ++kase, count );
//
//	}
//	return 0;
//}
