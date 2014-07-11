//#include <iostream>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//struct player
//{
//string name;
//	int att,def;
//
//	bool operator <(const player &a) const
//	{
//			if(att!=a.att)
//			return att>a.att;
//
//						if(def!=a.def)
//			return def<a.def;
//
//								
//			return name<a.name;
//	}
//
//};
//
//bool cmp ( player a , player b)
//{
//		return (a.name<b.name);
//}
//
//
//player tina[11];
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t,kase=0;
//	cin>>t;
//	cin.ignore();
//
//	while(t>0)
//	{
//	for(int i=0;i<10;i++)
//		cin>>tina[i].name>>tina[i].att>>tina[i].def;
//	
//	sort(tina,tina+10);
//	sort(tina,tina+5,cmp);
//	sort(tina+5,tina+10,cmp);
//	cout<<"Case "<<++kase<<":"<<endl;
//
//	cout<<"("<<tina[0].name;
//	for(int i=1 ; i<5 ;i++)
//		cout<<", "<<tina[i].name;
//	cout<<")"<<endl;
//
//		cout<<"("<<tina[5].name;
//	for(int i=6 ; i<10 ;i++)
//		cout<<", "<<tina[i].name;
//	cout<<")"<<endl;
//
//	t--;
//	}
//
//return 0;
//}