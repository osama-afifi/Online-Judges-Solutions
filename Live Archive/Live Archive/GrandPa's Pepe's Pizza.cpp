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
//int arr[100009];
//
//
//int main()
//{
//    ios_base::sync_with_stdio(0);
//    freopen("input.txt", "r" , stdin);
//
//    int c,n;
//    while(cin>>c>>n)
//    {
//        FOR(i,0,n)cin>>arr[i];
//        int mini=1<<25;
//        int maxi=0;
//
//    bool found=0;
//    int arc=c/n;
//    arr[n]=arr[0]+c;
//    n++;
//
//    for(int d = arr[0] ; d<arr[1] ; d++)
//    {
//        bool ok=1;
//        int cur=d;
//        FOR(i,1,n)
//            if(cur<arr[i] && cur+arc>=arr[i])
//                cur+=arc;
//            else {ok=0;break;}
//        if(ok)
//        {
//            found=1;
//            break;
//        }
//    }
//
//
//        if(found)
//        cout << "S" <<endl;
//        else
//            cout << "N" <<endl;
//
//    }
//
//
//    return 0;
//}
//
