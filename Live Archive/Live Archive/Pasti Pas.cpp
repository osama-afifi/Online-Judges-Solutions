//#include <iostream>
//#include <stdio.h>
//#include <algorithm>
//#include <cstring>
//#include <map>
//#include <set>
//#include <vector>
//#include <string>
//#include <climits>
//#include <cmath>
//using namespace std;
//
//typedef long long LL;
//#define OO 1e9
//#define EPS 1e-9
//#define FOR(i, s, e) for(int i = s; i < e; ++i)
//#define MEMS(c, v) memset(c, v, sizeof c)
//#define ALL(c) c.begin(), c.end()
//#define SZ(c) c.size()
//
//
//using namespace std;
//
//typedef long long ll;
//
//#define sz(v) (int)v.size()
//
//char s[50009];
//LL M  = 1e9+7;
//LL B  = 29;
//LL hsh[50009];
//LL p[50009];
//LL inv[50009];
//int len;
//
//long long PowerMod(LL x, LL p, LL m) { 
//  if (!p) 
//    return 1; 
//  LL y = PowerMod(x, p >> 1, m); 
//  y = y%m; 
//  y = (y * y) % m; 
//  if (p & 1LL) 
//    y = (y * x) % m; 
//  return y; 
//} 
// 
//long long modInv(int x, int m) { 
//  return PowerMod(x, m - 2, m); 
//}
//
//
//void pre(int len)
//{
//	p[0] = 1;
//	for(int i =1 ; i<=len ; i++ )
//		p[i] = (p[i-1]*B)%M;
//	for(int i =0 ; i<=len ; i++ )
//		inv[i] = modInv(p[i], M);	
//}
//
//
//void H()
//{
//	hsh[0] = s[0]-'A';
//	for(int i =1 ; i<=len ; i++ )
//		hsh[i] = (hsh[i-1] + (s[i]-'A')*p[i]) %M;
//	
//}
//
//LL getHash(int a  , int b)
//{
//	if(a==0)return hsh[b];
//	LL x = hsh[b]-hsh[a-1];
//	if(x<0)x+=M;
//	x%=M;
//	LL ret =  (x*inv[a])%M;
//	return ret;
//}
//
//int main(){
//	freopen("input.in", "r", stdin);
//	int t;
//	int kase = 0;
//	pre(50001);
//	scanf("%d" , &t);
//	while(t--)
//	{
//		scanf("%s" , &s);
//		len  = strlen(s);
//		H();	
//		int res = 0;
//		int st = 0;
//		int i = 0;
//		for(int i = 0 ; i<len/2 ; i++)
//		{
//			LL h1 = getHash(st,i);
//			LL h2 = getHash(len-1-i , len-1-st);
//			if(h1 == h2)
//				st = i+1 , res+=2;
//		}
//
//		printf("Case #%d: %d\n" , ++kase , res + (len&1 || st<len/2));
//
//	}
//	return 0;
//}