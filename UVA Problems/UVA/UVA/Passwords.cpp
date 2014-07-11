//#include <iostream>
//#include <stdio.h>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//string dic[101];
//string pat[101];
//int limit;
//int p;
//string output;
//string word;
//void solve( int index , string output)
//{
//
//	if(index==limit)
//	{
//		cout<<output<<endl;
//		return;
//	}
//
//	if(pat[p][index]=='0')
//		for(int j =0 ; j<=9 ; j++)				
//			solve(index+1 , output+char(j+'0'));
//
//	else
//	{
//		output+=word;
//		solve(index+1 , output);
//	}
//
//
//
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int n,m;
//	while(cin>>n)
//	{
//		cout<<"--"<<endl;
//
//		for(int i = 0 ; i< n ; i++)
//			cin>>dic[i];
//
//		cin>>m;
//
//		for(int i = 0 ; i< m ; i++)
//			cin>>pat[i];
//
//		for(int i = 0 ; i< m ; i++)
//		{
//			p=i;
//			limit=pat[i].length();
//			for(int i = 0 ; i< n ; i++)
//			{
//				word=dic[i];
//				solve( 0 , "");
//			}
//			if(n==0)solve( 0 , "");
//		}
//	}
//
//	return 0;
//}