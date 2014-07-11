////
////#include <iostream>
////#include <cstdio>
////#include <vector>
////using namespace std;
////
////// {{{ FAST integer input
////#define X10(n) ((n << 3) + (n << 1))
////const int MAXR = 65536;
////char buf[MAXR], *lim = buf + MAXR - 1, *nw = lim + 1;
////
////using namespace std;
////
////bool adapt()
////{ // Returns true if there is a number waiting to be read, false otherwise
////	while(nw <= lim && !isdigit(*nw)) ++nw;
////	if(nw > lim){
////		int r = fread(buf, 1, MAXR-1, stdin);
////		buf[r] = 0;
////		lim = buf + r - 1;
////		if(r == MAXR - 1){
////			while(isdigit(*lim)) ungetc(*lim--, stdin);
////			if(*lim == '-') ungetc(*lim--, stdin);
////		}
////		nw = buf;
////	}
////	while(nw <= lim && !isdigit(*nw)) ++nw;
////	return nw <= lim;
////}
////
////bool readint(int& n){ // Returns true on success, false on failure
////	if(!adapt()) return false;
////	bool ngtv = *(nw - 1) == '-';
////	for(n = 0; isdigit(*nw); n = X10(n) + *nw++ - '0');
////	if(ngtv) n = -n;
////	return true;
////}
////// end FAST integer input
////
////
////int main()
////{
////	freopen("input.in","r",stdin);
////	vector <int> in;
////	vector <int> index_list;
////	int num;
////
////	while(readint(num))
////		in.push_back(num);
////
////
////
////	vector <int> linked_list(in.size());
////
////	index_list.push_back(0);
////
////	for(int i=1 ; i< in.size(); i++)
////	{
////		if(in[i]>in[index_list.back()] )
////		{
////			linked_list[i]=index_list.back();
////			index_list.push_back(i);
////			continue;
////		}
////
////		int beg=0;
////
////		for(int end=index_list.size()-1,mid=(beg+end)/2 ; beg<end ; mid=(beg+end)/2)
////			if(in[index_list[mid]]<in[i]) beg=mid+1;
////			else end=mid;
////
////			if(in[index_list[beg]]>in[i])
////			{
////				if(beg>0)linked_list[i]=index_list[beg-1];
////			index_list[beg]=i;
////			}
////
////	}
////
////	for (int i = index_list.size(), j = index_list.back(); i--; j=linked_list[j])
////		index_list[i] = j;
////
////	//////////////////////////////////////////////////////////////////////////
////
////	      printf("%d\n-\n", index_list.size());
////	for (size_t i = 0; i < index_list.size(); i++)
////		printf("%d\n", in[index_list[i]]);
////	//       printf("\n");    
////
////	return 0;
////}
////
////
//
//#include <iostream>
//#include <cstdio>
////#include <vector>
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
//	int in[100007];
//int index_list[100007];
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//int linked_list[100007];
//	int n=0,m=1,i,j,beg,mid,end;
//	while(readint(in[n++]));
//	index_list[0]=0;
//	for( i=1 ; i< n; i++)
//	{
//		if(in[i]>in[index_list[m-1]] )
//		{
//			linked_list[i]=index_list[m-1];
//			index_list[m++]=i;
//			continue;
//		}
//		beg=0;
//		for( end=m-1,mid=(beg+end)/2 ; beg<end ; mid=(beg+end)/2)
//			if(in[index_list[mid]]<in[i]) beg=mid+1;
//			else end=mid;
//			if(in[index_list[beg]]>in[i])
//			{
//				if(beg>0)linked_list[i]=index_list[beg-1];
//			index_list[beg]=i;
//			}
//	}
//
//	for ( i = m, j = index_list[m-1]; i--; j=linked_list[j])
//		index_list[i] = j;
//
//	//////////////////////////////////////////////////////////////////////////
//
//	      printf("%d\n-\n", m);
//	for (size_t i = 0; i < m; i++)
//		printf("%d\n", in[index_list[i]]);
//	//       printf("\n");    
//
//	return 0;
//}
//
//
