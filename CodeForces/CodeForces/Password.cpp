//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<queue>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) (A.begin(), A.end())
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//int oo=1<<25;
//
//#define MAX 1000009
//
//string s;
//int p[MAX];
//
//vector<int> zfunction(string s)
//{
//	int n = s.length();
//	vector<int>Z(s.length());
//	int L = 0, R = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (i > R)
//		{
//			L = R = i;
//			while (R < n && s[R-L] == s[R])
//				R++;
//			Z[i] = R-L; 
//			R--;
//		} 
//		else 
//		{
//			int k = i-L;
//			if (Z[k] < R-i+1) 
//				Z[i] = Z[k];
//			else
//			{
//				L = i;
//				while (R < n && s[R-L] == s[R])
//					R++;
//				Z[i] = R-L; 
//				R--;
//			}
//		}
//	}
//	return Z;
//}
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	while(cin>>s)
//	{
//		vector<int> Z = zfunction(s);
//		int maxi = 0;
//
//
//		FOR(i,1,s.length())
//				maxi = max(maxi , min(Z[i], (int)s.length()-i-1));
//		bool found = 0;
//		FOR(i,s.length()-maxi,s.length())
//			if(Z[i]+i==s.length())
//				{
//					cout << s.substr(0,s.length()-i) << endl;
//					found = 1;
//					break;
//				}
//				if(!found)
//					cout << "Just a legend\n";
//				//cout << maxi <<endl;
//	}
//	return 0;
//}