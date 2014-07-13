//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <queue>
//#include <stack>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mk make_pair
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int n;
//	string s;
//	while(cin>>n>>s)
//	{
//
//		bool r=0,l=0;
//		int x=0,y=0;
//		char prev='$';
//		int a,b;
//		FOR(i,0,s.length())
//		{
//			if(s[i]=='R')
//			{
//				r=1;
//				if(s[i]==prev)
//				{
//					y=i+2;
//					b=i+1;
//				}
//				else
//				{
//					b=i+1;
//					x=i+1;
//					y=x+1;
//				}
//			}
//
//			if(s[i]=='L')
//			{
//				l=1;
//				if(s[i]==prev)
//				{
//					a = i+1;
//					x=i+1;
//				}
//				else
//				{
//					a = i+1;
//					x=i+1;
//					y=x-1;
//				}
//
//			}
//			prev=s[i];
//		}
//		if(l && r)
//			cout<<a<<" "<<b<<endl; 
//		else
//			cout<<x<<" "<<y<<endl;
//	}
//	return 0;
//}