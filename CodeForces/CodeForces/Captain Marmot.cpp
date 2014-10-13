//Captain Marmot#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<sstream>
//#include<queue>
//#include<set>
//#include<stack>
//#include<math.h>
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) A.begin(), A.end()
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//
//using namespace std;
//
//struct  point
//{
//	LL x,y;
//};
//
//int n;
//
//point rotateP(point q , point r, int c)
//{
//
//	LL M[4][4] = { {0,-1},
//					{1,0},
//	};
//	LL V[4] = {q.x-r.x,q.y-r.y};
//	LL res[4]={0};
//	while(c--)
//	{
//		res[0]=0;
//		res[1]=0;
//		res[2]=0;
//
//		FOR(i,0,2)
//			FOR(j,0,2)
//			res[i]+=V[j]*M[i][j];
//
//		V[0]=res[0];
//		V[1]=res[1];
//	//	V[2]=1;
//
//	}
//
//	point ret = {res[0]+r.x , res[1]+r.y};
//	return ret;
//}
//
//LL dist(point a , point b)
//{
//	LL ret = ((a.x-b.x)*(a.x-b.x))+((a.y-b.y)*(a.y-b.y));
//	return ret;
//}
//
//
//bool isSquare(vector<point>&P)
//{
//	vector<LL>d;
//	FOR(i,0,4)
//		FOR(j,0,i)
//		d.push_back(dist(P[i],P[j]));
//	sort(d.begin(),d.end());
//
//	bool rhom= (d[0]==d[1] && d[1]==d[2] && d[2]==d[3]);
//	bool rect = (d[4]==d[5]);
//	if (rhom && rect && d[0]*d[1]>0)
//		return true;
//	return false;
//}
//vector<point>V;
//vector<pair<point,point> >P;
//int solve(int idx)
//{
//	if(idx==4)
//		return (isSquare(V)) ? 0 : (1<<25);
//
//	int mini = 1<<25;
//	FOR(k,0,4)
//	{
//		if(k)
//			V[idx] = rotateP(P[idx].first,P[idx].second,k);
//		else 
//			V[idx]=P[idx].first;
//		mini = min(mini,solve(idx+1)+k);
//
//	}
//	return mini;
//}
//
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	while(cin>>n)
//	{
//		FOR(i,0,n)
//		{
//			P.clear();
//			V.clear();
//			FOR(j,0,4)
//			{
//				int x,y,rx,ry;
//				cin>>x>>y>>rx>>ry;
//				point p = {x,y};
//				point r = {rx,ry};
//				P.push_back(mp(p,r));
//				V.push_back(p);
//			}
//
//			int mini = solve(0);
//			if(mini!=1<<25)
//				cout << mini <<endl;
//			else
//				cout << -1 <<endl;
//		}
//
//
//	}
//	return 0;
//}
//
//
//
