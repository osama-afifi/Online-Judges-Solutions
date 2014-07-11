//// Not Accepted yet
//#include<iostream> 
//#include<string> 
//#include<map> 
//#include<vector> 
//#include<queue> 
//#include<stack> 
//#include<set> 
//#include<algorithm> 
//#include<sstream> 
//#include<limits.h> 
//#include<iomanip> 
//#include<cstring> 
//#include<bitset> 
//#include<fstream> 
//#include<cmath> 
//#include<cassert> 
//#include <stdio.h> 
//#include<ctype.h>
//
//using namespace std ; 
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define all(v) v.begin(),v.end() 
//#define mp make_pair 
//
////--------------------------------------------------------------------- 
//
//#define MAXLENGTH 100009 ///-> 3dl dah
//
//char str[MAXLENGTH+1]; //the string we are building its suffix array 
//int suf[MAXLENGTH+1]; // the sorted array of suffix indices 
//int group[MAXLENGTH+1]; //index in this array is the same as suffix index 
//int sorGroup[MAXLENGTH+1<128?128:MAXLENGTH+1]; //index in this array is the same as the 
//int groupStart[MAXLENGTH+1]; //the start index in the sorted array of the current group 
//int newSuf[MAXLENGTH+1]; //temp array to store in it the new sorted array 
//int nnn; 
//void buildSuffixArray() 
//{ 
//	//int nnn;//number of suffixes 
//	memset(sorGroup,-1,(sizeof sorGroup[0])*128); 
//	for(nnn=0;nnn-1<0 || str[nnn-1];nnn++)  
//		newSuf[nnn]=sorGroup[str[nnn]],sorGroup[str[nnn]]=nnn; 
//	int numGroup=-1,j=0; 
//	for(int i=0;i<128;i++) 
//		if(sorGroup[i]!=-1) 
//		{ 
//			groupStart[++numGroup]=j; 
//			int cur=sorGroup[i]; 
//			while(cur!=-1) 
//			{ 
//				suf[j++]=cur; 
//				group[cur]=numGroup; 
//				cur=newSuf[cur]; 
//			} 
//		} 
//		sorGroup[0]=sorGroup[nnn-1]=0; 
//		newSuf[0]=suf[0]; 
//		for(int h=1;sorGroup[nnn-1]!=nnn-1;h<<=1)  { 
//			for(int i=0;i<nnn;i++)   { 
//				int j=suf[i]-h; 
//				if(j<0) continue; 
//				newSuf[groupStart[group[j]]++]=j; 
//			} 
//			for(int i=1;i<nnn;i++)  
//			{ 
//				bool newgroup=(group[newSuf[i-1]]<group[newSuf[i]] || 
//					group[newSuf[i-1]]==group[newSuf[i]] && 
//					group[newSuf[i-1]+h]<group[newSuf[i]+h]); 
//				sorGroup[i]=sorGroup[i-1] + newgroup; 
//				if(newgroup) 
//					groupStart[sorGroup[i]]=i; 
//			} 
//			for(int i=0;i<nnn;i++)   { 
//				suf[i]=newSuf[i]; 
//				group[suf[i]]=sorGroup[i]; 
//			} 
//		} 
//} 
//
//
//
//int Rank[MAXLENGTH+1]; 
//int lcp[MAXLENGTH+1]; 
//
//void buildLcp() 
//{ 
//	for(int i=0;i-1<0 || str[i-1];i++) //compute the rank of each suffix 
//	{ 
//		Rank[suf[i]]=i; 
//	} 
//	int c=0; // the length of lcp between i and j 
//	for(int i=0;i-1<0 || str[i-1];i++) 
//	{ 
//		if(Rank[i]) //if i is not the first suffix in the sorted array 
//		{ 
//			int j=suf[Rank[i]-1]; //find the element before i and name it j 
//			while(str[i+c]==str[j+c] && str[j+c]!='#')c++; //count the number of shared chars 
//		} 
//		lcp[Rank[i]]=c; //store the result in lcp array 
//		if(c)c--; //Decrement c by one because length of lcp of i+1 is c-1 
//	} 
//}
//
//int T1[MAXLENGTH];
//int T2[MAXLENGTH];
//
//
//void internalUpdate(int at, int mul, int add) {
//	while (at < 100000) {
//		T1[at] += mul;
//		T2[at] += add;
//		at |= (at + 1);
//	}
//}
//
//
//void update(int left, int right, int by) {
//	internalUpdate(left, by, -by * (left - 1));
//	internalUpdate(right, -by, by * right);
//}
//
//int query(int at) {
//	int mul = 0;
//	int add = 0;
//	int start = at;
//	while (at >= 0) {
//		mul += T1[at];
//		add += T2[at];
//		at = (at & (at + 1)) - 1;
//	}
//	return mul * start + add;
//}
//
//
//
//bool cmp(pair<int,pair<int,int>> a , pair<int, pair<int,int> > b )
//{
//	if(a.first!=b.first)
//		return a.first>b.first;
//	if(a.second!=b.second)
//		a.second<b.second;
//
//	return a<b;
//
//}
//
//int main() 
//{ 
//	freopen("input.in","r",stdin);
//
//	char temp[100009];
//	int k;
//	int kase = 0;
//	bool f= 1;
//	while(scanf("%d",&k)==1)
//	{
//		if(!k)break;
//		if(!f)putchar('\n');
//		Set(T1,0);
//		Set(T2,0);
//		f=0;
//		scanf("\n");
//		int len = 0;
//		int del;
//		gets(temp);
//		while(1)
//		{
//			gets(str+len);
//			if((string)(str+len) == "END TDP CODEBASE")break;
//			len = strlen(str);
//			str[len++]='\n';
//		}
//		gets(temp);
//		del = len;
//		str[len++]='#';
//		while(1)
//		{
//			gets(str+len);
//			if((string)(str+len)  == "END JCN CODEBASE")break;
//			len = strlen(str);
//			str[len++]='\n';
//		}
//		str[len]= '\0';
//		buildSuffixArray();
//		buildLcp();
//
//		vector< pair<int, pair<int,int> > > V;
//		FOR(i,1,len+1)
//		{
//			if(lcp[i]>0 && ( (suf[i-1]<del && suf[i]>del) || (suf[i-1]>del && suf[i]<del) ) )
//			{	
//				if(suf[i]>del)
//					V.push_back(mp(lcp[i],mp(suf[i] , suf[i-1])));
//				else
//					V.push_back(mp(lcp[i],mp(suf[i-1] , suf[i])));
//			}
//		}
//
//		sort(all(V),cmp);
//		printf("CASE %d\n" , ++kase);
//
//		int cnt = 0;
//		FOR(i, 0, V.size())
//		{
//			int a = V[i].second.second+V[i].first;
//			int b = V[i].second.second;
//			++a , ++b;
//
//			int val = query(b)-query(a-1);
//			if(val == 0)
//			{
//			//	update(a, b,  1);  // index needed
//				printf("INFRINGING SEGMENT %d LENGTH %d POSITION %d\n",++cnt , V[i].first , V[i].second.first-del-1);
//				FOR(j,V[i].second.first, V[i].second.first+V[i].first)
//					putchar(str[j]);
//				putchar('\n');
//				if(cnt ==k)break;
//			}
//		}
//	}
//	return 0;
//} 
