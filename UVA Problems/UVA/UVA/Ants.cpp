//#include <iostream>
//#include <stdio.h>
//
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
//int main()
//{
//	freopen("input.in","r",stdin);
//	int n,t,L,num,fastest,slowest,mid;
//	//scanf("%d",&t);
//	readint(t);
//	while(t--)
//	{
//		//scanf("%d%d",&L,&n);
//		readint(L);
//		readint(n);
//		mid=L/2;
//		fastest=slowest=0;
//		while(n--)
//		{
//			//scanf("%d",&num);
//			readint(num);
//			if(num>mid)
//			{
//				if(num>slowest)
//					slowest=num;
//				if(L-num>fastest)
//					fastest=L-num;
//			}
//			else
//			{
//				if(L-num>slowest)
//					slowest=L-num;
//				if(num>fastest)
//					fastest=num;
//			}
//
//		}
//		printf("%d %d\n",fastest,slowest);
//	}
//
//	return 0;
//}