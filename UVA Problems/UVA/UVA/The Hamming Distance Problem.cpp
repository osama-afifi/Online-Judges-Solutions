//#include <iostream>
//#include <string>
//
//using namespace std;
//int t;
//int n,h;
//int m;
//string text;
//string ans[12871];
//void solve(int index , int start)
//{
//
//	if(index==h)
//		ans[m++]=text;
//	else
//	{
//		for(int i =start ;i<n ;i++)
//		{
//			if(text[i]!='1')
//			{
//			text[i]='1';
//			solve(index+1 ,i);
//			text[i]='0';
//			}
//		}
//	}
//
//}
//
//int main()
//{
//
//	freopen("input.in","r",stdin);
//
//
//
//	cin>>t;
//	while(t--)
//	{
//		cin>>n>>h;
//		m=0;
//
//		text.clear();
//		text.append(n,'0');
//
//		solve(0,0);
//
//		for(int i = m-1 ; i>=0 ; i--)
//			cout<<ans[i]<<endl;
//
//		if(t)cout<<endl;
//	}
//
//	return 0;
//}