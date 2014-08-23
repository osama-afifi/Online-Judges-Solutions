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
//#include <limits.h>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair 
//#define MAX 10009 
//using namespace std;
//
//
//
//using namespace std;
//const int MAXN = 100100;
//const int inf = 1000000000;
// 
//struct node {
//    node *l, *r;
//    int pri, size;
//    int height, best;
// 
//    void update() {
//        size = l->size + 1 + r->size;
//        best = max( height, max( l->best, r->best ) );
//    }
//};
// 
//node mem[ MAXN ], *alloc = mem;
// 
//struct treap {
//    node *root, *dummy;
// 
//    treap() {
//        srand( 3209423 );
//        alloc->l = alloc->r = alloc;
//        alloc->best = alloc->height = -inf;
//        alloc->pri = -1;
//        alloc->size = 0;
//        root = ( dummy = alloc++ );
//    }
// 
//    node *rotate( node *a, node *b ) {
//        if( a->l == b ) { a->l = b->r; b->r = a; }
//        else { a->r = b->l; b->l = a; }
//        a->update(); b->update();
//        return b;
//    }
// 
//    node *insert( node *x, int pos, int height ) {
//        if( x == dummy ) {
//            alloc->l = alloc->r = dummy;
//            alloc->best = alloc->height = height;
//            alloc->pri = rand();
//            alloc->size = 1;
//            return alloc++;
//        }
// 
//        if( x->l->size >= pos ) {
//            x->l = insert( x->l, pos, height );
//            if( x->l->pri > x->pri ) x = rotate( x, x->l );
//        }
//        else {
//            x->r = insert( x->r, pos - x->l->size - 1, height );
//            if( x->r->pri > x->pri ) x = rotate( x, x->r );
//        }
// 
//        x->update();
//        return x;
//    }
//    
//    void insert( int pos, int height ) { root = insert( root, pos, height ); }
// 
//    int query( int lo, int hi, int a, int b, node *x ) {
//        if( a >= hi || b <= lo || x == dummy ) return -inf;
//        if( a >= lo && b <= hi ) return x->best;
//        
//        int ret = -inf;
//        ret = max( ret, query( lo, hi, a, a + x->l->size, x->l ) );
//        ret = max( ret, query( lo, hi, a + x->l->size + 1, b, x->r ) );
//        if( a + x->l->size >= lo && a + x->l->size < hi ) ret = max( ret, x->height );
//        return ret;
//    }
// 
//    int query( int lo, int hi ) { return query( lo, hi, 0, root->size, root ); }
//};
//
//
//int main() 
//{
//	freopen("input.in","r",stdin);
//	int q;
//	scanf("%d ", &q);
//
//	treap T;
//
//	while (q--) 
//	{
//		char c;
//		int i,j;
//		nt k;
//		scanf(" %c", &c);
//		if (c == 'I') 
//		{
//			scanf(" %d", &k);
//			treap = T.insert(treap, k);
//		} 
//		else if (c == 'D') 
//		{
//			scanf(" %d", &k);
//			erase(treap,k);
//		} 
//		else if (c == 'N') 
//		{	
//			scanf("%d %d", &i, &j);
//				printf("-1\n");
//		} 
//		else if (c == 'X') 
//		{
//			scanf("%d %d", &i, &j);
//			if(i==j)
//				printf("-1\n");
//			else
//			{
//				int q1 = (*treap)[i];
//				int q2 = (*treap)[j];
//				printf("%d\n", q2-q1);
//			}
//		}
//	}
//	return 0;
//}