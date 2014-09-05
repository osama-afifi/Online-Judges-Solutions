//
//
//// NOT ACCEPTED
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
//#define MAX 10009 
//using namespace std;
//const int MAXN = 100100;
//#define INF (1<<30)
//
//struct QNode
//{
//	int val,bestLeft,bestRight,bestAll,sum;
//	QNode()
//	{
//		bestLeft=bestRight=bestAll=sum=0;
//	}
//	QNode(int val) : val(val)
//	{
//		bestLeft=bestRight=bestAll=sum=val;
//	}
//	void merge(QNode l , QNode r)
//	{
//		sum = l.sum + r.sum + val;
//		bestLeft = max(l.bestLeft,l.sum+val+r.bestLeft);
//		bestRight = max(r.bestRight, r.sum+val+l.bestRight);
//		bestAll = max( max(l.bestAll,r.bestAll), max(l.bestRight+val+r.bestLeft,0));
//	}
//};
//
//
//
//struct treap{
//
//	struct node 
//	{
//		node *Left, *Right;
//		int pri, sz;
//		QNode key;
//
//	} *root, *dummy;
//
//	treap() 
//	{
//		dummy = new node();
//		dummy->Left = dummy->Right = dummy;
//		dummy->pri = -1;
//		dummy->sz = 0;
//		dummy->key = QNode(0);
//		root = dummy;
//		srand(23524677);
//	}
//
//	int size() { return root->sz; }
//
//	void update(node *n) 
//	{ 	
//		n->sz = n->Left->sz + n->Right->sz + 1; 
//		n->key.merge(n->Left->key,n->Right->key);
//	}
//
//
//	node *rotate(node *A, node *B) 
//	{
//		if (A->Left == B) {
//			A->Left = B->Right;
//			B->Right = A;
//		} else {
//			A->Right = B->Left;
//			B->Left = A;
//		}
//		update(A);
//		update(B);
//		return B;
//	}
//
//	node *insert(node *root, node *newnode, int pos) 
//	{
//		if (root == dummy) 	return newnode;
//
//		if (root->Left->sz>=pos) 
//		{
//			root->Left = insert(root->Left, newnode,pos);
//			if (root->Left->pri > root->pri) root = rotate(root, root->Left);
//		}
//		else 
//		{
//			root->Right = insert(root->Right, newnode,pos-root->Left->sz-1);
//			if (root->Right->pri > root->pri) root = rotate(root, root->Right);
//		}
//		update(root);
//		return root;
//	}
//
//
//	void insert(int pos, int key) 
//	{
//		node *n = new node();
//		n->Left = n->Right = dummy;
//		n->pri = rand();
//		n->sz = 1;
//		n->key = QNode(key);
//		root = insert(root, n,pos);
//	}
//
//	// for deletion
//	node *erase(node *root, int pos) 
//	{
//		if (root == dummy) return dummy;
//		if (pos < root->Left->sz)
//		{
//			root->Left = erase(root->Left, pos);
//			if (root->Left->pri > root->pri) root = rotate(root, root->Left);
//		}
//		else if (pos > root->Left->sz) 
//		{
//			root->Right = erase(root->Right, pos-root->Left->sz-1);
//		    if (root->Right->pri > root->pri) root = rotate(root, root->Right);
//		}
//		else 
//		{
//			if (root->Left == dummy) return root->Right;
//			else if (root->Right == dummy) return root->Left;
//			else 
//			{
//				root->pri = -1;
//				if (root->Left->pri > root->pri) root = rotate(root, root->Left);
//				if (root->Right->pri > root->pri) root = rotate(root, root->Right);
//				return erase(root, pos);
//			}
//		}
//		update(root);
//		if (root->Left->pri > root->pri) root = rotate(root, root->Left);
//		if (root->Right->pri > root->pri) root = rotate(root, root->Right);
//		update(root);
//		return root;
//	}
//
//	QNode query( int lo, int hi, int a, int b, node *root ) 
//	{		
//		if( a>b || a > hi || b < lo || root == dummy ) 
//		{
//			QNode Q;
//			Q.bestAll = 0;
//			return Q;
//		}
//		if(a>=lo && b<=hi) 
//			return root->key;
//
//	
//		QNode l = query( lo, hi, a, a + root->Left->sz, root->Left);
//		QNode r = query( lo, hi, a + root->Left->sz+2 , b, root->Right);
//		int x= 0;
//	//	if(root->Left->sz >= lo && root->Left->sz <=hi)
//			x = root->key.val;
//		QNode ret = QNode(x);
//		ret.merge(l,r);
//
//		return ret;
//	}
//	int query(int lo,int hi)
//	{
//		return query(lo,hi,1,root->sz,root).bestAll;
//	}
//
//	void print(node * root)
//	{
//		if(root==dummy)
//			return;
//		print(root->Left);
//		cout << "(" << root->key.val << ") ";
//		print(root->Right);
//
//	}
//
//};
//
//int main() 
//{
//	freopen("input.in","r",stdin);
//	int n,x;
//	scanf("%d ", &n);
//	treap T;
//	FOR(i,0,n)
//	{
//		scanf("%d ", &x);
//		T.insert(i,x);
//		T.print(T.root);
//		cout <<endl;
//	}
//
//	int q;
//	scanf("%d ", &q);
//
//	while (q--) 
//	{
//
//		char c[5];
//		int x,y;
//		scanf("%s",&c);
//		//
//		printf("%s\n", c);
//		//
//		if (c[0] == 'I') 
//		{
//			scanf("%d%d",&x, &y);
//			T.insert(x-1,y);
//		}
//		else if (c[0] == 'D') 
//		{
//			scanf("%d",&x);
//			T.erase(T.root,x-1);
//		}
//		else if (c[0] == 'R') 
//		{
//			scanf("%d%d",&x, &y);
//			T.erase(T.root,x-1);
//			T.insert(x-1,y);
//		}
//		else if (c[0] == 'Q') 
//		{
//			scanf("%d%d",&x, &y);
//			printf("%d %d\n",x, y);
//			printf("%d\n", T.query(x,y));
//		}
//
//		T.print(T.root);
//		cout<<endl;
//	}
//
//	return 0;
//}
