//
//#include <iostream>
//#include <stdio.h>
//
//
//using namespace std;
//
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
//int forest[50001];
//
//int getforest(int i)
//{
//	if(forest[i]==i)return i;
//	else return forest[i]=getforest(forest[i]);
//}
//
//void makeUnion(int a , int b)
//{
//	forest[getforest(a)]=getforest(b);
//}
//
//bool isUnion(int a , int b)
//{
//	return getforest(a)==getforest(b);
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int n,m,n1,n2,kase=0;
//	while(readint(n))
//	{
//		readint(m);
//		if(!n && !m)break;
//
//		for(int i = 0 ; i<=n ; i++)
//			forest[i]=i;
//
//		for(int i = 0 ; i < m ; i++)
//		{
//			readint(n1);
//			readint(n2);
//			//scanf("%d%d",&n1,&n2);
//			if(!isUnion(n1,n2))
//				makeUnion(n1,n2);	
//		}
//		int counter=0;
//		for(int i = 1 ; i<=n ; i++)
//			if(forest[i]==i)
//				counter++;
//
//		printf("Case %d: %d\n",++kase,counter);
//	}
//	return 0;
//}