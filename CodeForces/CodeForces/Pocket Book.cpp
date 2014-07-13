//#include<iostream>
//#include<stdio.h>
//#include<sstream>
//#include<algorithm>
//#include<string>
//#include<map>
//
//using namespace std;
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	char text[109][109];
//	int n,m;
//	cin>>n>>m;
//	for(int i = 0 ; i< n ;i++)
//		scanf("%s",&text[i]);
//
//	long long res=1;
//	map<char,int>M;	
//	for(int i = 0 ; i< m ;i++)
//	{
//		M.clear();
//		for(int j = 0 ; j< n ;j++)
//		M[text[j][i]]++;
//
//		res=(res%1000000007)*(M.size()%1000000007);
//		
//	}
//	cout<<res%1000000007<<endl; 
//
//
//		return 0;
//}