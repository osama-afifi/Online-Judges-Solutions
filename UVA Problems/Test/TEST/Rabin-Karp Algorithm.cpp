//#include<iostream>
//#include<string>
//#include<vector>
//#include<stdio.h>
//#include<string.h>
//#include<limits.h>
//
//using namespace std;
//typedef long long LL ; 
//
//vector<int> rabin(char *pat, char *txt) // normal single 32bit hash with one by one char checking
//{
//	vector<int> Matches;
//	const int B = 29;
//	const int M = (1<<29) -1;
//	int m = strlen(pat);
//	int n = strlen(txt);
//	int i, j;
//	int hp = 0;  // hash value for pattern
//	int ht = 0; // hash value for txt
//	int h = 1;
//	for (i = 0; i < m; i++)
//	{
//		if(i<m-1) h = (h*B)%M;
//		hp = (B*hp + pat[i])%M;
//		ht = (B*ht + txt[i])%M;
//	}
//	for (i = 0; i+m <= n; i++)
//	{
//		if ( hp == ht )
//		{
//			for (j = 0; j < m; j++)
//				if (txt[i+j] != pat[j])
//					break;	
//			if (j == m) 
//				Matches.push_back(i);		
//		}  
//		if ( i < n-m )
//		{
//			ht = (B*(ht - txt[i]*h) + txt[i+m])%M;
//			if(ht < 0) 	ht+=M; 
//		}
//	}
//	return Matches;
//}
//
//vector<int> rabinLL(char *pat, char *txt) // Single 64bit Hash (No Checking)
//{
//	vector<int> Matches;
//	const LL B = 31;
//	const LL M  = (1LL<<61)-1; 
//	int m = strlen(pat);
//	int n = strlen(txt);
//	int i, j;
//	LL hp = 0;  // hash value for pattern
//	LL ht = 0;  // hash value for txt
//	LL h = 1;   // power for B^(m-1)
//
//	for (i = 0; i < m; i++)
//	{
//		if(i<m-1) h = (h*B)%M;
//		hp = (B*hp + (LL)pat[i])%M;
//		ht = (B*ht + (LL)txt[i])%M;
//	}
//
//	for (i = 0; i+m <= n; i++)
//	{
//		if ( hp == ht )Matches.push_back(i);     
//		if ( i < n-m )
//		{
//			ht = (B*(ht - (LL)txt[i]*h) + (LL)txt[i+m])%M;
//			if(ht < 0)	ht+=M; 
//		}
//	}
//	return Matches;
//}
//
//vector<int> rabindouble(char *pat, char *txt) // Double I32 Hash (No Checking)
//{
//	vector<int> Matches;
//	int B = 31;
//	int M  = (1<<31)-1;
//	int B2 = 29;
//	int M2  = (1<<30)-35;
//	int m = strlen(pat);
//	int n = strlen(txt);
//
//	int i, j;
//	int hp = 0;  // hash value 1 for pattern
//	int ht = 0;  // hash value 1 for txt
//	int hp2 = 0; // hash value 2 for pattern
//	int ht2 = 0; // hash value 2 for txt
//
//	int h = 1;  // power for B^(m-1)
//	int h2 = 1;
//
//	for (i = 0; i < m; i++)
//	{
//		if(i<m-1) { h = (h*B)%M , h2 = (h2*B2)%M2 ; }
//		hp = (B*hp + pat[i])%M , hp2 = (B2*hp2 + pat[i])%M2  ;
//		ht = (B*ht + txt[i])%M , ht2 = (B2*ht2 + txt[i])%M2;
//	}
//	for (i = 0; i+m <= n; i++)
//	{
//		if ( hp == ht && hp2 == ht2 ) Matches.push_back(i); 
//		if ( i < n-m )
//		{
//			ht = (B*(ht - txt[i]*h) + txt[i+m])%M;
//			ht2 = (B2*(ht2 - txt[i]*h2) + txt[i+m])%M2;
//			if(ht < 0) ht+=M; 
//			if(ht2 < 0) ht2+=M; 
//		}
//	}
//	return Matches;
//}
//
//// Driver program to test above function 
//int main()
//{
//	char txt[] =  "AABAACAADAABAAABAA";
//	char pat[] = "AABA";
//	vector<int> &R1 =  rabin(pat, txt);
//	vector<int> &R2 =  rabinLL(pat, txt);
//	vector<int> &R3 =  rabindouble(pat, txt);
//
//	printf("Single I32 Hash (Manual Checking): ");
//	for(int i = 0 ; i<R1.size() ; i++)
//		printf(" %d",R1[i]);
//	puts("");
//
//	printf("Single I64 Hash (No Checking) : ");
//	for(int i = 0 ; i<R2.size() ; i++)
//		printf(" %d",R2[i]);
//	puts("");
//
//	printf("Double I32 Hash (No Checking) : ");
//	for(int i = 0 ; i<R3.size() ; i++)
//		printf(" %d",R3[i]);
//	puts("");
//
//	return 0;
//}