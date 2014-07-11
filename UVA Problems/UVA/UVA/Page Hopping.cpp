//#include <iostream>
//#include <iomanip>
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
//int oo=1<<25;
//int d[105][105];
//
//int main()
//{
//	freopen("input.in","r",stdin);	
//	int n1,n2;
//	int kase=0;
//	while(scanf("%d%d",&n1,&n2)==2)
//	{
//		if(!n1 && !n2)break;
//		FOR(i,0,101)
//		{
//			FOR(j,0,101)
//				d[i][j]=oo;
//			d[i][i]=0;
//		}
//		d[n1][n2]=1;
//		while(scanf("%d%d",&n1,&n2)==2)
//			if(!n1 && !n2)break;
//			else d[n1][n2]=1;
//
//		FOR(k,0,101)
//			FOR(i,0,101)
//			FOR(j,0,101)
//			d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
//
//		int c=0;
//		int sum=0;
//			FOR(i,0,101)
//			FOR(j,0,101)
//				if(d[i][j]<oo && i!=j)
//				{
//					sum+=d[i][j];
//					c++;
//				}
//			double res=(double)sum/(double)c;
//			cout<<"Case "<<++kase<<": average length between pages = "<<setprecision(3)<<fixed<<res<<" clicks"<<endl;
//	}
//	return 0;
//}
