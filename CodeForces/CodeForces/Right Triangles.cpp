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
//int oo =1<<25;
//
//vector< pair<int,int> >V;
//
//#define OPEN 1
//#define CLOSE 0
//
//int N,K;
//
//char MAP[1009][1009];
//int ver[1009];
//int hor[1009];
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int n,m;
//
//	while(scanf("%d%d",&n,&m)==2)
//	{
//		FOR(i,0,n)
//			FOR(j,0,m)
//			cin>>MAP[i][j];
//
//		long long res=0;
//
//		FOR(i,0,m)
//		{
//			ver[i]=0;
//			FOR(j,0,n)
//				ver[i]+=(MAP[j][i]=='*');
//		}
//		FOR(i,0,n)
//		{
//			hor[i]=0;
//			FOR(j,0,m)
//				hor[i]+=(MAP[i][j]=='*');
//		}
//
//
//		FOR(i,0,n)
//			FOR(j,0,m)
//			if(MAP[i][j]=='*')
//				res+=(ver[j]-1)*(hor[i]-1);
//
//		cout<<res<<endl;
//
//			
//	}
//
//
//
//	return 0;
//}