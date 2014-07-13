//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<set>
//#include<map>
//
//#include<queue>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) (A.begin(), A.end())
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//
//
//int F[300009];
//void failureFunction(string &p)
//{
//	int m = p.length(), k = 0;
//	F[0] = 0;
//	for (int q = 1; q <= m - 1; ++q) {
//		while (k > 0 && p[k] != p[q])
//			k = F[k - 1];
//		if (p[k] == p[q])
//			k++;
//		F[q] = k;
//	}
//}
//
//bool match(string &p,string &t)
//{
//	int i=0 , q= 0;
//	failureFunction(p);
//	FOR(i,0,t.length())
//	{
//		while(q>0 && p[q]!=t[i])
//			q = F[q-1];
//		if(p[q]==t[i])
//			++q;
//		if(q==p.length())
//			return true;
//	}
//
//	return false;
//}
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//	vector<string> s;
//		
//	FOR(i,0,3)
//	{
//		string text;
//		cin>>text;
//		s.push_back(text);
//	}
//	sort(s.begin() , s.end());
//	FOR(i,0,s.size())
//		FOR(j,0,s.size())
//			if(i!=j)
//				if(s[i] == "" || match(s[i],s[j]))
//					s.erase(s.begin()+i);
//	int G[5][5];
//	Set(G,0);
//	FOR(i,0,s.size())
//	{
//		FOR(j,0,s.size())
//			if(i!=j)
//			{
//					string temp = s[i]+ '$' + s[j];
//					failureFunction(temp);
//					int maxi = 0;
//					G[j][i]=s[i].length()-F[temp.length()-1];
//			}
//	}
//	int mini = 1<<25;
//	if(s.size()==3)
//	{
//	
//	FOR(k,0,s.size())
//		FOR(i,0,s.size())
//		if(i!=k)
//			FOR(j,0,s.size())
//			if(i!=j && j!=k)
//				mini = min(mini , (int)s[k].length() + G[k][i] + G[i][j]);
//
//	cout<< mini <<endl;
//	}
//	else if(s.size()==2)
//	{
//	FOR(k,0,s.size())
//		FOR(i,0,s.size())
//		if(i!=k)
//			mini = min(mini , (int)s[k].length() + G[k][i]);
//	cout << mini <<endl;
//	}
//	else if(s.size()==1)
//		cout <<s[0].length() <<endl;
//
//
//
//	return 0;
//}