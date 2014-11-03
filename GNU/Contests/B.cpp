#include <bits/stdc++.h>

#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define ALL(A) A.begin(), A.end()
#define Set(a, s) memset(a, s, sizeof (a))
#define pb push_back
#define mp make_pair
typedef long long LL;

using namespace std;

struct point
{
    double x,y;
    point()
    {
        x=y=0;
    }
    point(double x, double y): x(x) , y(y)
    {
    }

};

map<pair<int,int>, set<double> >M;

double slope(point a , point b)
{
    return (b.y-a.y)/(b.x-a.x);
}

double inter(point a , point b)
{
    return a.y - slope(a,b)*a.x;
}

double perp(double s)
{
    return -(1.0/s);
}

vector< pair<int,int> >V;

int main()
{
    ios_base::sync_with_stdio(0);
    freopen("input.txt", "r" , stdin);

    int n;
    while(cin>>n)
    {

        M.clear();
        FOR(i,0,n)
            {
                int a,b,c,d;
                cin>>a>>b>>c>>d;
        //        V.pb(mp(point(a,b),point(c,d)));
                M[slope(point(a,b),point(c,d))].insert(inter(point(a,b),point(c,d)));
            }


    map<double, set<double> > ::iterator it;
    LL res=0;
    for(it=M.begin() ; it!=M.end() ; it++)
    {
            map<double, set<double> > ::iterator p;
            p=M.find(perp(it->first));
            if(p==M.end())continue;
            LL c1 = it->second.size();
            LL c2 = p->second.size();
            res += ((c1*(c1-1))) * ((c2*(c2-1)));
    }

        cout << res/2 << endl;
    }

    return 0;
}

