//#include <iostream>
//#include <cstdio>
//#include <string>
//#include <cstring>
//#include <vector>
//#include <set>
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//typedef long long LL;
//using namespace std;
//
//
//set<LL>S;
//
//bool roll(char* s1 , int k , bool match)
//{
//	int n = strlen(s1);
//	LL h=1;
//	LL hsh = 0;
//	LL B = 31;
//	LL M = 1e9+7;
//	FOR(i,0,k)
//	{
//		if(i<k-1)
//			h = (h%M*B%M)%M;
//		hsh = ((hsh%M*B%M)%M + (LL)(s1[i]-'a')%M)%M;
//	}
//	FOR(i,0,n-k+1)
//	{
//		if(match)
//		{
//			if(S.find(hsh)!=S.end())
//					return true;			
//		}
//		else 
//			S.insert(hsh);
//		if(i<n-k)
//			hsh = ((hsh%M - (h%M*(LL)(s1[i]-'a')%M)%M)%M*B%M + (LL)(s1[i+k]-'a')%M)%M;
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
// return roll(s2,k,1);
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
//vector<int> maxStringsList(char* s1 , char* s2 , int k) //in txt2
//{
//	
//	S.clear();
//	vector<int>V;
//	roll(s1,k,0);
//	int n = strlen(s2);
//	LL h=1;
//	LL hsh = 0;
//	LL B = 31;
//	LL M = 1e9+7;
//	FOR(i,0,k)
//	{
//		if(i<k-1)
//			h = (h%M*B%M)%M;
//		hsh = ((hsh%M*B%M)%M + (LL)(s2[i]-'a')%M)%M;
//	}
//	FOR(i,0,n-k+1)
//	{
//			if(S.find(hsh)!=S.end())
//				V.push_back(i);
//	 
//		if(i<n-k)
//		{
//			hsh = ((hsh%M - (h%M*(LL)(s2[i]-'a')%M)%M)%M*B%M + (LL)(s2[i+k]-'a')%M)%M;
//		}
//		if(hsh<0)hsh+=M;
//	}
//	return V;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	char s1[309] , s2[309], temp[309];
//	bool first  =1;
//	while(gets(s1))
//	{
//		S.clear();
//		if(!first)putchar('\n');
//		first = 0;
//		gets(s2);
//		int maxi = maxSubstring(s1,s2);
//
//		if(maxi==0)
//		{
//			cout<<"No common sequence."<<endl;
//			scanf("\n");
//			continue;
//		}
//		vector<int>V = maxStringsList(s1,s2,maxi);
//		
//		set<string> res;
//		int len = strlen(s2);
//		FOR(i,0,V.size())
//		{
//
//			FOR(j,0,maxi)
//				temp[j] = s2[V[i]+j];
//			temp[maxi] = '\0';
//			res.insert((string)(temp));
//		}
//		
//		for(set<string> ::iterator it = res.begin() ; it!=res.end() ; it++)
//		cout<<(*it)<<endl;
//		//printf("%d\n",maxi);
//		scanf("\n");
//	}
//	return 0;
//}