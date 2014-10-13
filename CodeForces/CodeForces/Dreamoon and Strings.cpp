//
//
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
//int nxt[2009][30];
//int nxtP[2009];
//int dp[2009][2009];
//	string s,p;
//
//int solve(int idx , int k)
//{
//    if(idx==s.size())
//        if(k)
//            return -1e9;
//        else return 0;
//    if(k<0)    return -(1e9);
//    if(dp[idx][k]!=-1)    return dp[idx][k];
//    int maxi = -(1e9);
//    maxi = max(maxi , solve(idx+1,k-1));
//    maxi = max(maxi , solve(idx+1,k));
//    if(nxtP[idx]!=-1)
//        maxi = max(maxi , solve(nxtP[idx],k-(nxtP[idx]-idx-p.size()))+1);
//    return dp[idx][k]=maxi;
//}
//
//int main()
//{
//	freopen("input.txt", "r" , stdin);
//
//
//	while(cin >> s >> p)
//	{
//		Set(nxt,-1);
//		for(int i = s.size()-1 ; i>=0 ; i--)
//		{
//			FOR(j,0,27)
//				nxt[i][j]=nxt[i+1][j];
//			nxt[i][s[i]-'a']=i;
//		}
//		Set(nxtP,-1);
//
//		for(int i = 0 ; i+p.size()<=s.size();i++)
//        {
//            int cur = i;
//            bool ok=1;
//            FOR(j,0,p.size())
//            {
//                    if(nxt[cur][p[j]-'a']==-1)
//                        {
//                            ok=0;
//                            break;
//                        }
//                    cur=nxt[cur][p[j]-'a']+1;
//            }
//            if(ok)
//                nxtP[i]=cur;
//
//        }
//        Set(dp,-1);
//        FOR(i,0,s.size()+1)
//            cout << solve(0,i) << " ";
//            cout<<endl;
//	}
//	return 0;
//}
