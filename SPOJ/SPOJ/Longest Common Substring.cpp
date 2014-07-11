//#include <iostream>
//#include <cstdio>
//#include <string>
//#include <cstring>
//#include <vector>
////#include<tr1/unordered_set>
//#include<unordered_set>
//#include <set>
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//typedef long long LL;
//using namespace std;
//
//
//unordered_set<int>S;
//
//bool roll(char* s1 , int k , bool match)
//{
//	int n = strlen(s1);
//	int h=1;
//	int hsh = 0;
//	int B = 31;
//	int M = 1e9+7;
//	FOR(i,0,k)
//	{
//		if(i<k-1)
//			h = (h%M*B%M)%M;
//		hsh = ((hsh%M*B%M)%M + (int)(s1[i]-'a')%M)%M;
//	}
//	FOR(i,0,n-k+1)
//	{
//		if(match)
//		{
//			if(S.find(hsh)!=S.end())
//				return true;			
//		}
//		else 
//			S.insert(hsh);
//		if(i<n-k)
//			hsh = ((hsh%M - (h%M*(int)(s1[i]-'a')%M)%M)%M*B%M + (int)(s1[i+k]-'a')%M)%M;
//		if(hsh<0)hsh+=M;
//	}
//	return false;
//}
//
//
//bool match(char* s1 , char* s2 , int k)
//{
//	S.clear();
//	roll(s1,k,0);
//	return roll(s2,k,1);
//}
//
//int maxSubstring(char* s1 , char* s2)
//{
//	int b= 0  , e = min( strlen(s1) , strlen(s2));
//	int mid = (b+e)>>1;
//	while(b<=e)
//	{
//		mid = (b+e)>>1;
//		if(match(s1,s2,mid))
//			b=mid+1;
//		else 
//			e= mid-1;	
//	}
//
//	return b-1;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	char s1[250009] , s2[250009];
//
//	gets(s1);
//	gets(s2);
//
//	S.clear();
//	int maxi = maxSubstring(s1,s2);
//	printf("%d\n",maxi);
//
//	return 0;
//}