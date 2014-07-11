//
//#include <iostream>
//#include <algorithm>
//#include <cstdio>
//#include <vector>
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
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int num,kase=0;
//	
//		vector <int> in;
//		vector <int> index_list;
//		bool first=true;
//	while(readint(num))
//	{
//
//		if(num==-1)break;
//				if(!first)putchar('\n');
//		first=false;
//		in.clear();
//		index_list.clear();
//		in.push_back(num);
//		while(readint(num))
//		{
//			if(num==-1)break;
//			in.push_back(num);
//		}
//	//	reverse(in.begin(),in.end());
//
//		vector <int> linked_list(in.size());
//
//		index_list.push_back(0);
//
//		for(int i=1 ; i< in.size(); i++)
//		{
//			if(in[i]<=in[index_list.back()] )
//			{
//				linked_list[i]=index_list.back();
//				index_list.push_back(i);
//				continue;
//			}
//
//			int beg=0;
//
//			for(int end=index_list.size()-1,mid=(beg+end)/2 ; beg<end ; mid=(beg+end)/2)
//				if(in[index_list[mid]]>in[i]) beg=mid+1;
//				else end=mid;
//
//				if(in[index_list[beg]]<=in[i])
//				{
//					if(beg>0)linked_list[i]=index_list[beg-1];
//					index_list[beg]=i;
//				}
//
//		}
//
//		for (int i = index_list.size(), j = index_list.back(); i--; j=linked_list[j])
//			index_list[i] = j;
//
//		//////////////////////////////////////////////////////////////////////////
//
//		printf("Test #%d:\n", ++kase);
//		printf("  maximum possible interceptions: %d\n", index_list.size());
//		//for (size_t i = 0; i < index_list.size(); i++)
//		//	printf("%d\n", in[index_list[i]]);
//
//		
//	}
//
//	return 0;
//}
//
//
