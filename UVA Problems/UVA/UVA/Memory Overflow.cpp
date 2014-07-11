//// Bsm Allah
//
//#include <iostream>
//#include <map>
//#include <cstdio>
//#include <queue>
//#include <vector>
//#include <string>
//#include <cstring>
//#include <set>
//#include <algorithm>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define LL long long 
//#define pii pair<int,int>
//#define pll pair<LL,LL>
//#define mp make_pair
//
//int last[30];
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t;
//	int kase=0;
//	string text;
//	cin>>t;
//	while(t--)
//	{
//		Set(last,-1);
//		int n,k;
//		cin>>n>>k;
//		cin>>text;
//		int c= 0;
//		FOR(i,0,text.length())
//		{
//			if(last[text[i]-'A']==-1)
//			{
//				last[text[i]-'A'] = i;
//				continue;
//			}
//			if(i-last[text[i]-'A']<=k)
//				c++;
//			last[text[i]-'A'] = i;
//		}
//		cout<<"Case "<<++kase<<": "<<c<<endl;
//	}
//
//	return 0;
//}