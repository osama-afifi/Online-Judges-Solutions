//
//#include <vector>
//#include <list>
//#include <map>
//#include <set>
//#include <queue>
//#include <deque>
//#include <stack>
//#include <bitset>
//#include <algorithm>
//#include <functional>
//#include <numeric>
//#include <utility>
//#include <sstream>
//#include <iostream>
//#include <iomanip>
//#include <cstdio>
//#include <cmath>
//#include <cstdlib>
//#include <ctime>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair
//
////int M[105];
//int N;
//
//	int arr[1009];
//int main()
//{
//	freopen("input.in","r",stdin);
//	while(cin>>N)
//	{
//	
//		FOR(i,0,N)
//			cin>>arr[i];
//
//		int maxi = 0;
//		for(int i = 0 ; i<N ; i++)
//			for(int j = i ; j<N ; j++)
//		{
//			for(int k = i ; k<=j ; k++)
//				arr[k] = 1-arr[k];
//			int sum=0;
//			FOR(k,0,N)
//				sum+=arr[k];
//			if(sum>maxi)
//				maxi = sum;
//
//			for(int k = i ; k<=j ; k++)
//				arr[k] = 1-arr[k];
//		}
//		cout<<maxi<<endl;
//	}	
//
//}
/////////////////////////
