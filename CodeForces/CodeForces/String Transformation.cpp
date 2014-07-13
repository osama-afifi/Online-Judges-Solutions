//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<queue>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) (A.begin(), A.end())
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//
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
//vector<int> failureFunction(string &p)
//{
//	
//	int m = p.size() , k = 0;
//	vector<int>F(m+1);
//	F[0] = 0;
//	for (int q = 1; q <= m - 1; ++q) {
//		while (k > 0 && p[k] != p[q])
//			k = F[k - 1];
//		if (p[k] == p[q])
//			k++;
//		F[q] = k;
//	}
//	return F;
//}
//
//vector<int> zfunction(string s)
//{
//	int n = s.length();
//	vector<int>Z(s.length());
//	int L = 0, R = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (i > R)
//		{
//			L = R = i;
//			while (R < n && s[R-L] == s[R])
//				R++;
//			Z[i] = R-L; 
//			R--;
//		} 
//		else 
//		{
//			int k = i-L;
//			if (Z[k] < R-i+1) 
//				Z[i] = Z[k];
//			else
//			{
//				L = i;
//				while (R < n && s[R-L] == s[R])
//					R++;
//				Z[i] = R-L; 
//				R--;
//			}
//		}
//	}
//	return Z;
//}
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	string s1,s2;
//	while(getline(cin,s1))
//	{
//		getline(cin,s2);
//		if(s1.length()!=s2.length())
//		{
//			puts("-1 -1");
//			continue;
//		}
//		int n = s1.length();
//		string temp1 = s2+"\n"+s1;
//		string temp2 = s1;
//		string temp3 = s2;
//		reverse(temp2.begin(),temp2.end());
//		reverse(temp3.begin(),temp3.end());
//		temp2+="\n";
//		temp2+=s2;
//		temp3+="\n";
//		temp3+=s1;
//		vector<int>Z1= zfunction(temp1);
//		vector<int>Z2= zfunction(temp2);
//		vector<int>F3= failureFunction(temp2);
//		int a = -1 , b = -1;
//		FOR(i,0,n-1)
//			if(s1[i]==s2[n-1-i])
//			{
//				int z1 = Z1[n+1+i+1];
//			//	int z2 = Z2[n+1+z1];
//				if(i+z1+F3[2*n-i-1]+1 >= n )
//				{
//					a = i;
//					b = n-F3[2*n-i-1];				
//				}
//			}
//			else break;
//			cout<< a << " " <<b <<endl;
//	}
//	return 0;
//}