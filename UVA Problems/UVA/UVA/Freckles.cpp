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
//
//struct edge{
//	int e1,e2;
//	double cost;
//
//	bool operator < (const edge &a)const
//	{ return cost<a.cost;}
//};
//
//vector<edge>E;
//
//double dist( double x1, double y1, double x2, double y2)
//{
//	return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
//}
//int const oo =1<<25;
//
//vector< pair<double,double> >P;
//
//int p[109];
//int findParent(int i)
//{return (i==p[i]) ? i : p[i]=findParent(p[i]);}
//
//bool isUnion(int a, int b)
//{return findParent(a)==findParent(b);};
//
//void makeUnion(int a, int b)
//{p[findParent(a)]=findParent(b);}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int kase=0;
//	int n,t;
//	scanf("%d",&t);
//	while(t--)
//	{
//		P.clear();
//		E.clear();
//		scanf("%d",&n);
//		FOR(i,0,n)
//			p[i]=i;
//		double x,y;
//		FOR(i,0,n)
//		{
//			scanf("%lf %lf",&x,&y);
//			P.push_back(make_pair(x,y));
//		}
//		FOR(i,0,n)
//			FOR(j,0,n)
//		{
//			edge temp;
//			temp.e1=i;
//			temp.e2=j;
//			temp.cost=dist(P[i].first,P[i].second,P[j].first,P[j].second);
//			E.push_back(temp);
//		}
//		sort(E.begin(),E.end());
//		double MST=0;
//		int done=0;
//		for(int i = 0 ; i<E.size() && done<n-1 ; i++)
//			if(!isUnion(E[i].e1,E[i].e2))
//			{
//				makeUnion(E[i].e1,E[i].e2);
//				MST+=E[i].cost;
//				done++;
//			}
//			   printf("%.2lf\n",MST);
//			if(t)
//				putchar('\n');
//	}		
//	return 0;
//}