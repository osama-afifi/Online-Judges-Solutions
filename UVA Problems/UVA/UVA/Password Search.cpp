//#include <iostream>
//#include <map>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int n;
//	string text;
//	while(cin>>n)
//	{
//		map<string,int> M;
//		map<string,int> ::iterator it;
//		cin>>text;
//		for(int i = 0 ; i<text.length()-n+1; i++)
//			M[text.substr(i,n)]++;
//		int maxi=0;
//		map<string,int> ::iterator res;
//		for(it=M.begin() ; it!=M.end() ; it++)
//			if(it->second>maxi)
//			{
//				maxi=it->second;
//				res=it;
//			}
//
//			cout<<res->first<<endl;
//	}
//
//	return 0;
//}