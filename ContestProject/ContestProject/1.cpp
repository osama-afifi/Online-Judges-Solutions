//#include<iostream>
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
//
//char a[10][10];
//
//bool yes=0;
//int n;
//
//int kx[] = {1,2,-1,-2,-1,-2,1,2};
//int ky[] = {2,1,2,1,-2,-1,-2,-1};
//
//int Kx[] = {0,0,1,-1,1,-1,-1,1};
//int Ky[] = {1,-1,0,0,1,1,-1,-1};
//
//
//__inline bool inside(int i , int j)
//{
//	return (i>=0 && j>=0 && i<8 && j<8);
//}
////
////void solve(int i1,int j1 ,int i2, int j2, int p, int m,bool turn)
////{
////	if(yes)return;
////	if(!inside(i1,j1) || !inside(i2,j2))
////		return;
////	if(m>n)
////		return;
////	if(p==0)
////	{
////		yes=1;
////		return;
////	}
////	//FOR(k,0,8)
////	//{
////	//	int newi=i1+Kx[k];
////	//	int newj=j1+Ky[k];
////	//	if(a[newi][newj]=='.')
////	//	{
////	//		swap(a[newi][newj],a[i1][j1]);
////	//		solve(newi,newj,i2,j2,p,m+1);
////	//	}
////	//	else if(a[newi][newj]=='P')
////	//	{
////	//		swap(a[newi][newj],a[i1][j1]);
////	//		a[i1][j1] = '.';
////	//		solve(newi,newj,i2,j2,p-1,m+1);
////	//	}
////	//}
////
////	FOR(k,0,8)
////	{
////		int newi=i2+kx[k];
////		int newj=j2+ky[k];
////		if(a[newi][newj]!='p')
////		{
////			swap(a[newi][newj],a[i2][j2]);
////			a[i2][j2] = '.';
////			solve(i1,j1,newi,newj,p,m+1,turn^1);
////		}
////		else if(a[newi][newj]=='P')
////		{
////			swap(a[newi][newj],a[i2][j2]);
////			a[i2][j2] = '.';
////			solve(i1,j1,newi,newj,p-1,m+1,turn^1);
////		}
////	}
////
////}
//
//bool vis[8][8][1<<10];
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		cin>>n;
//		yes=0;
//		FOR(i,0,8)
//			FOR(j,0,8)
//			cin>>a[i][j];
//		pair<int,int>king;
//		pair<int,int>knight;
//		int m[10][10];
//		Set(m,-1);
//
//		int p=0;
//		FOR(i,0,8)
//			FOR(j,0,8)
//		{
//
//			if(a[i][j]=='k')
//				knight = mp(i,j);
//			if(a[i][j]=='P')
//			{
//				m[i][j]=1<<p;
//				++p;
//			}
//
//		}
//
//		if(p==0)
//		{
//			cout << "Yes" <<endl;
//			continue;
//		}
//
//
//		Set(vis,0);
//		queue<int>Q;
//		Q.push(knight.first);
//		Q.push(knight.second);
//		Q.push(0);
//		Q.push(0);
//
//		while(Q.size())
//		{
//			int k_x = Q.front();Q.pop();
//			int k_y = Q.front();Q.pop();
//			int mask = Q.front();Q.pop();
//			int c = Q.front();Q.pop();
//
//			if(c>n)
//				continue;
//			if(mask==(1<<p)-1)
//			{
//				yes=1;
//				break;
//			}
//
//			if(vis[k_x][k_y][mask])
//				continue;
//			vis[k_x][k_y][mask]=1;
//			FOR(k,0,8)
//			{
//				int newi=k_x+kx[k];
//				int newj=k_y+ky[k];
//				if(!inside(newi,newj))
//					continue;
//
//				if((a[newi][newj]=='.' || a[newi][newj]=='P' || a[newi][newj]=='k'))
//				{
//
//					int nmask=mask;
//					if(a[newi][newj]=='P' &&!(mask & m[newi][newj]))
//						nmask|=m[newi][newj];
//					//		if(!vis[newi][newj][nmask])
//					{
//						Q.push(newi);
//						Q.push(newj);
//						Q.push(nmask);
//						Q.push(c+1);	
//					}
//				}
//			}
//
//
//		}
//
//		if(yes)
//			cout << "Yes" <<endl;
//		else
//			cout << "No" <<endl;
//	}
//
//
//	return 0;
//}