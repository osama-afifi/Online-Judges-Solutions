//#include <iostream>
//#include <string>
//#include <sstream>
//#include <cstring>
//#include <algorithm>
//#include <stdio.h>
//
//using namespace std;
//string text,s1,s2,s1r;
//bool s2biggers1(string &s1 , string &s2)
//{
//	if(s1.length()<s2.length())
//		return true;
//	else if(s1.length()==s2.length() && ( (s1<=s2/* && text.length()%2==1*/) || (s1==s2 && text.length()%2==0) ))
//		return true;
//	return false;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t;
//	cin>>t;
//	
//	string res;
//	while(t--)
//	{
//		cin>>text;
//		if(text.length()==1)
//		{
//			if(text=="9")
//				cout<<11<<endl;
//			else
//				cout<<(char)(text[0]+1)<<endl;
//			continue;
//		}
//
//		s1=text.substr(0,text.length()/2);
//		s2=text.substr((text.length()+1)/2);
//		s1r=s1;
//		reverse(s1r.begin(),s1r.end());
//		int cen=(text.length()-1)/2;
//		if(s2biggers1(s1r,s2))
//		{
//			char mid;
//
//			int cur=cen;
//			bool nocarry=false;
//			while(nocarry==false && cur>=0)
//			{
//				if(text[cur]=='9')
//					text[cur]='0';
//				else
//				{
//					text[cur]++;
//					nocarry=true;
//				}
//				cur--;
//			}
//
//			if(!nocarry)
//			{
//				putchar('1');
//				for(int i = 0 ; i<text.length()-1 ; i++)
//					putchar('0');
//				putchar('1');
//			}
//			else
//			{
//			for(int i = 0 ; i<=cen ; i++)
//				cout<<text[i];
//			for(int i = cen-((text.length())%2) ; i>=0 ; i--)
//				cout<<text[i];
//			}
//				
//			putchar('\n');
//
//		}
//
//		else
//		{
//			for(int i = 0 ; i<=cen ; i++)
//				cout<<text[i];
//			for(int i = cen-(text.length()%2) ; i>=0 ; i--)
//				cout<<text[i];
//			putchar('\n');
//		}
//
//	}
//
//
//	return 0;
//}