////
////#include <iostream>
////#include <stdio.h>
////#include <algorithm>
////#include <iomanip>
////#include <string>
////#include <cstring>
////#include <vector>
////#include <map>
////#include <math.h>
////#include <queue>
////
////#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
////#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
////#define Set(a, s) memset(a, s, sizeof (a))
////#define mp make_pair
////
////using namespace std;
////
////int n,m;
////int mx[] = {1, -1 , 0 , 0, 1, 1, -1, -1 };
////int my[] = {0, 0 , 1 , -1, 1, -1, 1, -1 };
////
////bool vis[10][10];
////bool temp[10][10];
//////vector< pair< pair<int,int > ,int> >P;
////
////int x1,x2,x3,x4;
////int yy1,yy2,yy3,yy4;
////int z1,z2,z3,z4;
////
////
////inline bool valid(int i,int j)
////{return !(i>=n || i<0 || j>=m || j<0 );}
////inline int manhatten(int x1,int y1,int x2,int y2)
////{ 	return abs(x1-x2)+abs(y1-y2); }
////
////int counter=0;
////void dfs(int i , int j)
////{
////	if(!valid(i,j) || temp[i][j] || vis[i][j])return;
////	counter++;
////	temp[i][j]=1;
////	FOR(k,0,4)
////		dfs(i+mx[k],j+my[k]);
////}
////inline int check(int x, int y)
////{
////	Set(temp,0);
////	counter = 0;
////	dfs(x,y);
////int res = counter;	
////return res;
////}
////
////vector<unsigned long long> v1;
////
////int solve(int i, int j,  int c)
////{
////	if(i>=n || i<0 || j>=m || j<0 || c>m*n )return 0;
////	if(i==0 && j==1)
////		if (c == n*m) return 1;
////		else return 0;	
////		if(c+manhatten(i,j,0,1)>n*m)return 0;
////
////		if(c<z1)		    if(c+manhatten(i,j,x1,yy1)>z1)return 0; 
////		if(c>=z1 && c<z2 )	if(c+manhatten(i,j,x2,yy2)>z2)return 0; 
////		if(c>=z2 && c<z3 )	if(c+manhatten(i,j,x3,yy3)>z3)return 0; 
////		if(c>=z3 && c<z4 )	if(c+manhatten(i,j,x4,yy4)>z4)return 0; 
////
////		if(i==x1 && j==yy1 && c != z1)return 0;
////		if(i==x2 && j==yy2 && c != z2)return 0;
////		if(i==x3 && j==yy3 && c != z3)return 0;
////		if(i==x4 && j==yy4 && c != z4)return 0;
////		
////		if( c == z1 && i!=x1 && j!=yy1 )return 0; 
////		if( c == z2 && i!=x2 && j!=yy2 )return 0; 
////		if( c == z3 && i!=x3 && j!=yy3 )return 0; 
////		if( c == z4 && i!=x4 && j!=yy4 )return 0; 
////
////		if(check(0,1)!=(n*m)-c)return 0;
////		int sum = 0;
////		FOR(k,0,4)
////			if(!vis[i+mx[k]][j+my[k]])
////			{
////				vis[i+mx[k]][j+my[k]]=1;
////				sum += solve(i+mx[k], j+my[k], c+1);
////				vis[i+mx[k]][j+my[k]]=0;
////			}
////			return sum;
////}
////int main() 
////{
////	freopen("input.in","r",stdin);
////	int kase=0;
////	while(scanf("%d %d",&n,&m)==2)
////	{
////		if(m==0 && n==0)break;
////		int a,b,c,d,e,f;
////
////			scanf("%d %d %d %d %d %d",&x1,&yy1,&x2,&yy2,&x3,&yy3);
////			x4 = 0 , yy4=1;
////			z1=	(m*n)/4 ;
////			z2=	(m*n)*2/4;
////			z3=	(m*n)*3/4;
////			z4 = m*n;
////		
////		Set(vis,0);
////		counter=0;
////		vis[0][0]=1;
////		printf("Case %d: %d\n",++kase,solve(0,0,1));
////	}
////	return 0;
////}
//
///////////////////////////////////////////////////////
//
////#include <iostream>
////#include <stdio.h>
////#include <algorithm>
////#include <iomanip>
////#include <string>
////#include <cstring>
////#include <vector>
////#include <map>
////#include <math.h>
////#include <queue>
////
////#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
////#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
////#define Set(a, s) memset(a, s, sizeof (a))
////#define mp make_pair
////
////using namespace std;
////int n,m;
////int mx[] = {1, -1 , 0 , 0, 1, 1, -1, -1 };
////int my[] = {0, 0 , 1 , -1, 1, -1, 1, -1 };
////int mxx[] = {-1, 0 , 1 , 1, 1, 0, -1, -1 };
////int myy[] = {-1,-1 ,-1 , 0, 1, 1,  1, 0 };
////bool vis[10][10];
////bool temp[10][10];
////vector< pair< pair<int,int > ,int> >P;
////int M,counter;
////inline bool valid(int i,int j)
////{return !(i>=n || i<0 || j>=m || j<0 );}
////inline int manhatten(int x1,int y1,int x2,int y2)
////{ 	return abs(x1-x2)+abs(y1-y2); }
////
////
////void dfs(int i , int j)
////{
////	if(!valid(i,j) || temp[i][j] || vis[i][j])return;
////	temp[i][j]=1;
////	FOR(k,0,4)
////		dfs(i+mx[k],j+my[k]);
////}
////inline int check(int x, int y)
////{
////	Set(temp,0);
////
////			dfs(0,1);
////			FOR(k,0,n)
////				FOR(l,0,m)
////				if(!vis[k][l] && !temp[k][l])return false;
////			return true;		
////		return false;
////}
////
////
////void solve(int i, int j,  int c)
////{
////	if(i>=n || i<0 || j>=m || j<0 || c>m*n )return ;
////	if(i==0 && j==1)
////		if (c == n*m) counter++;
////		else return;	
////		if(c+manhatten(i,j,0,1)>n*m)return ;
////		FOR(k,0,3)
////		{
////			if(c<P[k].second && c+manhatten(i,j,P[k].first.first,P[k].first.second)>P[k].second)return ; //can't
////			if(i==P[k].first.first && j==P[k].first.second && c != P[k].second)return ; // early
////			if( c == P[k].second && i!=P[k].first.first && j!=P[k].first.second )return ; // late
////		}
////		if(!check(0,1))return ;
////		FOR(k,0,4)
////			if(!vis[i+mx[k]][j+my[k]])
////			{
////				vis[i+mx[k]][j+my[k]]=1;
////				solve(i+mx[k], j+my[k], c+1);
////				vis[i+mx[k]][j+my[k]]=0;
////			}
////}
////int main() 
////{
////	freopen("input.in","r",stdin);
////	int kase=0;
////	while(scanf("%d %d",&n,&m)==2)
////	{
////		if(m==0 && n==0)break;
////		int a,b;
////		FOR(i,0,3)
////		{
////			scanf("%d %d",&a,&b);
////			P.push_back(mp(mp(a,b), (m*n)*(i+1)/4 ));
////		}
////		Set(vis,0);
////		counter=0;
////		vis[0][0]=1;
////			solve(0,0,1);
////		printf("Case %d: %d\n",++kase,counter);
////	}
////	return 0;
////}
//
//////////////////////////////////////////////////////////////////////
//
//
//#include <iostream>
//#include <stdio.h>
//#include <algorithm>
//#include <iomanip>
//#include <string>
//#include <cstring>
//#include <vector>
//#include <map>
//#include <math.h>
//#include <queue>
//#include <limits>
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair
//
//using namespace std;
//
//int n,m;
//int mx[] = {1, -1 , 0 , 0, 1, 1, -1, -1 };
//int my[] = {0, 0 , 1 , -1, 1, -1, 1, -1 };
//
//bool vis[10][10];
//bool temp[10][10];
////vector< pair< pair<int,int > ,int> >P;
//int counter;
//int x1,x2,x3,x4;
//int yy1,yy2,yy3,yy4;
//int z1,z2,z3,z4;
//inline bool valid(int i,int j)
//{return !(i>=n || i<0 || j>=m || j<0 );}
//inline int manhatten(int x1,int y1,int x2,int y2)
//{ 	return abs(x1-x2)+abs(y1-y2); }
//
//
//void dfs(int i , int j)
//{
//	if(!valid(i,j) || temp[i][j] || vis[i][j])return;
//	counter++;
//	temp[i][j]=1;
//	FOR(k,0,4)
//		if(valid(i+mx[k],j+my[k]))
//			dfs(i+mx[k],j+my[k]);
//}
//inline int check(int x, int y)
//{
//	Set(temp,0);
//	counter = 0;
//	dfs(x,y);
//	return 	counter;
//}
//vector< unsigned long long > v1;
//vector< unsigned long long > v2;
//int M = m*n;
//
//void s1(int i, int j,  int c)
//{
//	if(i>=n || i<0 || j>=m || j<0 || c>z2)return;
//	if(i==0 && j ==1)return;
//	if(i==x2 && yy2==j)
//		if (c == z2)
//		{
//			unsigned long long sol = 0;
//			FOR(i,0,n)
//				FOR(j,0,m)
//				if(vis[i][j])
//					sol |= (1ULL<<(i*n+j));
//			v1.push_back(sol);
//			return ;
//		}
//		else return;	
//		if(c<z1)		    if(c+manhatten(i,j,x1,yy1)>z1)return; 
//		if(c>=z1 && c<z2 )	if(c+manhatten(i,j,x2,yy2)>z2)return; 
//		if(i==x1 && j==yy1 && c != z1)return ;
//		if(i==x2 && j==yy2 && c != z2)return ;	
//		if( c == z1 && i!=x1 && j!=yy1 )return ; 
//		if( c == z2 && i!=x2 && j!=yy2 )return ; 
//		if(check(0,1) != M-c+1)return ;
//		FOR(k,0,4)
//			if(!vis[i+mx[k]][j+my[k]])
//			{
//				vis[i+mx[k]][j+my[k]]=1;
//				s1(i+mx[k], j+my[k], c+1);
//				vis[i+mx[k]][j+my[k]]=0;
//			}
//}
//
//void s2(int i, int j,  int c)
//{
//	if(i>=n || i<0 || j>=m || j<0 || c>z2)return;
//	vis[i][j]=1;
//	if(i==x2 && j==yy2)
//		if (c == z2-1)
//		{
//			unsigned long long sol = 0;
//			FOR(i,0,n)
//				FOR(j,0,m)
//				if(vis[i][j])
//					sol |= (1ULL<<(i*n+j));
//			v2.push_back(sol);
//			return ;
//		}
//		else return;	
//		if(c+manhatten(i,j,x2,yy2)>M-z2)return;
//		if(c>=M-z1 && c<M-z2 )	if(c+manhatten(i,j,x2,yy2)>M-z2)return; 
//		if(c>=M-z2 && c<M-z3 )	if(c+manhatten(i,j,x3,yy3)>M-z3)return; 
//		if(i==x3 && j==yy3 && c != M-z3)return ;
//		if( c == M-z3 && i!=x3 && j!=yy3 )return ; 
//		if(check(0,0)!=M-c)return ;
//		FOR(k,0,4)
//			if(!vis[i+mx[k]][j+my[k]])
//			{
//				vis[i+mx[k]][j+my[k]]=1;
//				s2(i+mx[k], j+my[k], c+1);
//				vis[i+mx[k]][j+my[k]]=0;
//			}
//}
//
//int main() 
//{
//	freopen("input.in","r",stdin);
//	int kase=0;
//	while(scanf("%d %d",&n,&m)==2)
//	{
//		if(m==0 && n==0)break;
//		M = m*n;
//		scanf("%d %d %d %d %d %d",&x1,&yy1,&x2,&yy2,&x3,&yy3);
//		x4 = 0 , yy4=1;
//		z1=	(m*n)/4 ;
//		z2=	(m*n)*2/4;
//		z3=	(m*n)*3/4;
//		z4 = m*n;
//		v1.clear();
//		v2.clear();
//		Set(vis,0);
//		//vis[0][0]=1;
//		s1(0,0,1);
//		Set(vis,0);
//		//vis[1][0]=1;
//		s2(0,1,1);
//		FOR(i,0,v1.size())
//		{
//			FOR(j,0,M)
//				cout<<((v1[i]&(1ULL<<j))!=0);
//			cout<<endl;
//		}
//		cout<<endl;
//		FOR(i,0,v2.size())
//		{
//			FOR(j,0,M)
//				cout<<((v2[i]&(1ULL<<j))!=0);
//			cout<<endl;
//		}
//		int c = 0;
//		FOR(i,0,v1.size())
//			FOR(j,0,v2.size())
//		{
//			unsigned long long z = v1[i]&v2[j];
//			c += (z==0);
//		}
//		printf("Case %d: %d\n",++kase,c);
//	}
//	return 0;
//}
