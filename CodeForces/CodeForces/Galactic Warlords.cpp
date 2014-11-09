//#include <bits/stdc++.h>
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
//typedef complex<long double> point;
//#define sz(a) ((int)(a).size())
//#define all(n) (n).begin(),(n).end()
//#define EPS 1e-9
//#define OO 1e9
//#define X real()
//#define Y imag()
//#define vec(a,b) ((b)-(a))
//#define polar(r,t) ((r)*exp(point(0,(t))))
//#define angle(v) (atan2((v).Y,(v).X))
//#define length(v) ((long double)hypot((v).Y,(v).X))
//#define lengthSqr(v) (dot(v,v))
//#define dot(a,b) ((conj(a)*(b)).real())
//#define cross(a,b) ((conj(a)*(b)).imag())
//#define rotate(v,t) (polar(v,t))
//#define rotateabout(v,t,a) (rotate(vec(a,v),t)+(a))
//#define reflect(p,m) ((conj((p)/(m)))*(m))
//#define normalize(p) ((p)/length(p))
//#define same(a,b) (lengthSqr(vec(a,b))<EPS)
//#define mid(a,b) (((a)+(b))/point(2,0))
//#define perp(a) (point(-(a).Y,(a).X))
//#define colliner pointOnLine
//
//bool intersect(const point &a, const point &b, const point &p, const point &q,  point &ret)
// {
////handle degenerate cases
//long double d1 = cross(p - a, b - a);
//long double d2 = cross(q - a, b - a);
//ret = (d1 * q - d2 * p) / (d1 - d2);
//if (fabs(d1 - d2) > EPS)
//return 1;
//return 0;
//}
//
//int main()
//{
//    ios_base::sync_with_stdio(0);
//freopen("input.txt", "r" , stdin);
//    int w,n;
//    while(cin>>w>>n)
//    {
//    vector<pair<point,point> >V;
//    long double a,b,c,d;
//    bool para=1;
//    FOR(i,0,n)
//    {
//            cin>>a>>b>>c>>d;
//            point p1(a,b);
//            point p2(c,d);
//            V.pb(mp(p1,p2));
//
//    }
//     FOR(i,1,n)
//     {
//         point inter;
//            para &= (cross(V[0].first-V[0].second,V[i].first-V[i].second))==0;
//     }
//     int repeat=0;
//     FOR(i,0,n)
//        FOR(j,0,i)
//           // if(cross(V[i].first-V[i].second,V[j].first-V[j].second)==0 && cross(V[i].first-V[i].second,V[i].first-V[j].second)==0)
//            if (!cross(V[i].first-V[j].first,V[j].second-V[j].first) && !cross(V[i].second-V[j].first,V[j].second-V[j].first))
//            {
//                repeat++;
//                break;
//            }
//
//
//    n -= repeat;
//    if (para) {
//	if (w <= n+1)
//	    cout << 0 << endl;
//	else
//	    cout << max(1, (w+1)/2-n) << endl;
//    } else
//	cout << max(0, (w+1)/2-n) << endl;
//
//    }
//
//    return 0;
//}
//
