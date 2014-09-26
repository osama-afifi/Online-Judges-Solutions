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
//LL n;
//LL arr[1000009];
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	
//	while(cin>>n)
//	{
//		map<LL,LL>M;
//		FOR(i,0,n)
//			cin>>arr[i];
//		LL mini = 1e9+5;
//		LL maxi=0;
//		FOR(i,0,n) {mini = min(mini,arr[i]);maxi = max(maxi,arr[i]);M[arr[i]]++;}
//		LL target = maxi-mini;
//		int c=0;
//		if(M.size()==1)
//		{
//			cout << target << " " << (n*(n-1))/2 <<endl;
//			continue;
//		}
//
//		cout << target << " " << M[maxi]*M[mini] <<endl;
//	}
//
//	return 0;
//}