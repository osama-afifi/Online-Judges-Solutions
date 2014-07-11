//// AC :)
//#include <iostream>
//#include <map>
//#include <cstdio>
//#include <queue>
//#include <vector>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define LL long long 
//#define pii pair<int,int>
//#define pll pair<LL,LL>
//#define mp make_pair
//
//vector<int>P;
//vector<int>V;
//
//
//int primef[1000003];
//
//inline void sieve(int N)
//{
//	P.clear();
//	Set(primef,0);
//	for(int i = 2 ; i*i<N  ; i++)
//	{
//		if(!primef[i])
//			for(int j=i*i ; j<N ; j+=i)
//				primef[j]=i;
//	}
//	FOR(i,2,N)
//		if(!primef[i])
//			P.push_back(i);		
//}
//int rev(int i) {
//	int dig = 7;
//	int ret = 0;
//	while (dig--) {
//		ret = ret * 10 + i % 10;
//		i /= 10;
//	}
//	return ret;
//}
//int countFactor( int n)
//{
//	int z=0,c=0;
//	
//	while(n>1)
//	{
//		if(n>=1000000)
//		{
//		if(n%P[z]==0)
//			n/=P[z],++c;
//		else
//			z++;
//		if(z==P.size() || P[z]>n)
//			return c+1;
//		}
//		else
//			while(n>1)
//				if(!primef[n])
//				return c+1;
//				else ++c,n/=primef[n];
//	}
//	return c;
//}
//struct BIT // 1 indexed
//{
//	vector<int>tree;
//	int N;
//	BIT(){}
//	BIT(int n)
//	{
//		N=n;
//		tree.resize(N);
//		if(N)
//			tree[0] = 0;
//		N=V.size();
//	}
//	int cum(int idx)
//	{
//		int sum=0;
//		while(idx>0)
//		{
//			sum+=tree[idx];
//			idx -= (idx & -idx);
//		}
//		return sum;
//	}
//	void upd(int idx , int val)
//	{
//
//		while(idx<=N)
//		{
//			tree[idx]+=val;
//			idx += (idx & -idx);
//		}
//
//	}
//	int find(int csum)
//	{
//		int bitmask =0 ,c=0;
//		int z=N;
//		while(z>0)
//			c++,z>>=1;
//		bitmask = 1<<(c-1);
//
//		int idx = 0;
//		while(bitmask!=0 && idx<=N)
//		{
//			int mid = idx+bitmask;
//			if(tree[mid]<=csum)
//			{
//				idx -= (idx & -idx);
//				csum-=tree[mid];
//			}
//			bitmask>>=1;
//		}
//		if(idx!=0) return -1;
//		return idx;		
//	}
//};
//
//BIT bit1,bit2;
//
//int bs(int value)
//{
//	int b=0,e=V.size()-1,m;
//	while(e>b)
//	{
//		m=(b+e)>>1;
//		if(V[m]<value)
//			b=m+1;
//		else
//			e=m;
//	}
//	return e;
//}
//
//int bs2(int value)
//{
//	int b=0,e=V.size()-1,m;
//	while(e>b)
//	{
//		m=(b+e)>>1;
//		if(bit2.cum(m)<value)
//			b=m+1;
//		else
//			e=m;
//	}
//	return e;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	sieve(1000000);
//	V.resize(P.size());
//	FOR(i,0,P.size())
//		V[i] = rev(P[i]);
//
//	sort(V.begin(),V.end());
//	bit1 = BIT(V.size()+1);
//	bit2 = BIT(V.size()+1);
//
//	FOR(i,0,V.size())
//	{
//		//printf("i : %d\n" , i);
//		bit1.upd(i+1,countFactor(V[i]));
//		bit2.upd(i+1,1);
//
//	}
//	int m = P.size();
//
//	//bit2 already zero
//
//	char c;
//	int num;
//	while(cin>>c>>num)
//	{
//		if(c=='q')
//		{
//			int orgidx = bs2(num+1);
//			printf("%d\n",bit1.cum(orgidx));
//		}
//		else
//		{
//			int idx = bs(num);
//			bit1.upd(idx+1,-countFactor(V[idx]));
//			bit2.upd(idx+1,-1);
//		}
//	}
//	return 0;
//}
//
//
//
