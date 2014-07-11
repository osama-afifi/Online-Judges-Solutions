//#include <iostream>
//#include <stdio.h>
//#include <algorithm>
//#include <cstring>
//#include <vector>
//#include <math.h>
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
//
//
//int const oo = 1<<25;
//int path[103][103];
//
//int t,n,m,n1,n2,cost,kase=0;
//
//int min(int x, int y){ return x < y ? x : y; }
//int max(int x, int y){ return x > y ? x : y; }
//
//int main()
//{
//	bool first=true;
//	int s,q,c;
//	freopen("input.in","r",stdin);
//	while(readint(c))
//	{
//		readint(s);
//		readint(q);
//		if(c==0 && s==0 && q==0)break;
////scanf("%d%d%d",&c,&s,&q)==3
//
//
//		if(!first)
//			putchar('\n');
//		first=false;
//		int n1,n2,cost;
//
//		for(int i=0;i<c;i++)
//			for(int j=0;j<c;j++)
//				path[i][j]=oo;
//
//		for(int i=0;i<s;i++)
//		{
//			readint(n1);
//				readint(n2);
//				readint(cost);
//		//	scanf("%d%d%d",&n1,&n2,&cost);
//			path[n1-1][n2-1]=path[n2-1][n1-1]=cost;
//		}
//
//		for(int k = 0 ; k< c ; k++)
//			for(int i = 0 ; i< c ; i++)
//				for(int j = 0 ; j< c ; j++)
//				{
//					path[i][j]=min(path[i][j],max(path[i][k],path[k][j]));		
//				}
//
//
//				printf("Case #%d\n",++kase);
//				for(int i = 0 ; i< q ; i++)
//				{
//					readint(n1);
//					readint(n2);
//					//scanf("%d%d",&n1,&n2);
//					if(path[n1-1][n2-1]<oo)
//						printf("%d\n",path[n1-1][n2-1]);
//					else
//						printf("no path\n");
//				}
//
//
//
//	}
//	return 0;
//}