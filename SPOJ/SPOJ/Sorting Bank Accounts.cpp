//#include <iostream>
//#include <string>
//#include <sstream>
//#include <cstring>
//#include <algorithm>
//#include <map>
//#include <stdio.h>
//
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
//using namespace std;
//
//
////struct bank
////{
////	int x1,x2,x3,x4,x5,x6;
////	bool operator < ( const bank & a) const
////	{
////		if(x1!=a.x1)
////			return a.x1<x1;
////		if(x2!=a.x2)
////			return a.x2<x2;
////		if(x3!=a.x3)
////			return a.x3<x3;
////		if(x4!=a.x4)
////			return a.x4<x4;
////		if(x5!=a.x5)
////			return a.x5<x5;
////			return a.x6<x6;
////	}
////}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t,n;
//	scanf("%d",&t);
//	
//	while(t--)
//	{
//		scanf("%d",&n);
//		cin.ignore();
//		map <string , int> M;
//		map <string , int> ::iterator it;
//		char text[50];
//		while(n--)
//		{
//			gets(text);
//			M[text]++;
//		}
//
//		for(it=M.begin() ; it!=M.end() ; it++)
//			printf("%s %d\n",it->first.c_str() , it->second);
//			//cout<<it->first<<" "<<it->second<<endl; 
//		if(t)putchar('\n');
//	}
//
//
//	return 0;
//}