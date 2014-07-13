//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<set>
//#include<map>
//#include<unordered_map>
//#include<unordered_set>
//#include<queue>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) (A.begin(), A.end())
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//
//string s;
//string p1;
//string p2;
//long long hsh1[4009];
//long long hsh2[4009];
//long long pw1[4009];
//long long pw2[4009];
//long long inv1[4009];
//long long inv2[4009];
//long long hash11;
//long long hash12;
//long long hash21;
//long long hash22;
//const long long B1 = 10007;
//const long long B2 = 31;
//const long long MOD = 1000000007;
//
//long long PowerMod(LL x, LL p, LL m) 
//{ 
//	if (!p) 
//		return 1; 
//	LL y = PowerMod(x, p >> 1, m); 
//	y = y%m; 
//	y = (y * y) % m; 
//	if (p & 1LL) 
//		y = (y * x) % m; 
//	return y; 
//} 
//
//long long modInv(LL x, LL m) { 
//	return PowerMod(x, m - 2, m); 
//}
//
//
//__inline void pre(int len)
//{
//	pw1[0] = pw2[0] = 1;
//	for(int i =1 ; i<=len ; i++ )
//	{
//		if(i)
//		{
//			pw1[i] = (pw1[i-1]*B1)%MOD;
//			pw2[i] = (pw2[i-1]*B2)%MOD;
//		}
//		inv1[i] = modInv(pw1[i], MOD);	
//		inv2[i] = modInv(pw2[i], MOD);	
//
//	}	
//}
//
//
//__inline void H()
//{
//	int len = s.length();
//	hsh1[0] = s[0];
//	hsh2[0] = s[0];
//	for(int i =1 ; i<=len ; i++ )
//	{
//		hsh1[i] = (hsh1[i-1] + ((LL)s[i])*pw1[i]) %MOD;
//		hsh2[i] = (hsh2[i-1] + ((LL)s[i])*pw2[i]) %MOD;
//	}
//
//}
//
//pair<LL,LL> getHash(int a  , int b)
//{
//	if(a==0)return make_pair( hsh1[b]%MOD , hsh2[b]%MOD);
//	LL x1 = hsh1[b]-hsh1[a-1];
//	LL x2 = hsh2[b]-hsh2[a-1];
//	if(x1<0)x1+=MOD;
//	if(x2<0)x2+=MOD;
//	x1%=MOD;
//	x2%=MOD;
//	LL ret1 =  (x1*inv1[a])%MOD;
//	LL ret2 =  (x2*inv2[a])%MOD;
//	return make_pair(ret1,ret2);
//}
//
//__inline void preHashPatterns()
//{
//	int l1 = p1.length();
//	int l2 = p2.length();
//	hash11 = hash12 =  hash21 = hash22 = 0;
//	FOR(i,0,l1)
//	{
//		hash11 = (hash11 + ((LL)p1[i])*pw1[i])%MOD;
//		hash12 = (hash12 + ((LL)p1[i])*pw2[i])%MOD;
//	}
//	FOR(i,0,l2)
//	{
//		hash21 = (hash21 + ((LL)p2[i])*pw1[i])%MOD;
//		hash22 = (hash22 + ((LL)p2[i])*pw2[i])%MOD;
//	}
//}
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	pre(4005);
//
//	while(cin>>s)
//	{
//		bool flag =1;
//		int n  = s.length();
//		cin>>p1;
//		cin>>p2;
//
//		H();
//		preHashPatterns();
//		int l1 = p1.length();
//		int l2 = p2.length();
//		int count =0;
//		unordered_set< LL > S;
//		for(int i=0;i+l1<=n ; i++)
//		{
//			if(getHash(i,i+l1-1)== make_pair(hash11 ,hash12))
//				for(int j = i;j+l2<=n ; j++)
//					if(j+l2>=i+l1 && getHash(j,j+l2-1) ==  make_pair(hash21 ,hash22) )
//					{
//
//						S.insert( getHash(i,j+l2-1).first *MOD + getHash(i,j+l2-1).second );		
//					}
//		}
//
//			printf("%d\n" , S.size());
//	}
//	return 0;
//}