//
//
//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<queue>
//#include<stack>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//using namespace std;
//
//string text;
//int t,n;
//int oo =1<<30;
//
//vector< pair<int,int> >V;
//
//#define OPEN 1
//#define CLOSE 0
//
//int N,K;
//int arr[100009];
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int n;
//
//	while(scanf("%d%d",&N,&K)==2)
//	{
//		FOR(i,0,N)
//			scanf("%d",&arr[i]);
//		long long sum=0;
//
//		FOR(i,0,N)
//		{
//			if(K>0 && arr[i]<0)
//			{
//				arr[i]*=-1;
//				K--;
//			}
//
//		}
//		int mini=oo;
//		FOR(i,0,N)
//		{
//			sum+=arr[i];
//			mini=min(mini,arr[i]);
//		}
//		if(K>0)
//			if(K%2==1)
//				sum=sum-abs(2*mini);	
//		cout<<sum<<endl;
//	}
//	return 0;
//}