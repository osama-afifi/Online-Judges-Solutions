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
//LL freq[1009][1009];
//
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	LL a,b,n;
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		cin>>n>>a>>b;
//		Set(freq,0);
//		for(int i = 2; i<=a ; i++)
//		{
//			while(a%i==0)
//				freq[0][i]++,a/=i;
//		}
//				for(int i = 2; i<=b ; i++)
//		{
//			while(b%i==0)
//				freq[1][i]++,b/=i;
//		}
//
//	
//				FOR(i,2,n+1)
//					FOR(j,0,1001)
//						freq[i][j] = freq[i-1][j]+freq[i-2][j];
//
//				FOR(i,2,1001)
//					if(freq[n][i])
//						cout << i << " " << freq[n][i] <<endl;
//			//	if(t)
//					cout <<endl;
//	}
//
//	return 0;
//}