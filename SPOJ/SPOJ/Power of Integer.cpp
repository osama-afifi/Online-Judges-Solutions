//
//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <math.h>
//#include <map>
//#include <set>
//#include <queue>
//#include <time.h>
//#include <limits.h>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair 
//#define pb push_back 
//typedef long long LL;
//
//
//int main() 
//{
//	freopen("input.in","r",stdin);
//
//	LL a,b;
//	LL MAX = 1000000000000000000LL;
//	while(cin>>a>>b)
//	{
//		if(!a && !b)break;
//		LL sum=0;
//		LL arr[70];
//		Set(arr,0);
//		for(LL k=64; k>=1 ; k--)
//		{
//			LL l = powl(a,(1.0/(long double)(k)));
//			while(powl(l,k)<=MAX && powl(l,k)<a)
//				l++;
//			if(powl(l,k)>MAX)
//				continue;
//			if(powl(l,k)>b)continue;
//			LL r = powl(b,(1.0/(long double)(k)));
//			while(powl(r,k)>MAX)
//				r--;
//			while(powl(r,k)>b)
//				r--;
//			if(powl(r,k)<a)continue;
//			arr[k]+=(r-l+1);
//			for(int i=2*k;i<=64;i+=k)
//				arr[k]-=arr[i];
//			sum+=arr[k]*k;
//		}
//		cout << sum<<endl;
//	}
//
//	return 0;
//}
