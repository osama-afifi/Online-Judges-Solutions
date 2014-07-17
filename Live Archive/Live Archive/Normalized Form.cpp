//#include<iostream>
//#include<stdio.h>
//#include<string>
//#include<algorithm>
//
//using namespace std;
//int cur;
//string text;
//bool solve(int depth)
//{
//	cur++;
//	//if(cur==text.length())return 1;
//	bool ret=0;
//	 if(text[cur]=='(')
//	    ret = (depth&1)? ret|solve(depth+1) : ret&solve(depth+1); 
//	else if(text[cur]=='T')
//		ret = (depth&1)? ret|1 : ret&1; 
//	else if(text[cur]=='F')
//		ret = (depth&1)? ret|0 : ret&0; 
//	else if(text[cur]==')')
//		return ret;
//	return solve(depth);
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int kase=0;
//	while(getline(cin,text))
//	{
//	if(text=="()")break;
//	cur=-1;
//	bool res=solve(0);
//	if(res)
//		printf("%d. true\n",++kase);
//	else
//		printf("%d. false\n",++kase);
//	}
//
//
//return 0;
//}