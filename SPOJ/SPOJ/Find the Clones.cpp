//
//
//#include<iostream>
//#include<string>
//#include<stdio.h>
//#include<map>
//
//using namespace std;
//
//map<string,int>M;
//int arr[20009];
//int main()
//{
//	freopen("input.in","r",stdin);
//	int l,s;
//	while(cin>>l>>s)
//	{
//		
//		if(l==0 && s==0)break;
//		string text;
//		cin.ignore();
//		M.clear();
//		for(int i = 0 ; i<=l ;i++)
//			arr[i]=0;
//		//memset(arr,0,sizeof 0);
//		map<string,int>::iterator it;
//		for(int i = 0 ; i<l ;i++)
//		{
//			getline(cin,text);
//			M[text]++;
//		}
//
//		for(it=M.begin() ; it!=M.end() ;it++)
//				arr[it->second]++;
//
//		
//		for(int i = 1 ; i<=l ;i++)
//			cout<<arr[i]<<endl;
//		
//
//	}
//	
//	return 0;
//}
