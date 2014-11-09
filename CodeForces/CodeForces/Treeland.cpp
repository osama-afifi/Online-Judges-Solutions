//#include <bits/stdc++.h>
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define  Set(a,b) memset(a,b,sizeof(a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//
//using namespace std;
//
//
//int D[2009][2009];
//vector<pair<int,int> >res;
//void solve(vector<int>G)
//{
//    if(G.size()<2)
//        return;
//    int a=G[0];
//    int b=G[1];
//    FOR(i,1,G.size())
//        if(D[a][G[i]]<D[a][b])
//        {
//            b=G[i];
//        }
//        res.pb(mp(a,b));
//        vector<int>G1,G2;
//    FOR(i,1,G.size())
//        if(G[i]!=b)
//        {
//            if(D[G[i]][a]<D[G[i]][b])
//                G1.push_back(G[i]);
//            else
//                G2.push_back(G[i]);
//        }
//        G1.push_back(a);
//        G2.push_back(b);
//    solve(G1);
//    solve(G2);
//}
//
//int main()
//{
//    ios_base::sync_with_stdio(0);
//    freopen("input.txt", "r", stdin);
//
//    int t;
//    cin>>t;
//    while(t--)
//        {
//            res.clear();
//            int n;
//            cin>>n;
//            FOR(i,0,n)
//                FOR(j,0,n)
//                {
//                    int num;cin>>num;
//                    D[i][num-1]=j;
//
//                }
//        vector<int>G;
//    FOR(i,0,n)
//        G.pb(i);
//    solve(G);
//		FOR(i,0,n-1)
//            cout << res[i].first+1 << " " << res[i].second+1 <<"\n";
//        cout <<"\n";
//    }
//
//    return 0;
//}
//
