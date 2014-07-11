//#include <iostream>
//
//using namespace std;
//
//char arr[300];
//
//int main()
//{
//
//	freopen("input.in","r",stdin);
//int n,t,kase=0;
//char ch;
//cin>>t;
//
//while(t--)
//{
//cin>>n;
//
//for(int i = 0 ; i<n ; i++)
//	cin>>arr[i];
//
//if(n==1 && arr[0]=='.')
//{
//cout<<"Case "<<++kase<<": "<<1<<endl;
//continue;
//}
//
//int count=0;
//
//for(int i = 1 ; i<n ; i++)
//	if (arr[i] == '.')
//	{
//		arr[i+1]='#';
//	count++;
//	}
//
//	
//
//	cout<<"Case "<<++kase<<": "<<count<<endl;
//}
//
//return 0;
//}