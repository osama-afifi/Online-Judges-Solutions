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
//
//
//
//
//struct node
//{
//int arr[3];
//int L;
//void setMod(int z1,int z2,int z3)
//{arr[0] = z1 ,arr[1] = z2,arr[2] = z3;}
//
//void rotate(int i)
//{
//		i%=3;
//		FOR(j,0,i)
//		swap(arr[0],arr[1]) , swap(arr[0],arr[2]);
//}
//
//void merge(node &x , node &y)
//{
//arr[0] = x.arr[0] + y.arr[0];
//arr[1] = x.arr[1] + y.arr[1];
//arr[2] = x.arr[2] + y.arr[2];
//}
//
//};
//
//node  T[100009<<2];
//
//int n,m;
//
//void init(int l , int r , int node)
//{
//	if(l==r)
//	{
//		T[node].setMod(1,0,0);
//		return;
//	}
//	int mid = (l+r)/2;
//	
//	init(l,mid,node*2);
//	init(mid+1, r,node*2+1);
//	T[node].setMod(r-l+1,0,0);
//	//T[node].merge(T[node*2],T[node*2+1]); 
//}
//
//void update(int  l ,int r , int  a ,int b , int  node )
//{
//
//	if(T[node].L != 0) 
//	{
//		T[node].rotate(T[node].L);
// 
//		if(l != r) 
//		{
//			T[node*2].L += T[node].L; 
//    		T[node*2+1].L += T[node].L; 
//		}
//   		T[node].L = 0; 
//  	}
//
//	if(r<a || l>b || l>r)
//		return;
//
//	if(l>=a && r<=b)
//	{
//		T[node].rotate(1);
//		if(l != r) 
//		{ 
//			T[node*2].L++;
//			T[node*2+1].L++;
//		}
//    		return;
//	}
//
//	int mid = (l+r)/2;
//	update(l , mid , a , b , node*2);
//	update(mid+1 , r , a , b , node*2+1);
//
//	T[node].merge(T[node*2],T[node*2+1]); 
//}
//
//int query(int  l, int r , int a , int  b, int node)
//{
//	if(l>b || r<a || l>r)return 0;
//	
//	if(T[node].L != 0) 
//	{
//		T[node].rotate(T[node].L);
//		if(l != r) 
//		{
//			T[node*2].L += T[node].L; 
//    		T[node*2+1].L += T[node].L; 
//		}
//   		T[node].L = 0; 
//  	}
//	if(l>=a && r<=b)
//			return T[node].arr[0];	
//	int mid = (l+r)/2;
//	return 	query(l , mid , a , b , node*2) + query(mid+1 , r , a , b , node*2+1);
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	while(readint(n))
//	{
//		readint(m);
//		int c,b,a;
//		Set(T,0);
//		init(0,n-1,1);
//		while(m--)
//		{
//			readint(c);
//			readint(a);
//			readint(b);
//
//		//	scanf("%d %d %d" ,&c ,&a ,&b);
//			
//			if(c==0)
//			{
//				update(0,n-1 ,a , b , 1 );
//			}
//			else
//			{
//				int x = query(0,n-1 ,a , b , 1 );
//				printf("%d\n",x);
//			}
//		}
//	}
//	return 0;
//}
