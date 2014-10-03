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
//
//void failureFunction(vector<int> &p, vector<int> &F)
//{
//	int m = p.size(), k = 0;
//	F[0] = 0;
//	for (int q = 1; q < m ; ++q) 
//	{
//		while (k > 0 && p[k] != p[q])
//			k = F[k - 1];
//		if (p[k] == p[q])
//			k++;
//		F[q] = k;
//	}
//}
//
//vector<int> KMP(vector<int> &p, vector<int>&s)
//{
//	vector<int>M;
//	vector<int>F(p.size()+1,0);
//	failureFunction(p,F);
//	int q=0;
//	for(int i = 0 ; i<s.size() ; i++)
//	{
//		while(q && s[i]!=p[q]) q = F[q-1];
//		if(s[i]==p[q])	q++;
//		if(q==p.size())
//		{
//			M.push_back(i-p.size()+1);
//			q = F[q-1];
//		}
//	}
//	return M;
//}
//
//
//int arr[200009];
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	int n,w;
//	while(cin>>n>>w)
//	{
//		vector<int>s;
//		vector<int>p;
//		int num;
//		if(w>n)
//		{
//			FOR(i,0,n)
//				cin>>num,s.push_back(num);
//			FOR(i,0,w)
//				cin>>num,p.push_back(num);
//			cout << 0 <<endl;
//			continue;
//		}
//		if(w==1)
//		{
//
//			FOR(i,0,n)
//				cin>>num,s.push_back(num);
//			FOR(i,0,w)
//				cin>>num,p.push_back(num);
//
//			cout << s.size() <<endl;
//			continue;
//		}
//
//		FOR(i,0,n)
//			cin>>arr[i];
//		FOR(i,0,n-1)
//			s.push_back(arr[i+1]-arr[i]);
//
//
//		FOR(i,0,w)
//			cin>>arr[i];
//		FOR(i,0,w-1)
//			p.push_back(arr[i+1]-arr[i]);
//		int res = KMP(p,s).size();
//		cout << res <<endl;
//	}
//
//	return 0;
//}