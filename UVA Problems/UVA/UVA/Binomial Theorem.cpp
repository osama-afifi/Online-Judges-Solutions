//#include<iostream>
//#include<sstream>
//#include<string>
//
//using namespace std;
//
//unsigned long long bino[100][100];
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int kase=0;
//	for(int i=0;i<=50;i++)
//		for(int j=0;j<=i;j++)
//			if(i!=j &&i!=0)
//				bino[i][j]=bino[i-1][j]+bino[i-1][j-1];
//			else bino[i][j]=1;
//			string s1,s2,text;
//			int t;
//			cin>>t;
//			cin.ignore();
//			while(t--)
//			{
//				getline(cin,text);
//				int p;
//				for(int i = 0 ;i<text.length();i++)
//					if(text[i]=='(' || text[i]==')'  || text[i]=='+'  || text[i]=='^' )
//						text[i]=' ';
//				stringstream ss;
//				ss<<text;
//				ss>>s1>>s2>>p;
//
//
//				cout<<"Case "<<++kase<<": ";
//				if(p<2)
//				cout<<s1;
//				else
//					cout<<s1<<"^"<<p;
//				for(int j=1;j<=p;j++)
//					//if(j==0)
//					//cout<<s1<<"^"<<p;
//					//else if(j==p)
//					//cout<<s2<<"^"<<p;
//					//else
//				{
//	cout<<"+";
//					if(bino[p][j]>1)
//						cout<<bino[p][j]<<"*";
//					cout<<s1;
//					if(p-j>1)
//						cout<<"^"<<p-j;
//
//				cout<<"*";
//
//					if(bino[p][p-j]>1)
//						cout<<bino[p][p-j]<<"*";
//					cout<<s2;
//					if(j>1)
//						cout<<"^"<<j;
//				}
//
//				cout<<endl;
//			}
//
//
//
//			return 0;
//}