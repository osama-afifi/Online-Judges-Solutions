//#include <iostream>
//#include <iomanip>
//#include <stdio.h>
//#include <algorithm>
//#include <string>
//#include <cstring>
//#include <sstream>
//#include <vector>
//#include <queue>
//#include <math.h>
//#include <map>
//
//using namespace std;
//
//int  const oo = 1<<25;
//
//int min(int x, int y){ return x < y ? x : y; }
//int max(int x, int y){ return x > y ? x : y; }
//char last;
//map<string,int> M;
//int counter=0;
//void generate(string text , int index)
//{
//	if(text.length()==index)
//	{
//		M[text]=++counter;
//		return;
//	}
//
//	if(!text.length())last='a';
//	else last=text[text.size()-1]+1;
//	for(char i = last ; i<='z' ; i++ )
//		generate(text+(char)i,index);
//}
//
//
//int main()
//{
//	string text;
//	freopen("input.in","r",stdin);
//	for(int i =1 ; i<=5 ; i++)
//		generate("",i);
//	while( cin>>text )
//	{
//		bool valid=true;
//
//		for(int i = 1 ; i< text.length() ; i++)
//			if(text[i-1]>=text[i]){
//				valid=false;
//				break;
//			}
//			if(!valid)
//				puts("0");
//			else
//				cout<<M[text]<<endl;
//	}
//	return 0;
//}