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
//#include <cstring>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define all(c) c.begin() , c.end()
//#define mp(c) make_pair(c)
//#define pb push_back(c)
//
//typedef long long LL;
//
//using namespace std;
//
//int arr[200009];
//
//int main() 
//{
//	freopen("input.in","r",stdin);
//	int n,m;
//	while(cin>>n>>m)
//	{
//		int temp;
//		FOR(i,0,m)
//			scanf("%d %d" , &temp , &arr[i]);
//		sort(arr,arr+m);
//		reverse(arr,arr+m);
//		int b = 1 , e= m , res = -1;
//		while(b<=e)
//		{
//			LL mid = (b+e)/2;
//			LL x=0;
//			if(mid&1)
//				x = (mid*(mid-1))/2 +1;
//			else x = (mid*(mid-1))/2 +mid/2;
//		
//			if(x<=n)
//				b = mid+1 , res = mid;
//			else
//				e= mid-1;
//		}
//		LL sum = 0;
//		FOR(i,0,res)
//			sum+=arr[i];
//		cout<<sum<<endl;
//
//	
//	}
//	return 0;
//}