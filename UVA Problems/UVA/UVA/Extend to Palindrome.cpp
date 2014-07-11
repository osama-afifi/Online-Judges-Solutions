//#include <iostream>
//#include <string>
//#include <cstring>
//#include <algorithm>
//#include <stdio.h>
//
//using namespace std;
//
//int const oo =1<<25;
//        
//int fail[1000010];
//
//
//void genFail(string pattern)
//{
//	int len = pattern.length();
//    int i=1,j=0;
//    fail[0]=0;
//    while(i<len)
//    {
//        if(pattern[i]==pattern[j])
//        {
//            j++;
//            fail[i]=j;
//            i++;
//        }
//        else if(j>0)
//            j=fail[j-1];
//        else
//        {
//            fail[i]=0;
//            i++;
//        }
//    }
//}
//
//int kmp(string text, string pattern)
//{
//	int i=0,j=0,count=0,length=text.length();
//	while(i<length)
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
//	string text;
//	while(cin>>text)
//	{
//		string temp=text;
//		reverse(temp.begin(),temp.end());
//		genFail(temp);
//		
//		int need=kmp(text,temp);
//		cout<<text;
//		for(int i = need ; i<temp.length()  ; i++)
//			cout<<temp[i];
//		cout<<endl;
//
//	}
//	return 0;
//}