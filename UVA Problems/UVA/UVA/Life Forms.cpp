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
//#define MAXLENGTH 109007 ///-> 3dl dah
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//
//char str[MAXLENGTH+1]; //the string we are building its suffix array 
//int stridx[MAXLENGTH+1]; 
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
//			while(str[i+c]==str[j+c] && str[i+c]!='#')c++; //count the number of shared chars 
//		} 
//		lcp[Rank[i]]=c; //store the result in lcp array 
//		if(c)c--; //Decrement c by one because length of lcp of i+1 is c-1 
//	} 
//}
//
//int T[MAXLENGTH<<2];
//
//void init(int l , int r , int n)
//{
//	if(l==r)
//	{
//		T[n]= lcp[l];
//		return;
//	}
//	int mid = (l+r)>>1;
//	init(l,mid, 2*n);
//	init(mid+1,r , 2*n+1);
//	T[n]= min(T[n*2],T[n*2+1]);
//}
//
//int query(int l , int r , int n , int a, int b)
//{
//	if(l>b || r<a)return 1<<25;
//	if(l>=a && r<=b)return T[n];
//	int mid = (l+r)>>1;		
//	int s1 = query(l,mid,2*n ,a,b);
//	int s2 = query(mid+1,r,2*n+1 ,a,b);
//	return min(s1,s2);
//
//}
//
//int main() 
//{ 
//	freopen("input.in","r",stdin);
//	int n;
//
//	bool first =1;
//	while(scanf("%d", &n)==1)
//	{
//		if(!n)break;
//		if(!first)putchar('\n');
//		first=0;
//
//		int cur = 0;
//		if(n==1)
//		{
//			scanf("%s", str);
//			printf("%s\n",str);
//			continue;
//		}
//		FOR(i,0,n)
//		{
//			scanf("%s", str+cur);
//			int l = strlen(str+cur);
//			str[cur+l]='#';
//			str[cur+l+1]='\0';
//			cur += l+1;
//		}
//		int z= 0;
//		FOR(i,0,cur)
//			if(str[i]=='#')
//				stridx[i] = -1 , z++;		
//			else stridx[i] = z;
//
//
//			buildSuffixArray();
//			buildLcp();
//			init(0,cur-1 , 1);
//			int half = n/2;
//
//			//// print suffixes
//			//		FOR(i,0,cur)
//			//{
//			//cout<<i<<" ";
//			//cout<<lcp[i]<<" ";
//			//cout<<index[suf[i]]<<" ";
//			//FOR(j,suf[i],cur)
//			//cout<<str[j];
//			//cout<<endl;
//			//}
//			//cout<<endl;
//
//
//			int b  = 1 , e =1 ;
//			int cnt = 0;
//			int freq[109];
//			Set(freq,0);
//			int res =0;
//			vector<int>V;
//
//			while(e < cur  )
//			{
//				while(cnt<= half && e<cur)
//				{
//					if(stridx[suf[e]]!=-1)
//						if(!freq[stridx[suf[e]]]++)
//							cnt++;
//					e++;
//				}
//				while(cnt>half)
//				{
//					if(stridx[suf[b]]!=-1)
//						if(!--freq[stridx[suf[b]]])
//							cnt--;
//					b++;
//				}
//				if(cnt+1 > half)
//				{
//					int v = query(0,cur-1,1,b,e-1);
//					if(res<v)
//					{
//						V.clear();
//						V.push_back(suf[b-1]);
//						res=v;
//					}
//					else if(res==v)
//						V.push_back(suf[b-1]);
//				}
//			}
//			//printf("%d\n",res);
//			set<string>S;
//			set<string>::iterator it;
//			if(res==0)
//				printf("?\n");
//			else
//			{
//				FOR(i,0,V.size())
//				{
//					string temp = "";
//					FOR(j,V[i],V[i]+res)
//					{
//						temp+=str[j];
//					}
//					S.insert(temp);
//				}
//				for(it = S.begin() ; it!= S.end() ; it++)
//					cout<< *(it) <<endl;
//			}
//	}
//	return 0;
//} 
