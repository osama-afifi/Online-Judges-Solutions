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
//vector<int>V;
//int dp[30][30];
//long long dp2[30][30];
//set<char>S;
//int solve(int idx , int ch)
//{
//	if(idx == V.size())
//		return 0;
//	if(dp[idx][ch]!=-1)
//		return dp[idx][ch];
//	int s1 = 0 , s2 = 0;
//	 s1 = solve(idx+1 , ch);
//	 if(ch*5<=V[idx]*4)
//	 s2 = solve(idx+1 , V[idx])+1;
//	return dp[idx][ch] = max(s1,s2);
//}
//
//int c = 0;
//void W(int idx , int ch)
//{
//	if(idx == V.size())
//	{
//		 c++;
//		 return ;
//	}
//
//		int s1 = 0 , s2 = 0;
//	 s1 = solve(idx+1 , ch);
//	 if(ch*5<=V[idx]*4)
//	 s2 = solve(idx+1 , V[idx])+1;
//	 int opt = solve(idx , ch);
////	long long sum =0;
//	
//	if(opt==s1)
//		W(idx+1 , ch);
//	if(opt ==s2)
//		if(ch*5<=V[idx]*4)
//		W(idx+1 , V[idx]);
//
//}
//
//long long ways(int idx , int ch)
//{
//	if(idx == V.size())
//		return 1;
//
//		if(dp2[idx][ch]!=-1)
//		return dp2[idx][ch];
//
//	int opt = solve(idx,ch);
//	long long  sum = 0;
//
//	//if(opt == solve(idx+1 , ch) )
//	//	sum += ways(idx+1 , ch);
//
//
//	FOR(i,idx,V.size())
//		if(ch*5<=V[i]*4)
//		{
//			int sx = solve(i+1 , V[i])+1;
//			if(opt==sx)
//				sum += ways(i+1 , V[i]);
//		}
//	
//
//	return dp2[idx][ch] = sum;
//}
//
//int main() 
//{
//	freopen("input.in","r",stdin);
//
//	int n;
//	cin>>n;
//	
//		cin.ignore();
//		while(n--)
//		{
//			S.clear();
//			Set(dp,-1);
//			Set(dp2,-1);
//			string text;
//			getline(cin,text);
//			
//			FOR(i,0,text.length())
//				if(isalpha(text[i]))
//					S.insert(text[i]);
//			V.clear();
//			for(set<char>::iterator it = S.begin() ; it != S.end() ; it++)
//				V.push_back(*it - 'A' +1);
//			sort(V.begin() , V.end());
//		
//			int res =  solve(0,0);
//			c=0;
//			 W(0,0);
//			if(res==0)c=0;
//		//	 if(res!=0)
//			cout<< res << " "<< c << endl;
//		//	 else
//		//	 {
//		//		 cout<< 1 << S.size() <<endl;
//		//	 }
//			
//		
//		}
//	
//	return 0;
//}