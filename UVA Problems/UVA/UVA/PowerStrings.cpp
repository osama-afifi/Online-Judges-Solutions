//#include <iostream>
//#include <string>
//#include <stdio.h>
//
//using namespace std;
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	string text;
//	while(getline(cin,text))
//	{
//		if(text==".")break;
//		int len=1;
//		for(int i = 0 ; i < text.length() ; i++)		
//			while(text[i]!=text[i%len])len++;
//
//		if(text.length()%len==0)
//			printf("%d\n",text.length()/len);
//		else
//			puts("1");
//	}
//	return 0;
//}