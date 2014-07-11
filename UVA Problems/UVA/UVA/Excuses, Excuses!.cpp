//#include <iostream>
//#include <string>
//#include <cstring>
//#include <stdio.h>
//
//using namespace std;
//
//int fail[150];
//
//void BIG(string &text)
//{
//	for(int i = 0 ; i<text.length() ; i++)
//		text[i]=toupper(text[i]);
//}
//
//void genFail(string pattern)
//{
//	int len = pattern.length();
//	int i=1,j=0;
//	fail[0]=0;
//	while(i<len)
//	{
//		if(pattern[i]==pattern[j])
//		{
//			j++;
//			fail[i]=j;
//			i++;
//		}
//		else if(j>0)
//			j=fail[j-1];
//		else
//		{
//			fail[i]=0;
//			i++;
//		}
//	}
//}
//
//int kmp(string text, string pattern)
//{
//	int i=0,j=0,count=0,tlen=text.length(),plen=pattern.length();
//	while(i<tlen &&j<plen)
//	{
//		if(text[i]==pattern[j])
//		{
//			i++;
//			j++;
//			count=j;
//		}
//		else if(j>0)
//			j=fail[j-1];
//		else
//			i++;
//	}
//	return count;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int m,n,kase=0;
//	string pattern[101];
//	string text[101];
//	string copy[101];
//	int exc[101];
//	while(scanf("%d%d",&n,&m)==2)
//	{
//		memset(exc,0,sizeof exc);
//		for(int i=0;i<n;i++)
//	{
//			cin>>pattern[i];
//			BIG(pattern[i]);
//	}
//		cin.ignore();
//		for(int i=0;i<m;i++)
//		{
//			getline(cin,text[i]);
//			copy[i]=text[i];
//				BIG(text[i]);
//		}
//
//
//		int maxi=0;
//
//		for(int i=0;i<n;i++)
//			for(int j=0;j<m;j++)
//			{
//				size_t f;
//				f=text[j].find(pattern[i]);
//				while(f!=string::npos)
//				{
//				exc[j]++;
//				if(exc[j]>maxi)
//					maxi=exc[j];
//				text[j].erase(f,pattern[i].length());
//				f=text[j].find(pattern[i]);
//				}
//			}
//
//		//for(int i=0;i<n;i++)
//		//{
//		//	genFail(pattern[i]);
//		//	for(int j=0;j<m;j++)
//		//	{
//		//		if(kmp(text[j],pattern[i])==pattern[i].length())
//		//			exc[j]++;
//		//	if(exc[j]>maxi)
//		//		maxi=exc[j];
//		//	}
//		//}
//
//		cout<<"Excuse Set #"<<++kase<<endl;
//
//		for(int i=0;i<n;i++)
//		{
//		if(exc[i]==maxi)
//			cout<<copy[i]<<endl;
//		}
//		cout<<endl;
//	}
//
//
//	return 0;
//}