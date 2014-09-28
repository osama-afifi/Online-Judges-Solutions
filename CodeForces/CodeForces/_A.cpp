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
//int arr[10];
//int main()
//{
//	freopen("input.in", "r" , stdin);
//	
//	map<int,int>M;
//	bool ani=0;
//
//	bool f=0;
//		FOR(i,0,6)
//		{
//			cin>>arr[i];
//		M[arr[i]]++;
//		if(M[arr[i]]==4)
//			ani=1;
//				if(M[arr[i]]==5)
//			f=1;
//		}
//		
//		if(ani && M.size()==1)
//			cout << "Elephant" <<endl;
//		else if(!f && ani && M.size()==2)
//			cout << "Elephant" <<endl;
//		else if(ani && (f || M.size()==3))
//			cout << "Bear" <<endl;
//		else
//			cout << "Alien" <<endl;
//		
//		
//		
//	return 0;
//}