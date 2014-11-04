#include <vector>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <complex>
#include <iostream>
using namespace std;

#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define ALL(A) A.begin(), A.end()
#define Set(a, s) memset(a, s, sizeof (a))
#define pb push_back
#define mp make_pair
typedef long long LL;
typedef complex<long double> point;


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


#define sz(a) ((int)(a).size())
#define X real()
#define Y imag()
#define EPS 1e-9
#define vec(a,b) ((b)-(a))
#define length(v) ((long double)hypot((v).Y,(v).X))
#define lengthSqr(v) (dot(v,v))
#define dot(a,b) ((conj(a)*(b)).real())
#define cross(a,b) ((conj(a)*(b)).imag())
#define same(a,b) (lengthSqr(vec(a,b))<EPS)


using namespace std;


map<pair<int,int>, vector< pair<point,point> > >M;

double pointLineDist(point a, point b, point p) 
{
    if (same(a,b))
        return hypot(a.X - p.X, a.Y - p.Y);
    return fabs(cross(vec(a,b),vec(a,p)) / length(vec(a,b)));
}

int gcd(int a , int b)
{
	if(a==0)
		return b;
	return gcd(b%a,a);
}

pair<int,int> slope(point a , point b)
{
	if(b.Y-a.Y==0)return mp(0,0);
	if(b.X-a.X==0)return mp(1,0);
	int sign = ((b.Y-a.Y)*(b.X-a.X)<0) ? -1: 1;
	int g=gcd(abs(b.Y-a.Y),abs(b.X-a.X));
    return mp(sign*(abs(b.Y-a.Y)/g),abs(b.X-a.X)/g);
}	

pair<int,int> perp(pair<int,int>s)
{
	int sign = (s.first>=0) ? 1 : -1;
	if(s == mp(1,0) || s == mp(-1,0))
		return mp(0,0);
	if(s == mp(0,0))
		return mp(1,0);
	return mp((-sign)*(s.second),abs(s.first));
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
		vector< pair<point,point> > V1 = it->second;

            p=M.find(perp(it->first));
            if(p==M.end())continue;
			vector< pair<point,point> > V2 = p->second;
			map<float,int>M1,M2;
			map<float,int> :: iterator iter;
			FOR(i,0,V1.size())
				FOR(j,i+1,V1.size())
					M1[pointLineDist(V1[i].first,V1[i].second,V1[j].first)]++;
			FOR(i,0,V2.size())
				FOR(j,i+1,V2.size())
			{
				
				iter = M1.find(pointLineDist(V2[i].first,V2[i].second,V2[j].first));
				if(iter!=M1.end())
					res+=iter->second;
			}
			for(map<float,int>::iterator c = M1.begin() ; c!=M1.begin() ; c++)
				res += c->second * M2[c->first];

    }

        cout << res/2 << endl;
    }

    return 0;
}