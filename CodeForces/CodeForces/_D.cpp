//#include<iostream>
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
//
//struct student{
// int ab;
// int cost;
// int idx;
// bool operator < (const student &s) const
// {
//     if(cost!=s.cost)
//        return cost<s.cost;
//     return ab>s.ab;
// }
//};
//
//pair<int,int> b[100009];
//student s[100009];
//int ans[100009];
//int temp[100009];
//int n,m;
//int P;
//bool solve(int days)
//{
//    int q=0;
//    int w=0;
//    set<pair<int,int>>S;
//    FOR(i,0,m)
//        S.insert(mp(-b[i].first,b[i].second));
//    LL pass=0;
//    Set(temp,-1);
//    while(q<n)
//    {
//       int d=0;
//        set<pair<int,int> >::iterator it;
//
//        vector<pair<int,int> >D;
//        for(it=S.begin();d<days && it!=S.end();it++)
//        {
//            if(-(*it).first<=s[q].ab)
//                d++,D.push_back(*it),temp[(*it).second]=s[q].idx;
//        }
//        FOR(i,0,D.size())
//            S.erase(D[i]);
//        if(D.size())pass+=s[q].cost;
//        q++;
//    }
//    if(pass>P)
//        return false;
//    if(S.size())
//            return false;
//    return true;
//
//}
//
//
//
//
//
//int main()
//{
//    ios_base::sync_with_stdio(0);
//    freopen("input.in", "r" , stdin);
//
//    while(cin>>n>>m>>P)
//    {
//        FOR(i,0,m)
//            cin>>b[i].first,b[i].second=i;
//        FOR(i,0,n)
//            cin>>s[i].ab,s[i].idx=i;
//        FOR(i,0,n)
//            cin>>s[i].cost;
//        sort(s,s+n);
//        sort(b,b+m);
//        int b=0,e=m,res=-1;
//        while(b<=e)
//        {
//            int mid = (b+e)/2;
//            if(solve(mid))
//            {
//                  e=mid-1,res=mid;
//                  FOR(i,0,m) ans[i]=temp[i];
//            }
//
//            else b=mid+1;
//        }
//        if(res==-1)
//            cout << "NO" <<endl;
//        else
//            {
//                cout << "YES" <<endl;
//                FOR(i,0,m)
//                cout << ans[i] << " ";
//                cout <<endl;
//
//            }
//    }
//
//    return 0;
//}
//
