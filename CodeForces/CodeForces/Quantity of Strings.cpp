//#include<iostream>
//#include<stdio.h>
//#include<sstream>
//#include<algorithm>
//#include<string>
//#include<map>
//
//
//using namespace std;
//
//inline long long sq(long long  x)
//{return x*x;}
//
//long long power(long long  n , long long  p )
//{
//if(p==0)return 1;
//if(p==1)return n%1000000007;
//if(p&1)return (power(n,p-1)%1000000007)*(n%1000000007)%1000000007 ;
//else return sq(power(n,p/2)%1000000007);
//
//}
//
//int main()
//{
//  //  freopen("input.in","r",stdin);
//    char text[109][109];
//    long long n,m,k;
//while(cin>>n>>m>>k)
//{
//    long long res;
//    if(k==1 || k>n)
//        res=power(m,n)%1000000007;
//    else if(n==k)
//        res=power(m,(n+1)/2)%1000000007;
//    else if(k&1)
//        res=power(m,2)%1000000007;
//    else res=m%1000000007;
//
//    cout<<res<<endl;
//}
//        return 0;
//}