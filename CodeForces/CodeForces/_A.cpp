#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<map>
#include<sstream>
#include<queue>
#include<set>
#include<stack>
#include<math.h>
#include<complex>

#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define ALL(A) A.begin(), A.end()
#define Set(a, s) memset(a, s, sizeof (a))
#define pb push_back
#define mp make_pair
typedef long long LL;

//struct point
//{
//    int x,y;
//    point()
//    {
//        x=y=0;
//    }
//    point(int x, int y): x(x) , y(y)
//    {
//    }
//
//};

typedef complex<long double> point;
#define sz(a) ((int)(a).size())
#define all(n) (n).begin(),(n).end()
#define EPS 1e-9
#define OO 1e9
#define X real()
#define Y imag()
#define vec(a,b) ((b)-(a))
#define polar(r,t) ((r)*exp(point(0,(t))))
#define angle(v) (atan2((v).Y,(v).X))
#define length(v) ((long double)hypot((v).Y,(v).X))
#define lengthSqr(v) (dot(v,v))
#define dot(a,b) ((conj(a)*(b)).real())
#define cross(a,b) ((conj(a)*(b)).imag())
#define rotate(v,t) (polar(v,t))
#define rotateabout(v,t,a) (rotate(vec(a,v),t)+(a))
#define reflect(p,m) ((conj((p)/(m)))*(m))
#define normalize(p) ((p)/length(p))
#define same(a,b) (lengthSqr(vec(a,b))<EPS)
#define mid(a,b) (((a)+(b))/point(2,0))
#define colliner pointOnLine


using namespace std;


map<pair<int,int>, vector< pair<point,point> > >M;

long double pointLineDist(point a, point b, point p) 
{
    if (same(a,b))
        return hypot(a.X - p.X, a.Y - p.Y);
    return fabs(cross(vec(a,b),vec(a,p)) / length(vec(a,b)));
}

pair<int,int> slope(point a , point b)
{
	if(b.X-a.X==0)return mp(1,0);
	int sign = (-(b.Y-a.Y)*(b.X-a.X)<0) ? -1: 1;
	int g=gcd(abs(b.Y-a.Y),abs(b.X-a.X));
    return mp(sign*abs(b.Y-a.Y)/g,abs(b.X-a.X)/g);
}	

int gcd(int a , int b)
{
	if(a==0)
		return b;
	return gcd(b%a,a);
}

pair<int,int> perp(pair<int,int>s)
{
	return mp(-s.second,abs(s.first));
}

vector< pair<int,int> >V;

int main()
{
    ios_base::sync_with_stdio(0);
    freopen("input.in", "r" , stdin);

    int n;
    while(cin>>n)
    {

        M.clear();
        FOR(i,0,n)
            {
                int a,b,c,d;
                cin>>a>>b>>c>>d;
				//V.pb(mp(point(a,b),point(c,d)));
				M[slope(point(a,b),point(c,d))].push_back(mp(point(a,b),point(c,d)));
            }

    map<pair<int,int>, vector< pair<point,point> > > ::iterator it;
	 map<pair<int,int>, vector< pair<point,point> > > ::iterator p;
    LL res=0;
    for(it=M.begin() ; it!=M.end() ; it++)
    {
		pair<int,int>slope = it->first;
		vector< pair<point,point> > &V = it->second;

            p=M.find(perp(it->first));
            if(p==M.end())continue;
            LL c1 = it->second.size();
            LL c2 = p->second.size();
            res += ((c1*(c1-1))/2) * ((c2*(c2-1))/2);
    }

        cout << res/2 << endl;
    }

    return 0;
}