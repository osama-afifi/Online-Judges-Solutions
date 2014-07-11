//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//string LIST[10001];
//bool comp (string a,string b)
//{
//	if(a.length()<b.length())
//		return true;
//	return false;
//}
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t;
//	cin>>t;
//	cin.ignore();
//	int N;
//	while(t>0)
//	{		
//		cin>>N;
//		cin.ignore();
//
//		for(int i=0 ; i<N;i++)
//			cin>>LIST[i];
//
//		bool consist=false;
//		sort(LIST,LIST+N);
//		int len;
//	
//		for(int i=0 ; i<N-1;i++)
//		{
//			len=LIST[i].length();
//				if(LIST[i]==LIST[i+1].substr(0,len))
//				{
//					consist=true;
//					break;
//				}
//		}
//
//
//		if(!consist)
//			cout<<"YES"<<endl;
//
//		else
//			cout<<"NO"<<endl;
//		t--;
//	}
//
//	return 0;
//}
//				