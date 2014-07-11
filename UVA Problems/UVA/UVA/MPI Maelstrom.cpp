//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <queue>
//#include <stack>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//using namespace std;
//
//
//int n;
//int d[109][109];
//
//int toNum(string &s)
//{
//	stringstream ss;
//	ss<<s;
//	int num;
//	ss>>num;
//	return num;
//}
//int const oo=1<<25;
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	string text;
//	while(scanf("%d",&n)==1)
//	{
//		FOR(i,0,n)
//		{
//			FOR(j,0,n)
//				d[i][j]=oo;		
//			d[i][i]=0;
//		}
//
//		FOR(i,1,n)
//			FOR(j,0,i)
//		{
//			cin>>text;
//			if(text[0]!='x')
//			{
//				int num=toNum(text);
//				d[i][j]=d[j][i]=num;
//			}
//		}
//
//		FOR(k,0,n)
//			FOR(i,0,n)
//			FOR(j,0,n)
//			d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
//
//		int mini=oo,maxi=0;
//
//		FOR(i,0,n)
//		{
//			FOR(j,0,n)
//				if(d[i][j]<oo)
//				maxi=max(maxi,d[i][j]);
//			mini=min(mini,maxi);
//		}
//		cout<<mini<<endl;
//	}
//	return 0;
//}
