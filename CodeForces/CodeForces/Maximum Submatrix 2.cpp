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
//char arr[5009][5009];
//int cum[5009][5009];
//int freq[5009][5009];
//
//int main()
//{
//    ios_base::sync_with_stdio(0);
//    freopen("input.txt", "r" , stdin);
//
//    int n,m;
//    while(cin>>n>>m)
//    {
//        Set(cum,0);
//        Set(freq,0);
//        FOR(i,0,n)FOR(j,0,m)cin>>arr[i][j],arr[i][j]-='0';
//        FOR(i,0,n)
//        {
//            int c=0;
//            FOR(j,0,m)
//            {
//            if(arr[i][j])
//                c++;
//            else c=0;
//            cum[i][j]=c;
//            }
//        }
//        FOR(j,0,m)
//        {
//            FOR(i,0,n)
//                freq[j][cum[i][j]]++;
//        }
//        int res=0;
//
//        FOR(j,0,m)
//        {
//            int mini=1e9;
//            int sum=0;
//            for(int q=m ; q>=0 ; q--)
//                {
//                    sum +=freq[j][q];
//                    mini = min(mini,freq[j][q]);
//                    res = max(res, q*sum); // width * height
//                }
//        }
//       cout << res <<endl;
//    }
//
//
//    return 0;
//}
//
