////Suffix Arrays 
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
//typedef vector<int> vi; 
//#define rep(i,n,m) for( int i = (int)(n), _m = (int)(m) ; i < _m ; ++i ) 
//#define rrep(i,n,m) for( int i = (int)(n), _m = (int)(m) ; i >= _m ; --i ) 
//#define all(v) v.begin(),v.end() 
//#define rall(v) v.rbegin(),v.rend() 
//#define sz size() 
//#define pb(x) push_back(x) 
//#define mp make_pair 
//#define mems(arr, v) memset(arr, v, sizeof arr) 
//#define setb(mask, bit) ((mask)|((1LL)<<(bit))) 
//#define resetb(mask, bit) ((mask)&(~((1LL)<<(bit)))) 
//#define is0(mask, bit)(((mask)&((1LL)<<(bit)))==0) 
//#define is1(mask, bit)(((mask)&((1LL)<<(bit)))!=0) 
//#define INT_MAX  2000000000 
//#define INT_MIN -INT_MAX 
//#define EPS 1e-9 
//#define debug(x) cout << #x << " : " << x << endl 
//typedef long long ll; 
//typedef long double ld; 
//typedef unsigned long long ull; 
//#define Read() freopen("in.in","r",stdin) 
//#define Write() freopen("output.txt","w",stdout) 
//
////--------------------------------------------------------------------- 
//
//#define MAXLENGTH 100 
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
//			while(str[i+c]==str[j+c])c++; //count the number of shared chars 
//		} 
//		lcp[Rank[i]]=c; //store the result in lcp array 
//		if(c)c--; //Decrement c by one because length of lcp of i+1 is c-1 
//	} 
//}
//
//int maxdis(string text)
//{
//	int sum=0;
//	for(int i = 0 ; i<text.length() ; i++)
//		sum+=suf[i]-lcp[i];
//	return sum;
//}
//
//int main() 
//{ 
//	string text;
//	while(cin>>text)
//	{
//		strcpy(str,text.c_str()); //lazm t7ot fil cstring str 
//		buildSuffixArray(); 
//		buildLcp(); 
//		cout<<maxdis(text)<<endl;
//	}
//	return 0;
//} 
