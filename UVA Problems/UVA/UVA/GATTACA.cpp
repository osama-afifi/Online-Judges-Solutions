////Suffix Arrays 
//#include<limits.h> 
//#include<string.h> 
//#include <stdio.h> 
//
//
////--------------------------------------------------------------------- 
//
//#define MAXLENGTH 1007 
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
//			while(str[i+c]==str[j+c])c++; //count the number of shared chars 
//		} 
//		lcp[Rank[i]]=c; //store the result in lcp array 
//		if(c)c--; //Decrement c by one because length of lcp of i+1 is c-1 
//	} 
//}
//int const oo=1<<25;
//
//int main() 
//{ 
//	freopen("input.in","r",stdin);
//
//	//string text;
//	int t;
//	scanf("%d",&t);
//	while(t--)
//	{
//
//		scanf("%s",&str);
//		//strcpy(str,(text).c_str()); //lazm t7ot fil cstring str 
//		buildSuffixArray(); 
//		buildLcp();
//		int len=strlen(str);
//		int index;
//		int count=1;
//		int z=0;
//		int maxi=0;
//		bool habt=true;
//		for(int i = 0 ; i<=len ; i++)
//		{
//			if(lcp[i]>maxi)
//			{
//				z=count=2;
//				maxi=lcp[i];
//				index=suf[i];
//				habt=false;
//			}
//			else if(lcp[i]==maxi && !habt)
//				z=++count;
//			else habt=true;
//		}
//
//		if(maxi>=1)
//		{
//
//			for(int i = 0 ; i<maxi ; i++)
//				printf("%c",str[index+i]);
//				
//			printf(" %d\n",z);
//		}
//		else
//			puts("No repetitions found!");
//
//	}
//
//
//	return 0;
//} 
