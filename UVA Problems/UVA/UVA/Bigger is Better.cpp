//
//#include <vector>
//#include <list>
//#include <map>
//#include <set>
//#include <queue>
//#include <deque>
//#include <stack>
//#include <bitset>
//#include <algorithm>
//#include <functional>
//#include <numeric>
//#include <utility>
//#include <sstream>
//#include <iostream>
//#include <iomanip>
//#include <cstdio>
//#include <cmath>
//#include <cstdlib>
//#include <ctime>
//#include <cstring>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair
//#include <iostream>
//using namespace std;
//
//int n,m;
//int dp[109][3009];
//int arr[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };
//bool first;
//int solve(int mat , int cur )
//{
//	if(mat<0)return -1<<25;
//	if(mat == 0 && cur==0 )return 0;
//	if(dp[mat][cur]!=-1)
//		return dp[mat][cur];
//	int s1 = solve(mat-1 , cur);
//	
//	int s2 = -1<<25;
//	for(int i = 9 ; i>=0 ; i--)
//	{
//	//	if(mat == n && cur ==0 && i==0)continue;
//		int temp = solve(mat-arr[i] , (cur*10+i)%m ) +1;
//		s2 = max(s2 , temp );
//	}
//
//	return dp[mat][cur] = max(s1,s2);
//}
//
//string maxi = "";
//void print(int mat , int cur , string res)
//{
//	if(mat<0)
//		return ;
//	if(mat == 0 && cur==0 )
//	{
//		maxi = max(maxi,res);
//		return ;
//	}
//
//	int s1 = solve(mat-1 , cur);
//
//	int s2 = 0;
//	int opt = solve(mat,cur);
//
//	//string res = "";
//	int mn = 0;;
//	bool done = 0;
//	
//	for(int i = 9 ; i>=0 ; i--)
//	{
//		int temp = solve(mat-arr[i] , (cur*10+i)%m )+1;
//		if(temp==opt)
//		{
//			print(mat-arr[i] , (cur*10+i)%m , res  + (char)(i+'0') )   ;
//			s2 = max(temp,s2);
//			done =1;
//			//break;
//		}
//	}
//
//	 if(!done && s1==opt)
//		print(mat-1 , cur , res );
//		
//
//	return;
//
//}
//
//int main() 
//{
//	freopen("input.in","r",stdin);
//
//	int kase=0;
//	while(cin>>n)
//	{
//		if(!n)break;
//		maxi = "";
//		cin>>m;
//		Set(dp,-1);
//		cout<< "Case " << ++kase <<": ";
//		int res = solve(n,0);
//		//cout<< res <<endl;
//		if(res<=0)
//			cout << -1 <<endl;
//		else 
//		{
//			first = 0;
//		 print(n,0 , "");
//		//maxi
//		cout<< maxi << endl;
//		}
//	}
//	return 0;
//}
