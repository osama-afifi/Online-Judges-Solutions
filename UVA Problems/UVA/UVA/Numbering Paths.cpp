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
//int const oo = 1<<25;
//int path[103][103];
//
//int n,m,n1,n2,cost,kase=0,s,t,w;
//
//int min(int x, int y){ return x < y ? x : y; }
//int max(int x, int y){ return x > y ? x : y; }
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
//int main()
//{
//	int n,m,kase=0;
//	freopen("input.in","r",stdin);
//	while(readint(m))
//	{
//
//		if(m==0)break;
//		n=0;
//
//		int n1,n2;
//
//		for(int i=0;i<50;i++){
//			for(int j=0;j<50;j++)
//				path[i][j]=0;
//			path[i][i]=0;
//		}
//
//		for(int i=0;i<m;i++)
//		{
//			readint(n1);
//			readint(n2);
//		//	scanf("%d%d",&n1,&n2);
//			n=max(n,max(n1,n2));
//			path[n1][n2]=1;
//		}
//
//		for(int k = 0 ; k<= n ; k++)
//			for(int i = 0 ; i<= n ; i++)
//				for(int j = 0 ; j<= n ; j++)
//				{
//					path[i][j]+=path[i][k]*path[k][j];	//kda kda lw zero msh htt7sb	
//				}
//
//				for(int k = 0 ; k<= n ; k++)
//					if(path[k][k])
//						for(int i = 0 ; i<= n ; i++)
//							for(int j = 0 ; j<= n ; j++)
//								if(path[i][k]&&path[k][j])
//									path[i][j]=-1;
//
//				printf("matrix for city %d\n",kase++);
//				for(int i = 0 ; i<= n ; i++)
//				{
//					printf("%d",path[i][0]);
//					for(int j = 1 ; j<= n ; j++)
//						printf(" %d",path[i][j]);
//					putchar('\n');
//				}
//	}
//	return 0;
//}