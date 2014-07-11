//#include <iostream>
//#include <algorithm>
//#include <cstdio>
//#include <vector>
//#include <string>
//#include <map>
//#include <cmath>
//using namespace std;
//
//#define MAX 1000009
//
//
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
//		string s = "bananabbanana";
//		cout<< "Z Arrays of :"<<endl;
//		for (int i = 0; i < s.length(); i++)
//			cout<<s[i] << " ";
//		cout<<endl;
//		vector<int>Z = zfunction(s);
//		for (int i = 0; i < s.length(); i++)
//			cout<<Z[i] << " ";
//
//	return 0;
//}
