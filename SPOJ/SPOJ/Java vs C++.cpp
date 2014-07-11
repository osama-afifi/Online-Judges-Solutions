//
//#include<iostream>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<queue>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//using namespace std;
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	string text;
//	while(getline(cin,text))
//	{
//	bool err=0;
//	bool lower=0,higher=0;
//	if(text.find(' ')!=-1 || text=="")
//		err=1;
//	FOR(i,0,text.length())
//	{
//		if(err)break;
//		if(lower && higher)
//		{err=1;break;}
//		if(i)
//		if( islower(text[i]) && text[i-1]=='_' && islower(text[0]))
//		{
//		lower=1;
//		text[i]=toupper(text[i]);
//		text.erase(i-1,1);		
//		}
//				if(i)if( isupper(text[i]) && text[i-1]=='_')
//		{
//			err=1;break;
//		}
//		if( isupper(text[i]) && islower(text[0]))
//		{
//		higher=1;
//		text[i]=tolower(text[i]);
//		text.insert(i,1,'_');	i++;	
//		}
//		
//
//	}
//	if(lower && higher || err)
//		puts("Error!");
//	else
//		cout<<text<<endl;
//	
//	}
//
//	return 0;
//}
