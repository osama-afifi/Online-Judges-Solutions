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
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) A.begin(), A.end()
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//
//using namespace std;
//int M[55][21];
//int C[1<<21];
//double dp[1<<21];
//LL B[1<<21];
//int vis[1<<21];
//int n,m;
//string arr[51];
//int target;
//
//bool p2(LL x)
//{
//    return (x&(x-1)==0);
//}
//int cbit(LL x)
//{
//    int c=0;
//    while(x>0)
//    {
//        ++c;
//        x -= (x&-x);
//    }
//    return c;
//}
//
//LL done(int mask)
//{
//    LL ret=((1LL)<<n)-1;
//    FOR(i,0,m)
//		if(mask & (1<<i))
//        ret &= M[target][i];
//        return ret;
//}
//
//double solve(int mask)
//{
//    if(B[mask]==1LL<<target)
//        return 0;
//    if(vis[mask]==target)
//        return dp[mask];
//    double ret=0;
//    double z = m-C[mask];
//	if(z==0)return 0;
//    FOR(i,0,m)
//    if(!(mask & (1<<i)))
//        ret += solve(mask | (1<<i)) + (1.0);
//	vis[mask]=target;
//      return dp[mask]=ret/z;
//}
//
//int main()
//{
//    ios_base::sync_with_stdio(0);
//    freopen("input.in", "r" , stdin);
//    while(cin>>n)
//    {
//        Set(M,0);
//        Set(dp,-1);
//        FOR(i,0,n)
//            cin>>arr[i];
//        m=arr[0].size();
//		FOR(i,0,1<<m)
//			C[i] = cbit(i);
//       FOR(i,0,n)
//            FOR(j,0,m)
//                FOR(k,0,n)
//                {
//                    if(arr[i][j]==arr[k][j])
//                        M[i][j] |= 1LL<<k;
//                }
//
//	   Set(vis,-1);
//        double res =0;
//        FOR(i,0,1)
//        {
//            target = i;
//			 for(int j = 0 ; j<(1<<m) ; j++)			
//			   B[j] = done(j);
//            res += solve(0);
//        }
//
//        cout <<  setprecision(10) << fixed << res / double(n) <<endl;
//    }
//
//
//    return 0;
//}
//
//
