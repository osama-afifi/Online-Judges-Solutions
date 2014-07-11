//
//// Method : Segment Trees
//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <set>
//#include <queue>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair 
//#define MAX 100000
//using namespace std;
//
//// {{{ FAST integer input
//#define X10(n) ((n << 3) + (n << 1))
//const int MAXR = 65536;
//char buf[MAXR], *lim = buf + MAXR - 1, *nw = lim + 1;
//
//using namespace std;
//
//bool adapt()
//{ // Returns true if there is a number waiting to be read, false otherwise
//	while(nw <= lim && !isdigit(*nw)) ++nw;
//	if(nw > lim){
//		int r = fread(buf, 1, MAXR-1, stdin);
//		buf[r] = 0;
//		lim = buf + r - 1;
//		if(r == MAXR - 1){
//			while(isdigit(*lim)) ungetc(*lim--, stdin);
//			if(*lim == '-') ungetc(*lim--, stdin);
//		}
//		nw = buf;
//	}
//	while(nw <= lim && !isdigit(*nw)) ++nw;
//	return nw <= lim;
//}
//
//bool readint(int& n){ // Returns true on success, false on failure
//	if(!adapt()) return false;
//	bool ngtv = *(nw - 1) == '-';
//	for(n = 0; isdigit(*nw); n = X10(n) + *nw++ - '0');
//	if(ngtv) n = -n;
//	return true;
//}
//
//int n,m;
//int arr[30009];
//int sor[30009];
//int T[30009];
//
//void upd(int i ,int v)
//{
//	while(i<=30000)
//	{
//		T[i]+=v;
//		i += i&-i;
//	}
//}
//
//int sum(int i)
//{
//	int sum = 0;
//	while(i>0)
//	{
//		sum+=T[i];
//		i-= i&-i;
//	}
//	return sum;
//}
//
//inline int bs(int b , int e , int v)
//{
//	int mid;
//	while(b<e)
//	{
//		mid = (b+e)>>1;
//		if(sor[mid]>v)
//			e=mid-1;
//		else
//			b= mid+1;	
//	}
//	return b;
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	while(readint(n))
//	{
//		FOR(i,0,n)
//		{
//			readint(arr[i]);
//			sor[i] = arr[i];
//		}
//		sort(sor,sor+n);
//
//
//		readint(m);
//
//		while(m--)
//		{
//			int a,b,v;
//			
//			readint(a);
//			readint(b);
//			readint(v);
//			--a,--b;
//			printf("%d\n" , bs(a,b,v)+1);
//		}
//	}
//	return 0;
//}
