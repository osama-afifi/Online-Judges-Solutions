//#include <iostream>
//#include <string>
//#include <cstring>
//
//using namespace std;
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int t;
//	cin>>t;
//	cin.ignore();
//	while(t>0)
//	{
//		string text;
//		cin>>text;
//
//		string x;
//		string sum;
//
//		bool per=false;
//		for(int i=1;i<text.length();i++)
//		{
//			x=text.substr(0,i);
//
//			while(sum.length()<=text.length())
//			{
//				sum+=x;
//				if(sum==text)
//				{
//					per=true;
//					break;
//				}
//			}
//
//			if(per==true)break;
//			sum.clear();
//		}
//
//		if(per==true)
//			cout<<x.length()<<endl;
//
//		else
//			cout<<text.length()<<endl;
//
//		if(t!=1)cout<<endl;
//
//		t--;
//	}
//
//	return 0;
//}