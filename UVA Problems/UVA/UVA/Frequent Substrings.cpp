//
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
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//using namespace std;
////--------------------------------------------------------------------- 
//
//#define MAXLENGTH 1007 ///-> 3dl dah
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//
//char str[MAXLENGTH+1]; //the string we are building its suffix array 
//int suf[MAXLENGTH+1]; // the sorted array of suffix indices 
//int group[MAXLENGTH+1]; //index in this array is the same as suffix index 
//int sorGroup[MAXLENGTH+1<128?128:MAXLENGTH+1]; //index in this array is the same as the 
//int groupStart[MAXLENGTH+1]; //the start index in the sorted array of the current group 
//int newSuf[MAXLENGTH+1]; //temp array to store in it the new sorted array 
//int nnn; 
//int len;
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
//			while(str[i+c]==str[j+c])c++; //count the number of shared chars 
//		} 
//		lcp[Rank[i]]=c; //store the result in lcp array 
//		if(c)c--; //Decrement c by one because length of lcp of i+1 is c-1 
//	} 
//}
//
//
//int main() 
//{ 
//	freopen("input.in","r",stdin);
//
//	string text;
//
//	while(gets(str))
//	{
//		len = strlen(str);
//		FOR(i,0,len)
//			str[i] = tolower(str[i]);
//		
//		buildSuffixArray(); 
//		buildLcp(); 
//		int q,num;
//		scanf("%d",&q);
// 
//		/*FOR(i,0,len)
//		{
//			cout<<lcp[i]<<" ";
//			FOR(j,suf[i],len)
//		cout<<str[j];
//			cout<<endl;
//		}
//		cout<<endl;
//		cout<<",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,"<<endl;
//*/
//		while(q--)
//		{
//			map<int,int>M;
//			scanf("%d",&num);
//			 
//			int first = -1;
//			for(int j = 0 ; j<=len ; j++)
//			{
//				if(lcp[j]>=num && lcp[j]>=1)
//				{
//					if(first!=-1)
//						M[first]++;
//					else
//					{
//						first = j;
//						
//						M[first]++;						
//					}
//				}
//				else
//					first = -1;
//			}
//			int maxi = 0;
//			int res = -1;
//			int ind = 0;
//			for(map<int,int>::iterator it  = M.begin() ; it!=M.end() ; it++)
//				if(it->second>maxi)
//				{
//					ind = it->first;
//					res = suf[it->first];
//					maxi = it->second;
//				}
//				else if(it->second==maxi && it->first<ind/*&& strncmp(str+suf[it->first] , str+res , num)<0*/ )
//				{
//					ind = it->first;
//					res = suf[it->first];
//					maxi = it->second;
//				}
//
//				if(num!=1)
//				{
//					printf("%d ",maxi+1);
//					for(int j  =  0 ; j<num ; j++)
//						putchar(str[res+j]);
//				puts("");
//				}
//				else
//				{
//					printf("%d ",maxi+1);
//					for(int i  =  0 ; i<len ; i++)
//					{
//						if(len-suf[i]>=num)
//						{
//							for(int j  =  0 ; j<num ; j++)					
//								putchar(str[suf[i]+j]);			
//							break;
//						}
//					}
//					puts("");
//				}	
//		}
//		 Set(str,0);
// while(getchar() != '\n');
//	}
//	return 0;
//} 
