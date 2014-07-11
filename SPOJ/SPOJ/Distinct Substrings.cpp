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
////--------------------------------------------------------------------- 
//
//#define MAXLENGTH 50007 ///-> 3dl dah
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
// //int nnn;//number of suffixes 
// memset(sorGroup,-1,(sizeof sorGroup[0])*128); 
// for(nnn=0;nnn-1<0 || str[nnn-1];nnn++)  
//  newSuf[nnn]=sorGroup[str[nnn]],sorGroup[str[nnn]]=nnn; 
// int numGroup=-1,j=0; 
// for(int i=0;i<128;i++) 
//  if(sorGroup[i]!=-1) 
//  { 
//   groupStart[++numGroup]=j; 
//   int cur=sorGroup[i]; 
//   while(cur!=-1) 
//   { 
//    suf[j++]=cur; 
//    group[cur]=numGroup; 
//    cur=newSuf[cur]; 
//   } 
//  } 
//  sorGroup[0]=sorGroup[nnn-1]=0; 
//  newSuf[0]=suf[0]; 
//  for(int h=1;sorGroup[nnn-1]!=nnn-1;h<<=1)  { 
//   for(int i=0;i<nnn;i++)   { 
//    int j=suf[i]-h; 
//    if(j<0) continue; 
//    newSuf[groupStart[group[j]]++]=j; 
//   } 
//   for(int i=1;i<nnn;i++)  
//   { 
//    bool newgroup=(group[newSuf[i-1]]<group[newSuf[i]] || 
//     group[newSuf[i-1]]==group[newSuf[i]] && 
//     group[newSuf[i-1]+h]<group[newSuf[i]+h]); 
//    sorGroup[i]=sorGroup[i-1] + newgroup; 
//    if(newgroup) 
//     groupStart[sorGroup[i]]=i; 
//   } 
//   for(int i=0;i<nnn;i++)   { 
//    suf[i]=newSuf[i]; 
//    group[suf[i]]=sorGroup[i]; 
//   } 
//  } 
//} 
// 
// 
// 
//int Rank[MAXLENGTH+1]; 
//int lcp[MAXLENGTH+1]; 
// 
//void buildLcp() 
//{ 
// for(int i=0;i-1<0 || str[i-1];i++) //compute the rank of each suffix 
// { 
//  Rank[suf[i]]=i; 
// } 
// int c=0; // the length of lcp between i and j 
// for(int i=0;i-1<0 || str[i-1];i++) 
// { 
//  if(Rank[i]) //if i is not the first suffix in the sorted array 
//  { 
//   int j=suf[Rank[i]-1]; //find the element before i and name it j 
//   while(str[i+c]==str[j+c])c++; //count the number of shared chars 
//  } 
//  lcp[Rank[i]]=c; //store the result in lcp array 
//  if(c)c--; //Decrement c by one because length of lcp of i+1 is c-1 
// } 
//}
//
//
//int main() 
//{ 
//	freopen("input.in","r",stdin);
//
//	string text;
//	int t;
//	scanf("%d",&t);
//	scanf("\n");
//	while(t--)
//	{
//
//		gets(str);
//
// buildSuffixArray(); 
// buildLcp(); 
//	int sum=0;
//	for(int i = 0 ; i<=strlen(str) ; i++)
//	sum+=suf[i]-lcp[i];
//	printf("%d\n",sum);
//	}
// return 0;
//} 
