//
//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <queue>
//#include <stack>
////#include <unordered_map>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair
//using namespace std;
//
////All cubes must be used.
////You may build more than one pyramid, but you must build as few pyramids as possible.
////All pyramids must be different.
////Each pyramid must have a height of at least 2.
////Satisfying the above, the largest of the pyramids must be as large as possible (i.e., containing the most cubes).
////Satisfying the above, the next-to-largest pyramid must be as large as possible.
////And so on...
//
////int const oo = 1e9;
//struct pyramid
//{
//	int base;
//	int stones;
//	char type;
//	pyramid(int b, int s, int t)
//	{
//		base = b;
//		stones = s;
//		type = t;
//	}
//	bool operator < (const pyramid &p)const
//	{
//		if (stones!=p.stones)
//			return stones>p.stones;
//		return type<p.type;
//	}
//};
//
//
//vector<pyramid>P;
//int rest[350];
//__inline void buildPyr()
//{
//	int sum = 0;
//
//	for(int i =1 ; i<=1e6 ; i++)
//	{
//		sum+= i*i;
//		if(sum>1e6)break;
//		if(i>1)
//			P.push_back(pyramid(i,sum,'H'));
//	}
//	sum = 0;
//	int h = 1;
//	for(int i =1 ; i<=1e6 ; i+=2 ,h++)
//	{
//		sum+= i*i;
//		if(sum>1e6)break;
//		if(h>1)
//			P.push_back(pyramid(i,sum,'L'));
//	}
//	h = 1;
//	sum =0;
//	for(int i =2 ; i<=1e6 ; i+=2 , h++)
//	{
//		sum+= i*i;
//		if(sum>1e6)break;
//		if(h>1)
//			P.push_back(pyramid(i,sum,'L'));
//	}
//	rest[P.size()-1] = P[P.size()-1].stones;
//		for(int i = P.size()-2 ; i>=0 ; i--)
//			rest[i] = rest[i+1]+P[i].stones;
//}
//
////int dp[321][10006];
////int solve(int idx , int x)
////{
////	if(x<0)
////		return 1<<25;
////	if(idx == P.size())
////		return (x==0) ? 0 : 1<<25;
////	if(dp[idx][x]!=-1)
////		return dp[idx][x];
////	int s1 = solve(idx+1, x-P[idx].stones)+1;
////	int s2 = solve(idx+1, x);
////	return dp[idx][x] = min(s1,s2);
////}
////
////void print(int idx , int x)
////{
////	if(x<0)
////		return;
////	if(idx == P.size())
////	{
////		return;
////	}
////	int opt = solve(idx,x);
////	int s1 = solve(idx+1, x-P[idx].stones)+1;
////	int s2 = solve(idx+1, x);
////	if(s1==opt)
////	{
////		cout << P[idx].base <<P[idx].type ;
////		solve(idx+1, x-P[idx].stones);
////	}
////	else if(s2==opt)
////		print(idx+1, x);
////}
////
////bool b = 0;
//
//int sol[10];
//int res[10];
//
//int mini = 1<<25;
//void f(int idx , int x, int d)
//{
//	//if(b)return;
//	if(d>mini)return;
//	//if(d==6)	return;
//	if(x<0)return;
//	
//	if(idx == P.size())
//	{
//		if(x==0 && d<mini)
//		{
//			mini = d;
//			FOR(i,0,mini)
//				res[i]=sol[i];
//		}
//		return;
//	}
//	if(d+x/P[idx].stones > mini)
//		return;
//	//if(rest[idx]<x)return;
//	sol[d]=idx;
//	//if(x-P[idx].stones>=0)
//	{
//	f(idx+1, x-P[idx].stones,d+1);
//	f(idx+1, x, d);
//	}
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int n;
//	buildPyr();
//	sort(P.begin() , P.end());
//	//Set(dp,-1);
//	//	solve(0,10000);
//	int kase = 0;
//	while(cin>>n)
//	{
//		if(n==0)break;
//		cout << "Case "<< ++kase <<": ";
//		mini = 1<<25;
//		
//		f(0,n,0);
//		if(mini<1000)
//		{
//			cout<<P[res[0]].base<<P[res[0]].type;
//			FOR(i,1,mini)
//				cout<<" "<<P[res[i]].base<<P[res[i]].type;
//			cout<<endl;		
//		}
//		else
//			cout << "impossible" <<endl;
//
//	}	
//	return 0;
//}
