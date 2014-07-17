//
//// NOT AC
//
//#include <iostream>
//#include <stdio.h>
//#include <algorithm>
//#include <iomanip>
//#include <string>
//#include <cstring>
//#include <vector>
//#include <map>
//#include <math.h>
//#include <queue>
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair
//using namespace std;
//int n;
//
//vector< vector<double> > P;
//vector<double>X;
//double d[500][500];
//
//bool isWall(int x , double y)
//{
//	//if(X[x]==0 || X[x]==10) return 0;
//	bool wall=1;
//	FOR(i,1,P[x].size())
//		if( y<=P[x][i] && y>=P[x][i-1])
//				return !(i&1);
//}
//bool can(pair<double,double>a ,pair<double,double>b )
//{
//	//if(a>b)swap(a,b);
//	double x1,x2,y1,y2;
//	x1 = a.first;
//	y1=a.second;
//	x2=b.first;
//	y2=b.second;
//	double m = (y2-y1)/(x2-x1);
//	double c = y1 - m* x1;	
//	bool koko=1;
//
//	FOR(z,0,X.size())
//	{
//		if(x1>=X[z])continue;
//		if(x2<=X[z])break;
//		double y = m*X[z]+c;
//		koko &= !isWall(z,y);
//		if(!koko)break;
//	}
//	return koko;
//}
//
//double dist ( pair<double,double>a , pair<double,double> b) 
//{ 
//	return sqrt( (double)(a.first-b.first)*(a.first-b.first) + (double)(a.second-b.second)*(a.second-b.second) ); 
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	
//	while(cin>>n)
//	{
//		if(n==-1)break;
//		FOR(i,0,n*5+5)
//		{
//			FOR(j,0,n*5+5)
//			d[i][j]=1<<25;
//			//d[i][i]=0;
//		}
//		X.clear();
//		P.clear();
//		P.resize(n);
//		
//		double x,y;
//
//		FOR(i,0,n)
//		{
//			cin>>x;
//			X.push_back(x);
//			FOR(j,0,4){
//				cin>>y;
//				P[i].push_back(y);
//			}
//		}
//
//
//		FOR(i,0,P.size())
//			FOR(j,0,P[i].size())
//			FOR(k,i,P.size())
//			FOR(l,0,P[k].size())
//		if(can(mp(X[i],P[i][j]),mp(X[k],P[k][l])))
//				d[i*j+j][k*l+l] = dist(mp(X[i],P[i][j]),mp(X[k],P[k][l]));
//
//		int nodes = n*4;
//
//		FOR(i,0,P.size())
//			FOR(j,0,P[i].size())
//		{
//			if(X[i]==0)continue;
//			if(can(mp(0,5),mp(X[i],P[i][j])))
//				d[nodes][i*j+j] = dist(mp(0,5),mp(X[i],P[i][j]));
//
//			if(can(mp(X[i],P[i][j]),mp(10,5)))
//				d[i*j+j][nodes+1] =  dist(mp(10,5),mp(X[i],P[i][j]));
//
//		}
//					if(can(mp(0,5),mp(10,5)))
//				d[nodes][nodes+1] = dist(mp(10,5),mp(0,5));
//
//		nodes+=2;
//		FOR(i,0,nodes)
//			FOR(j,0,nodes)
//			FOR(k,0,nodes)
//			d[i][j] = min(d[i][j] , d[i][k]+d[k][j]);
//
//		if(d[nodes-2][nodes-1]==1<<25)
//			d[nodes-2][nodes-1]=-1;
//
//		cout<< setprecision(2)<<fixed <<d[nodes-2][nodes-1]<<endl;
//	}
//
//	return 0;
//}
//
////#include <iostream>
////#include <cmath>
////#include <algorithm>
////#include <cstdio>
////#include <vector>
////#include <queue>
////using namespace std;
//// 
////#define MAX 10000
//// 
////struct Point {
////    float X, Y;
////        int wallIndex;
////        Point() { }
////        Point(float x, float y) {
////                X = x, Y = y;
////        }
////};
//// 
////struct Wall {
////        float X, Y[4];
////};
//// 
////Point intersection(Point p1, Point p2, Point p3, Point p4) {
////        float x1 = p1.X, x2 = p2.X, x3 = p3.X, x4 = p4.X;
////        float y1 = p1.Y, y2 = p2.Y, y3 = p3.Y, y4 = p4.Y;
////        float d = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);
////        float pre = (x1*y2 - y1*x2), post = (x3*y4 - y3*x4);
////        float x = ( pre * (x3 - x4) - (x1 - x2) * post ) / d;
////        float y = ( pre * (y3 - y4) - (y1 - y2) * post ) / d;
////        return Point(x, y);
////}
//// 
////vector <vector <pair <int, float> > > G;
////Point P[MAX]; Wall W[MAX];
////int N, sz, NOE;
////float Dist[MAX];
//// 
////float dijkstra(int S, int T) {
////        for(int i = 0; i < sz; ++i) Dist[i] = 1 << 30;
////        Dist[S] = 0;
////        priority_queue <pair <float, int> > Q;
////        Q.push(make_pair(0, S));
////        while(Q.size()) {
////                int CurrNode = Q.top().second;
////                float CurrDist = -Q.top().first; Q.pop();
////                if(CurrDist != Dist[CurrNode]) continue;
////                if(CurrNode == T) return CurrDist;
////                for(int i = 0; i < G[CurrNode].size(); ++i) {
////                        int j = G[CurrNode][i].first;
////                        float tmp = CurrDist + G[CurrNode][i].second;
////                        if(Dist[j] > tmp) {
////                                Dist[j] = tmp;
////                                Q.push(make_pair(-tmp, j));
////                        }
////                }
////        }
////        return -1;
////}
//// 
//// 
////int main() {
////	freopen("input.in","r",stdin);
////        float tmpX, tmpY[4];
////        while(scanf("%d", &N) == 1 && N != -1) {
////                sz = 1;
////                P[0].X = 0, P[0].Y = 5, P[0].wallIndex = -1;
////                for(int i = 0; i < N; ++i) {
////                        scanf("%f %f %f %f %f", &tmpX, &tmpY[0], &tmpY[1], &tmpY[2], &tmpY[3]);
////                        W[i].X = tmpX;
////                        for(int j = 0; j < 4; ++j)
////                                P[sz].X = tmpX, P[sz].Y = tmpY[j], W[i].Y[j] = tmpY[j], P[sz++].wallIndex = i;
////                }
////                P[sz].X = 10, P[sz].Y = 5, P[sz++].wallIndex = N;
////                G.resize(sz);
////                NOE = 0;
////                for(int i = 0; i < sz; ++i) {
////                        for(int j = i + 1; j < sz; ++j) {
////                                if(P[i].X == P[j].X) continue;
////                                bool ok = 1;
////                                for(int k = P[i].wallIndex + 1; k < P[j].wallIndex; ++k) {
////                                        Point temp = intersection(P[i], P[j], Point(W[k].X, 0), Point(W[k].X, 10));
////                                        if(!((temp.Y > W[k].Y[0] && temp.Y < W[k].Y[1]) || (temp.Y > W[k].Y[2] && temp.Y < W[k].Y[3]))) {
////                                                ok = 0;
////                                                break;
////                                        }
////                                }
////                                if(ok) G[i].push_back(make_pair(j, hypot(P[i].X - P[j].X, P[i].Y - P[j].Y)));
////                        }
////                }
////                printf("%.2f\n", dijkstra(0, sz - 1));
////                G.clear();
////        }
////        return 0;
////}