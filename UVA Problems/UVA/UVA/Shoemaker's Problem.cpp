//#include <iostream>
//#include <math.h>
//#include <stdio.h>
//#include <algorithm>
//
//using namespace std;
//
//
//
//struct ratio
//{
//	double r;
//	int index;
//	bool operator <  ( const ratio &a) const
//	{
//		if(r!=a.r)
//			return a.r< r;
//
//		return a.index>index;
//
//	}
//
//};
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
//// end FAST integer input
//
//ratio arr[2007];
//
//int main()
//{
//
//	freopen("input.in","r",stdin);
//
//	int n,t;
//
//	readint(t);
//
//	while(t--)
//	{
//	readint(n);
//
//	int n1,n2;
//
//	for(int i = 0 ; i<n ; i++)
//	{
//	readint(n1);
//	readint(n2);
//	arr[i].index=i;
//	arr[i].r=(double)n2/(double)n1;
//	}
//
//	sort(arr,arr+n);
//
//	printf("%d",arr[0].index+1);
//	//cout<<arr[0].index+1;
//
//	for(int i = 1 ; i< n ; i++)
//		printf(" %d",arr[i].index+1);
//	
//	putchar('\n');
//
//	if(t)putchar('\n');
//	}
//
//return 0;
//}