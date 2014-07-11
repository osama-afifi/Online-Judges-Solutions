//#include <iostream>
//#include <stdio.h>
//
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
//// end FAST integer input
//
//
//struct node
//{
//	node *l, *r, *p;
//	int mark;
//	int value;
//};
//
//node B[10009];
//int const oo = 1<<25;
//int i=0;
//void print(node *ptr)
//{
//	if(ptr->l!=NULL)
//		print(ptr->l);
//	if(ptr->r!=NULL)
//		print(ptr->r);
//
//	printf("%d\n",ptr->value);
//}
//
//
//
//int main()
//{
//	freopen( "input.in" , "r" , stdin );
//
//	node *prev = NULL;
//	int cur;
//
//	for(i=0 ; readint(cur) ; i++)
//	{
//		B[i].value=cur;
//		B[i].l=B[i].r=B[i].p=NULL;
//		B[i].mark=oo;
//		if(prev==NULL)
//			prev = &B[i];
//		else if(cur < prev->value)
//		{
//			B[i].p=prev;
//			B[i].mark=prev->value-1;
//			prev = prev->l = &B[i];
//		}
//		else
//		{
//			while(cur> prev->mark)
//				prev=prev->p;
//			B[i].p=prev;
//			B[i].mark=prev->mark;
//			prev=prev->r=B+i;
//		}
//
//	}
//
//	print(B);
//
//	return 0;
//}