//#include <iostream>
//#include <algorithm>
//#include <math.h>
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
//int n,t;
//vector< pair<int,int> >P;
//double d[205][205];
//double dist( double x1, double y1, double x2, double y2)
//{
//return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
//}
//int const oo =1<<25;
//int main()
//{
//	freopen("input.in","r",stdin);
//	int kase=0;
//	while(scanf("%d",&n)==1)
//	{
//		if(!n)break;
//		int x,y;
//		P.clear();
//		FOR(i,0,n)
//		{
//			scanf("%d%d",&x,&y);
//			P.push_back(make_pair(x,y));
//		}
//
//		FOR(i,0,n)
//		{
//			FOR(j,0,n)
//				d[i][j]=oo;
//			d[i][i]=0;
//		}
//		FOR(i,0,n)
//			FOR(j,i+1,n)
//			d[i][j]=d[j][i]=dist(P[i].first,P[i].second,P[j].first,P[j].second);
//
//		FOR(k,0,n)
//			FOR(i,0,n)
//				FOR(j,0,n)
//				d[i][j]=min(d[i][j],max(d[i][k],d[k][j]));
//
//		 printf("Scenario #%d\n",++kase);
//		printf("Frog Distance = %.3lf\n\n",d[0][1]);
//
//
//	}	
//	return 0;
//}