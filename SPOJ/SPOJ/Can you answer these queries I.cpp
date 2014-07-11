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
//#define MAX 50007 
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
//struct node
//{
//	int sum,bestLeft,bestRight,best;
//
//	void setV(int v)
//	{
//		sum = bestLeft = bestRight = best = v;
//	}
//
//	void add(node &l , node &r)
//	{
//		sum = l.sum+r.sum;
//		bestLeft = max(l.sum+r.bestLeft,l.bestLeft);
//		bestRight = max(r.sum+l.bestRight,r.bestRight);
//		best = max(max(l.best,r.best), l.bestRight+r.bestLeft);
//	}
//
//}T[MAX<<2];
//int arr[MAX];
//
//int n,m;
//
//void init(int  l ,int r, int  node)
//{
//	if(l>r)return;
//	if(l==r)
//	{
//		T[node].setV(arr[l]);
//		return;
//	}
//	int mid = (l+r)>>1;
//	init(l,mid,node*2);
//	init(mid+1, r,node*2+1);
//	T[node].add(T[node*2],T[node*2+1]);
//}
//
//node query(int  l, int r , int a , int  b, int node)
//{
//	int mid = (l+r)>>1;
//	if(l>=a && r<=b)
//		return T[node];
//
//	T[node].add(T[node*2],T[node*2+1]);
//
//	if(b<=mid)
//		query(l,mid,a,b,node*2);
//	else if(a>mid)
//		query(mid+1,r,a,b, node*2+1);
//	else
//	{
//		::node ret; 
//		::node L = query(l,mid,a,mid,node*2);
//		::node R = query(mid+1,r,mid+1,b, node*2+1);
//		ret.add(L,R);
//		return ret;
//	}
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	while(readint(n))
//	{		
//		//	Set(T,0);	
//		FOR(i,0,n)
//			readint(arr[i]);
//		init(0,n-1,1);
//		int  a,b;
//		readint(m);
//		while(m--)
//		{
//			readint(a);
//			readint(b);
//			--a,--b;
//			node res;
//			res = query(0,n-1,a,b,1);
//			printf("%d\n",res.best);
//		}
//	}
//
//	return 0;
//}
