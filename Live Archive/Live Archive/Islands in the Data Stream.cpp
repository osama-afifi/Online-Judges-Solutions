//#include <iostream>
//#include <string>
//#include <math.h>
//#include <queue>
//#include <stack>
//#include <map>
//#include <set>
//#include <stdio.h>
//#include <sstream>
//#include <vector>
//
//using namespace std;
//
//#define FOR(i,a,b) for(int i=(a) ; i<b ; i++)
//#define Set(a,v) memset(a,v,sizeof(a))
//#define mp make_pair
//#define pb push_back
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int arr[20];
//	int t;
//	cin>>t;
//	int kase=0;
//	while(t--)
//	{
//		cin>>kase;
//		stack<int>S;
//		FOR(i,0,15)
//			cin>>arr[i];
//		int i=0;
//		int res=0;
//		int cur;
//		FOR(i,0,15)
//		{
//			cur  =arr[i];
//			if(S.size()==0)
//			{S.push(cur); continue;}
//			if(S.size()>0 && cur==S.top())continue;
//			if(S.size() && cur>S.top())
//				S.push(cur);
//			while(S.size() && cur<S.top())
//			{res++; S.pop();}
//		}
//
//		while(S.size() && cur<S.top())
//			res++;
//
//		cout << kase << " " <<  res <<endl;
//
//	}
//
//
//	return 0;
//}