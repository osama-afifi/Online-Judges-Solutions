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
//LL arr[10009][2];
//int dp[10009][2];
//int n;
//
//int solve(int idx, bool b)
//{
//    if(idx==n)
//        return 0;
//    int mini = 1e9;
//    if(dp[idx][b]!=-1)return dp[idx][b];
//    if(arr[idx][b]<arr[idx+1][0] && arr[idx][b^1]<arr[idx+1][1])
//        mini = min(mini, solve(idx+1,0));
//	int temp =b^1;
//    if(arr[idx][temp]<arr[idx+1][0] && arr[idx][temp^1]<arr[idx+1][1])
//        mini = min(mini, solve(idx+1,1)+1);
//	return dp[idx][b] = mini;
//}
//
//int main()
//{
//    freopen("input.in", "r" , stdin);
//    int t;
//    cin>>t;
//    while(t--)
//    {
//
//            cin>>n;
//            arr[0][0]=arr[0][1]=-1e18;
//            FOR(i,0,n) 
//				cin>>arr[i+1][0];
//			FOR(i,0,n) 
//				cin>>arr[i+1][1];
//           
//            arr[n+1][0]=arr[n+1][1]=1e18;
//            bool ok=1;
//            Set(dp,-1);
//            int res = solve(0,0);
//            if(res==1e9)
//                cout << -1 <<endl;
//            else
//                cout << res <<endl;
//    }
//    return 0;
//}
//
//
