//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <set>
//#include <queue>
//#include <set>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair 
//#define MAX 50009
//typedef long long LL;
//using namespace std;
//
//long long bigmod(long long  b,long long  p, long long  m)
//{
//	if(p==0)
//		return 1;
//	else if(p%2==0)
//	{
//		long long x = bigmod(b,p/2,m)%m;
//		return (x*x)%m;
//	}
//	else
//	return ((b%m)*(bigmod(b,p-1,m))%m)%m;
//}
//
//long long  modInverse(long long  a, long long  n) {
//	return bigmod(a,n-2, n);
//}
//
//
//inline int roll(char *txt , int k) // normal single 32bit hash with one by one char checking
//{
//	int c = 0;
//	const LL B = 31;
//	const LL M = 1e9 + 7;//(1<<29) -1;
//
//	//int m = (k+1)/2; // odd take the center char also
//	int n = strlen(txt);
//	int i, j=0;
//	LL  ht = 0; // hash value for txt
//	LL htr = 0; // hash value for reverse txt
//	LL  h = 1;
//	LL  inv = modInverse(B,M);
//		FOR(i,0,n)txt[i]-='a';
//	for (i = 0; i < k; i++) // first part
//	{
//		if(i<k-1)
//		h = (h*B)%M;
//		ht = (B*ht + txt[i])%M;
//		htr = (B*htr + txt[k-1-i])%M;
//	}
//	for (i = 0; i+k <= n; i++) //roll and run ya roman
//	{
//		if ( ht == htr)
//			c++;	
//		if ( i < n-k )
//		{
//			ht =  (B*(ht - txt[i]*h) + txt[i+k])%M;
//			htr = ( ( (htr-(LL)txt[i]+M)%M * inv%M)%M + (h%M*(LL)txt[i+k]%M)%M)%M;
//			if(ht < 0) 	ht+=M; 
//			if(htr < 0) htr+=M; 
//		}
//	}
//	return c;
//}
//
//int main() 
//{
//	freopen("input.in","r",stdin);
//	int k;
//
//	char s[MAX];
//	while(scanf("%d%s" ,&k ,&s)==2)
//	{
//		int n = strlen(s);
//		if(k>n) {printf("0\n"); return 0;}
//		else if(k==1) {printf("%d\n",n); return 0;}
//		else
//		{
//			int res = roll(s , k);
//			printf("%d\n" , res);
//		}
//	}
//	return 0;
//}
