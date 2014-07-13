//
//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<set>
//#include<queue>
//#include<stack>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define LL long long
//using namespace std;
//
//int m,n;
//
//struct node
//{
//	LL l,r,sum , best;
//	void add( node &a , node &b )
//	{
//		l = max(a.l , a.sum+b.l);
//		r = max(b.r , b.sum+a.r);
//		sum = a.sum + b.sum;
//		best = max( max(max(l,r) , max(sum,a.r+b.l)) , max(a.best , b.best) );
//	}
//}T[250009<<2];
//
//int lef[55];
//int rig[55];
//int tot[55];
//int best[55];
//
//int arr[5009];
//int all[250009];
//
//void build(int l , int r , int n)
//{
//	if(l==r)
//	{
//		node temp = { lef[all[l]] , rig[all[l]] , tot[all[l]] , best[all[l]] };
//		T[n] = temp;
//		return;
//	}
//
//	int mid = (l+r)>>1;
//	build(l,mid,n<<1);
//	build(mid+1,r,1+(n<<1));
//	T[n].add(T[n<<1], T[1+(n<<1)]);
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	
//	while(scanf("%d %d", &n , &m) ==2 )
//	{
//
//		FOR(i,1,n+1)
//		{
//			int c;
//			scanf("%d" , &c);
//			tot[i] = 0;
//			FOR(j,0,c)
//			{
//				scanf("%d" , &arr[j]);		
//				tot[i] +=arr[j];
//			}
//			best[i] =  -1<<25;
//			int cur = 0;
//			FOR(j,0,c)
//			{
//				cur+= arr[j];
//				best[i] = max(cur, best[i]);
//				if(cur<0)
//					cur = 0;			
//				
//			}
//			cur = 0;
//			lef[i] =  -1<<25;
//			FOR(j,0,c)
//			{
//				cur += arr[j];
//				lef[i] = max(lef[i] , cur);
//			}
//			cur = 0;
//			rig[i]= -1<<25;
//			FOR(j,0,c)
//			{
//				cur += arr[c-j-1];
//				rig[i] = max(rig[i] , cur);
//			}
//				
//		}
//	
//		FOR(i,0,m)
//			scanf("%d", &all[i]);
//
//		build(0,m-1 , 1);
//	
//		cout<< T[1].best <<endl;
//	}
//
//	return 0;
//}