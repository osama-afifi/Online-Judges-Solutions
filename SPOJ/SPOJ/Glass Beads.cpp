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
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair 
//#define all(v) v.begin(),v.end() 
//#define mp make_pair 
//typedef vector<int> vi; 
//
////--------------------------------------------------------------------- 
//
//
//#define MAXLENGTH 20002
//
//char str[MAXLENGTH+1]; //the string we are building its suffix array
//int suf[MAXLENGTH+1]; // the sorted array of suffix indices
//int group[MAXLENGTH+1]; //index in this array is the same as suffix index
//int sorGroup[MAXLENGTH+1<128?128:MAXLENGTH+1]; //index in this array is the same as the
//int groupStart[MAXLENGTH+1]; //the start index in the sorted array of the current group
//int newSuf[MAXLENGTH+1]; //temp array to store in it the new sorted array
//
//void buildSuffixArray()
//{
//	int n;//number of suffixes
//	memset(sorGroup,-1,(sizeof sorGroup[0])*128);
//	for(n=0;n-1<0 || str[n-1];n++)  //count sort on the first char of suffix
//									//treat sorGroup as head of linked list and newSuf as next
//		newSuf[n]=sorGroup[str[n]],sorGroup[str[n]]=n;
//	int numGroup=-1,j=0; //using the data computed in count sort
//	for(int i=0;i<128;i++) //compute the groups and groupStart and starting suf
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
//	sorGroup[0]=sorGroup[n-1]=0; //assume that the first group index 0 for next iteration;
//	newSuf[0]=suf[0]; //put the empty suffix to be the smallest suffix
//	for(int h=1;sorGroup[n-1]!=n-1;h<<=1) //loop until the number of groups=number of suffixes
//	{
//		for(int i=0;i<n;i++) //sort using 2h in the array newSuf
//		{
//			int j=suf[i]-h;
//			if(j<0) continue;
//			newSuf[groupStart[group[j]]++]=j;
//		}
//		for(int i=1;i<n;i++) //compute the 2h group data given h group data
//		{
//			bool newgroup=(group[newSuf[i-1]]<group[newSuf[i]] || group[newSuf[i-1]]==group[newSuf[i]] && group[newSuf[i-1]+h]<group[newSuf[i]+h]);
//			sorGroup[i]=sorGroup[i-1] + newgroup;
//			if(newgroup)
//				groupStart[sorGroup[i]]=i;
//		}
//		for(int i=0;i<n;i++) //copy the computed newSuf groups to the group and suf array
//		{
//			suf[i]=newSuf[i];
//			group[suf[i]]=sorGroup[i];
//		}
//	}
//}
//
//int Rank[MAXLENGTH+1];
//int lcp[MAXLENGTH+1];
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
//int main() 
//{ 
//	freopen("input.in","r",stdin);
//
//	string text;
//	int t;
//	scanf("%d",&t);
//	while(t--)
//	{
//		 scanf("%s", str);
//		int len =strlen(str);
//		memcpy(str+len,str,len);
//		str[len*2]=0;
//		buildSuffixArray();
//		buildLcp();
//		//Minimum Rotation
//		FOR(i,0,2*len+1)
//		{
//			if(suf[i]<len)
//			{
//				int best=suf[i];
//				FOR(j,i+1,2*len+1)
//					if(lcp[j]<len)
//						break;
//					else
//						best=min(best,suf[j]);
//				printf("%d\n",best+1);
//				break;
//			}
//		}
//	}
//	return 0;
//} 
