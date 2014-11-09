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
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) A.begin(), A.end()
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//
//
//int dp[64][2][2];
//int L[65];
//int R[65];
//int solve(int idx , bool b1 , bool b2)
//{
//    if(idx==64)
//        return 0;
//    if(dp[idx][b1][b2]!=-1)
//        return dp[idx][b1][b2];
//    int maxi=0;
//
//    if((!b1) || L[idx]==0)
//        maxi = max(maxi, solve(idx+1,b1&(L[idx]==0),b2&(R[idx]==0)) );
//	if((!b2) || R[idx]==1)
//        maxi = max(maxi, solve(idx+1,b1&(L[idx]==1),b2&(R[idx]==1))+1 );
//	if(!b1 && !b2)
//		maxi = max(maxi, solve(idx+1,b1,b2)+1 );
//
//    return dp[idx][b1][b2]=maxi;
//}
//
//
// LL x;
//
//void print(int idx , bool b1 , bool b2)
//{
//    if(idx==64)
//        return;
//		int opt = solve(idx,b1,b2);
//    int maxi=0;
//
//    if((!b1) || L[idx]==0)
//	{
//		if(opt == solve(idx+1,b1&(L[idx]==0),b2&(R[idx]==0)))
//		{
//			print(idx+1,b1&(L[idx]==0),b2&(R[idx]==0));
//			return;
//		}
//	
//	}
//     
//	    if((!b2) || R[idx]==1)
//		if(opt == solve(idx+1,b1&(L[idx]==1),b2&(R[idx]==1))+1)
//		{
//			x |= (1LL<<(63-idx));
//			print(idx+1,b1&(L[idx]==1),b2&(R[idx]==1));
//			return;
//		}
//
//	if(!b1 && !b2)
//	{
//		if(opt == solve(idx+1,b1,b2)+1)
//		{
//			x |= (1LL<<(63-idx));
//			print(idx+1,b1,b2);
//			return;
//		}
//		
//	}
//}
//
//int main()
//{
//    ios_base::sync_with_stdio(0);
//    freopen("input.in", "r" , stdin);
//    int n;
//    while(cin>>n)
//   {
//        while(n--)
//        {
//            Set(dp,-1);
//            LL l,r;
//            cin>>l>>r;
//            Set(L,0);
//            Set(R,0);
//            FOR(i,0,64)
//                {
//                    L[i]= (l&(1LL<<i)) ? 1 : 0;
//                    R[i]= (r&(1LL<<i)) ? 1 : 0;
//                }
//            reverse(L,L+64);
//            reverse(R,R+64);
//			x=0;
//            int res = solve(0,1,1);
//			print(0,1,1);
//          //  cout << res <<endl;
//			cout << x <<endl;
//        }
//
//
//   }
//    return 0;
//}
//
//
