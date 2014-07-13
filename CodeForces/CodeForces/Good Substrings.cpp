//
//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<queue>
//#include<set>
//#include<stack>
//#include<unordered_set>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define LL long long
//#define mp make_pair
//using namespace std;
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	string s;
//	int k;
//	string bad;
//
//	while(cin>>s)
//	{
//		
//		
//		cin>>bad;
//		cin>>k;
//		LL B1=31;
//		LL B2=10007;
//		LL MOD = 1e9+7;
//		
//		unordered_set <LL> S;
//		FOR(i,0,s.length())
//		{
//			LL hsh1=0;
//			LL hsh2=0;
//			int curK=k;
//			FOR(j,i,s.length())
//			{
//				hsh1 = hsh1*B1 + (LL)s[j];
//				hsh1%=MOD;
//				hsh2 = hsh2*B2 + (LL)s[j];
//				hsh2%=MOD;
//
//				curK-= bad[s[j]-'a']=='0';
//				if(curK>=0)
//					S.insert(hsh1*MOD+hsh2);
//				else break;
//			}
//		}
//
//		cout<<S.size()<<endl;
//	}
//}
