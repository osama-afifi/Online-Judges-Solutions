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
//int n,k;
//
//
////int arr[100];
//
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//
//
//	while(cin>>n>>k)
//	{
//	//	Set(arr,0);
//		map<int,int>M;
//		FOR(i,0,n)
//		{
//			char c;
//			cin>>c;
//			M[c]++;
//	//		arr[c-'A']++;
//		}
//		vector<LL>V;
//		for(char i='A' ; i<='Z' ; i++)
//			V.pb(M[i]);
//		sort(V.begin(), V.end());
//		reverse(V.begin(), V.end());
//		LL res=0;
//		FOR(i,0,V.size())
//		{
//			if(k<=0)break;
//			if(V[i]<=k)
//				res += V[i]*V[i];
//			else res += k*k;
//			k-=V[i];
//		}
//
//		cout << res <<endl;
//	}
//	return 0;
//}