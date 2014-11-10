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
//int arr[2000009];
//bool vis[2000009];
//int prv[2000009];
//int main()
//{
//    ios_base::sync_with_stdio(0);
//    freopen("input.txt", "r" , stdin);
//    int n;
//    while(cin>>n)
//    {
//        Set(vis,0);
//        int mx=0;
//
//        FOR(i,0,n)  cin>>arr[i], mx = max(mx,2*arr[i]);
//        FOR(i,0,n) vis[arr[i]]=1;
//        sort(arr,arr+n);
//        n = unique(arr,arr+n)-arr;
//        int last=1;
//        FOR(i,1,mx+1)
//        {
//            prv[i]=last;
//            last = (vis[i] ? i : last);
//        }
//
//            int res=0;
//        FOR(i,0,n)
//            for(int j=arr[i] ; j<mx+1 ; j+=arr[i])
//                if(prv[j]>=arr[i])
//                    res = max(res, prv[j]%arr[i]);
//        cout << res <<endl;
//    }
//
//    return 0;
//}
//
