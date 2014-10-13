#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<map>
#include<unordered_map>
#include<sstream>
#include<queue>
#include<set>
#include<stack>
#include<math.h>


#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define ALL(A) A.begin(), A.end()
#define Set(a, s) memset(a, s, sizeof (a))
#define pb push_back
#define mp make_pair
typedef long long LL;
using namespace std;
int T[100009<<2];
int arr[100009];

int gcd(int a, int b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}

void build(int l , int r, int x)
{
	if(l>r)return;
	if(l==r)
	{
		T[x]=arr[l];
		return;
	}
	int mid=(l+r)/2;
	build(l,mid,x*2);
	build(mid+1,r,x*2+1);
	T[x]= gcd(T[x*2],T[x*2+1]);
}

int query(int l , int r, int x, int b, int e)
{
	if(l>r || l>e || r<b)
		return -1;
	if(l>=b && r<=e)
		return T[x];

	int mid=(l+r)/2;
	int ret1,ret2;
	ret1=query(l,mid,x*2,b,e);
	ret2=query(mid+1,r,x*2+1,b,e);
	if(ret1!=-1 && ret2!=-1)
		return gcd(ret1,ret2);
	else if(ret1==-1)
		return ret2;
	else if(ret2==-1) 
		return ret1;
	else return 1;
}
	map<int,LL>M;
int main()
{
	freopen("input.in", "r" , stdin);

	int n,q;
	while(cin>>n)
	{
		M.clear();
		FOR(i,0,n)
			cin>>arr[i];
		build(0,n-1,1);

		FOR(i,0,n)
		{
			int b=i,e=n-1,res=-1;
			int cur=arr[i];
			int beg=i;
			while(beg<n)
			{
				cur=query(0,n-1,1,i,beg);
				b=beg,e=n-1;
				int ret=-1;
				while(b<=e)
				{
					int mid=(b+e)/2;
					if(query(0,n-1,1,i,mid)==cur)
						b=mid+1,ret=mid;
					else e=mid-1;
				}
				M[cur]+=(LL)(ret-beg+1);
				beg=ret+1;
			}
		}
		int q;
		cin>>q;
		while(q--)
		{
			int num;
			cin>>num;
			cout << M[num] <<endl;
		}
	}

	return 0;
}


#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<sstream>
//#include<queue>
//#include<set>
//#include<stack>
//#include<math.h>
//
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) A.begin(), A.end()
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//
//struct point {
//int x,y;
//};
//
//char M[1009][1009];
//bool vis[1009][1009];
//int  acc[1009][1009];
//int  dp[1009][1009];
//
//	int n,m;
//
//int x,y;
//
//int free(int i, int j, int x , int y)
//{
//	int ret=0;	
//	ret += acc[i+x-1][j+y-1];
//	if(i)
//	ret -= acc[i-1][j+y-1];
//	if(j)
//	ret -= acc[i+x-1][j-1];
//	if(i & j)
//	ret += acc[i-1][j-1];
//	return ret;
//}
//
//
//point s;
//int c;
//
//int f()
//{
//	int b=1,e=m;
//	int res=-1;
//	while(b<=e)
//	{
//		int mid= (b+e)/2;
//		y=mid;
//		if(solve(s.x,s.y)==c)
//			e=mid-1,res=mid;
//		else b=mid+1;
//	}
//	return res;
//}
//
//int solve(int i ,int j)
//{
//	if(i>=n || j>=m)return 0;
//	if(dp[i][j]!=-1)
//		return dp[i][j];
//	int maxi=0;
//	if(free(i+1,j,x,y)==(x*y))
//		maxi = max(maxi,solve(i+1,j)+y);
//	if(free(i,j+1,x,y)==(x*y))
//		maxi = max(maxi,solve(i,j+1)+x));
//	return dp[i][j]=maxi;
//}
//
//
//
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//
//
//	while(cin>>n>>m)
//	{
//		Set(acc,0);
//		c=0;
//		s.x=-1,s.y=-1;
//	FOR(i,0,n)
//		FOR(j,0,m)
//	{
//		
//			cin>>M[i][j];
//			c += (M[i][j]=='X');
//			if(M[i][j]=='X')
//				if(s.x==-1)
//				{
//					s.x=i,s.y=j;
//				}
//	}
//
//		FOR(i,0,n)
//			FOR(j,0,m)
//		{
//				acc[i][j]=M[i][j]=='X';
//				if(i) acc[i][j] +=acc[i-1][j];
//				if(j) acc[i][j] +=acc[i][j-1];
//				if(i && j)
//					acc[i][j] -= acc[i-1][j-1];
//		}
//
//		int b1=1,e1=n;
//		int resx=-1;
//		while(b1<=e1)
//		{
//			x = (b1+e1)/2;
//			y = f();
//			if(y==-1)
//				b1=
//
//		}
//
//
//	
//	}
//
//	return 0;
//}
//
