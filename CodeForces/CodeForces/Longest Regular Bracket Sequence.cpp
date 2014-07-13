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
//#include<stack>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//using namespace std;
//
//string text;
//int t,n;
//int oo =1<<25;
//
//vector< pair<int,int> >V;
//
//#define OPEN 1
//#define CLOSE 0
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int a,b,c,d;
//
//	int n;
//	while(getline(cin,text))
//	{
//
//
//	}
//	return 0;
//}
//
//
////#include<iostream>
////#include<iomanip>
////#include<string>
////#include<cstring>
////#include<stdio.h>
////#include<algorithm>
////#include<vector>
////#include<map>
////#include<queue>
////#include<stack>
////#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
////#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
////#define Set(a, s) memset(a, s, sizeof (a))
////using namespace std;
////
////string text;
////int t,n;
////int oo =1<<25;
////
////vector< pair<int,int> >V;
////
////#define OPEN 1
////#define CLOSE 0
////
////int main()
////{
////	freopen("input.in","r",stdin);
////	int a,b,c,d;
////
////	int n;
////	while(getline(cin,text))
////	{
////		pair<int,int>maxi=make_pair(0,0);
////		int open=0;
////		int close=0;
////		int counter=0;
////		bool streak=0;
////		for(int i = 0 ; i< text.length() ;i++)
////		{
////			
////			if(text[i]=='(') open++;
////			if(text[i]==')') close++;
////			if(open==close)	 counter=open*2;
////			if(close>open)   {counter=0;open=0;close=0;}
////			if(close==open)  
////
////			/*if(text[i]=='(')
////				open++;
////			else if(text[i]==')' && open>0)
////			{
////				close++;
////				open--;
////				counter++;
////				streak=1;
////				
////				if(counter>maxi.first)
////				{
////					maxi.first=counter;
////					maxi.second=1;
////				}
////				else if(counter==maxi.first)
////					maxi.second++;
////
////
////			}
////			else if(text[i]==')' && open<=0)
////			{
////				counter=0;
////				open=0;close=0;
////			}
////*/
////		}
////
////
////		if(maxi.first>0)
////			printf("%d %d\n",maxi.first*2,maxi.second);
////		else
////			puts("0 1");
////	}
////	return 0;
////}
