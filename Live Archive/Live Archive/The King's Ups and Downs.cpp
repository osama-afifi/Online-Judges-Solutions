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
//LL dp[1<<21][21][2];
//
//LL solve(int mask, int p, bool b)
//{
//	if(mask==0)
//		return 1;
//	if(dp[mask][p][b]!=-1)
//		return dp[mask][p][b];
//	LL sum=0;
//	FOR(i,1,21)
//		if((mask & (1<<(i-1))))
//			if(p==0 || (!b && i>p) || (b && i<p))
//				sum+=solve(mask-(1<<(i-1)),i,b^1);
//	return dp[mask][p][b]=sum;
//}
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//	freopen("output.out", "w" , stdout);
//	LL arr[21] = {0,1,2,4,10,32,122,544,2770,15872,101042,707584,5405530,44736512,398721962,3807514624,38783024290,419730685952,4809759350882,58177770225664,740742376475050};
////		Set(dp,-1);
////		solve((1<<20)-1,0,0);
//		
//		//FOR(i,1,21)
//		//{
//		//	Set(dp,-1);
//		//	arr[i] = solve((1<<i)-1,0,0);
//		//}
//		//
//		//FOR(i,1,21)
//		//	cout << 2*arr[i] << "," ;
//	int k,t,n;
//	cin>>t;
//	int kase=0;
//	while(t--)
//	{
//		cin>>k;
//		cin>>n;
//		LL res = arr[n];
//		cout <<  ++kase << " " << res << endl;
//	}
//
//	return 0;
//}