//
//#include <iostream>
//#include <map>
//#include <cstdio>
//#include <queue>
//#include <vector>
//#include <cstring>
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
//int n,h;
//int travel[30];
//int fish[30];
//int d[30];
//
//int dp[30][200];
//int solve(int idx , int time)
//{
//	if(time<0)
//		return -(1<<25);
//	if(idx>=n)
//		return 0;
//	if(dp[idx][time]!=-1)
//		return dp[idx][time];
//	int maxi =0;
//
//	int cur = fish[idx];
//	vector<int>V;
//	V.push_back(0);
//	for(int j= 1 ; j<=time ; j++)
//	{
//		V.push_back(V[j-1] + cur);
//		cur-=d[idx]; 
//		if(cur<0) cur = 0;
//	}
//	for(int i=time; i>=1 ; i--)
//	{
//
//		maxi = max(maxi , solve(idx+1, time-i-travel[idx])+V[i]);
//		maxi = max(maxi , solve(idx+n, time-i)+V[i]);
//	}
//	maxi = max(maxi , solve(idx+n, time));
//	maxi = max(maxi , solve(idx+1, time-travel[idx]));
//	return dp[idx][time] = maxi;
//}
//
//vector<int> sol;
//void print(int idx , int time)
//{
//	if(time<0)return;
//	if(idx>=n)	return;
//	int opt = solve(idx,time);
//	int maxi = 0;
//	int cur = fish[idx];
//	vector<int>V;
//	V.push_back(0);
//	for(int j= 1 ; j<=time ; j++)
//	{
//		V.push_back(V[j-1] + cur);
//		cur-=d[idx]; 
//		if(cur<0) cur = 0;
//	}
//	for(int i=time; i>=1 ; i--)
//	{
//
//		if(opt==solve(idx+1, time-i-travel[idx])+V[i])
//		{
//			sol[idx] = i*5;
//			print(idx+1, time-i-travel[idx]);
//			return;
//		}
//		else if(opt==solve(idx+n, time-i)+V[i])
//		{
//			sol[idx] = i*5;
//			print(idx+n, time-i);
//			return;
//		}
//	}
//
//	if(opt==solve(idx+n, time))
//	{
//		print(idx+n, time);
//		sol[idx] = 0;
//	}
//	else if(opt==solve(idx+1, time-travel[idx]))
//	{
//		print(idx+1, time-travel[idx]);
//		sol[idx] = 0;
//	}
//
//
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	bool f = 1;
//	while(cin>>n>>h)
//	{
//		if(!f)cout<<endl;
//		f=0;
//		Set(dp,-1);
//		if(n==0)break;
//		FOR(i,0,n)
//			cin>>fish[i];
//		FOR(i,0,n)
//			cin>>d[i];
//		FOR(i,0,n-1)
//			cin>>travel[i];
//		travel[n-1] = 0;
//		sol.clear();
//		sol.resize(n);
//		int res = solve(0,h*12);
//		print(0,h*12);
//		cout<<sol[0];
//		FOR(i,1,sol.size())
//			cout << ", " << sol[i];
//		cout<<endl;
//		cout<< "Number of fish expected: "<< res <<endl;
//	}
//
//	return 0;
//}
