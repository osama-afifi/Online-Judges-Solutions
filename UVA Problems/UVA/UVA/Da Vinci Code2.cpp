//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <cstring>
//#include <string>
//#include <cctype>
//#include <stack>
//#include <queue>
//#include <list>
//#include <vector>
//#include <map>
//#include <sstream>
//#include <cmath>
//#include <bitset>
//#include <utility>
//#include <set>
//#include <numeric>
//
//
//using namespace std;
//int main ()
//{
//	freopen ("input.in","r",stdin);
//
//	unsigned long long fibo[150];
//
//	fibo[0]=1;
//	fibo[1]=1;
//	fibo[2]=2;
//
//	int t;
//	cin>>t;
//
//	for(int i=2;i<101;i++)
//		fibo[i]=fibo[i-1]+fibo[i-2];
//
//	int cypher[150];
//
//
//
//	while(t>0)
//	{
//
//		int N;
//		cin>>N;
//
//		for(int i=0 ; i<N ; i++)
//			cin>>cypher[i];
//
//		int max=0;
//		int size;
//
//		for(int i=0 ; i<N ; i++)
//		{
//			if(cypher[i]>max)
//			{
//			max=cypher[i];
//			}
//		}
//
//		for(int i=1;i<101;i++)
//			{
//				if(max==fibo[i])
//				{
//					size=i;
//					break;
//				}
//			}
//
//
//		
//		char txt[150];
//		gets(txt);
//		string dav;
//
//		for(int i=1;i<text.length();i++)
//		{
//
//			if(text[i]<'A' || (text[i]>'Z' && text[i]<'a' )|| (text[i]>'z') )
//			{
//				text.erase(i,1);
//				i--;
//			}
//		}
//		
//		
//		dav.append(size,' ');
//
//		for(int j=0;j<text.length();j++)
//		{
//			for(int i=1;i<101;i++)
//			{
//				if(cypher[j]==fibo[i])
//				{
//					dav[i-1]=text[j];
//					break;
//				}
//			}
//
//		}
//		cout<<dav<<endl;
//		t--;
//	}
//
//
//
//
//
//
//
//	return 0;
//}
