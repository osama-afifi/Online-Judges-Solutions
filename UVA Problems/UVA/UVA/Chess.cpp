#include <iostream>


using namespace std;

int main()
{
		freopen("input.in", "r", stdin);
 int t;
 cin>>t;
 while (t>0)
 {
 int res,x,y,z;

 char choice;
 cin>>choice;
 
 if (choice=='r')
 {
	 cin>>x>>y;
	 if (y<x)
		swap(x,y);

	 	 res=x;
 }

 else if (choice=='k')
 {
	 cin>>x>>y;
	if (y<x)
		swap(x,y);

	z=y/2;

	if (y%2==1)
	res=(z*x)+((x+1)/2);

	else
	res=(z*x);

 }
 
 else if (choice=='Q')
 {
	 cin>>x>>y;
	 if (y<x)
		swap(x,y);
	 	res=x;

 }
 
 else if (choice=='K')
 {
	 cin>>x>>y;
	 res=((y+1)/2)*((x+1)/2);
	 
 }

 cout<<res<<endl;
 
 t--;}

 return 0;
}