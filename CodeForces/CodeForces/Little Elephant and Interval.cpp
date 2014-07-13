//#include<iostream>
//using namespace std;
//
//unsigned long long F(unsigned long long n)
//{
//if(n<10)return n;
//unsigned long long nn=n;
//int firstDig=0;
//while(n){firstDig=n%10;n/=10;}
//return (nn/10)+9-(firstDig>(nn%10));
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	unsigned long long x,y;
//	while(cin>>x>>y)
//	cout<<F(y)-F(x-1)<<endl;
//
//
//return 0;
//}