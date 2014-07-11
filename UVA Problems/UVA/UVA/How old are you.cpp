//#include <iostream>
//#include <sstream>
//#include <string>
//#include <map>
//using namespace std;
//
//string TOLOWER(string text){
//	for(int i=0;i<text.length();i++)
//		text[i]=tolower(text[i]);
//	return text;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t,kase=1;
//	cin>>t;
//
//	while(t>0)
//	{
//		int d1,m1,y1,d2,m2,y2;
//		char dum;
//
//		cin>>d1>>dum>>m1>>dum>>y1;
//		cin>>d2>>dum>>m2>>dum>>y2;
//
//		int age=y1-y2;
//		if(m2>m1)age--;
//		else if(m2==m1)
//		{
//			if(d2>d1)age--;
//		}
//
//		if(age<0)
//			cout<<"Case #"<<kase++<<": Invalid birth date"<<endl;
//		else if(age>130)
//			cout<<"Case #"<<kase++<<": Check birth date"<<endl;
//		else
//			cout<<"Case #"<<kase++<<": "<<age<<endl;
//		t--;
//	}
//	return 0;
//}