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
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//using namespace std;
//
//long double d[107][107];
//double oo=1<<25;
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int n,m;
//	while(cin>>n)
//	{
//		if(!n)break;
//		cin>>m;
//
//		FOR(i,0,n+1)
//			FOR(j,0,n+1)
//			d[i][j]=0;
//
//		int a,b,c;
//		while(m--)
//		{
//			cin>>a>>b>>c;
//			d[a-1][b-1]=d[b-1][a-1]=(long double)c/100.0;
//		}
//		FOR(k,0,n)
//			FOR(i,0,n)
//			FOR(j,0,n)
//			d[i][j]=max(d[i][j],d[i][k]*d[k][j]);
//
//		cout<< setprecision(6)<<fixed <<(long double) d[0][n-1]*100.0<<" percent"<<endl;
//	}
//		return 0;
//	
//}