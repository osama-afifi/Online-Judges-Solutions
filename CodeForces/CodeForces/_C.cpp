//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<queue>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) (A.begin(), A.end())
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//int oo=1<<25;
//
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	string text;
//
//	while(cin>>text)
//	{
////		)((())))(()())	
//		int sum=0;
//		int maxi = 0;
//		int cur = 0;
//		int t = 0;
//		FOR(i,0,text.length())
//		{
//			if(text[i]=='(') ++sum , ++cur;
//			if(text[i]==')') --sum, ++cur;
//			if(sum==0 && cur>maxi)maxi=cur;
//			if(sum==0 && cur==maxi)++t;
//			if(sum<0) sum =0,	cur = 0;
//		}
//	
//		cout << maxi<< " " << t <<endl;
//	
//	}
//
//	return 0;
//}