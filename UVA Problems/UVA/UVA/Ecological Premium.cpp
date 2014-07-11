#include <iostream>
#include <iomanip>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);
long int t; 
cin>>t;
while(t>0)
{
	long int f,s,a,e,sum=0;

cin>>f;

while (f>0)
{

cin>>s>>a>>e;

sum=sum+(s*e);

f--;
}
cout<<sum<<endl;
t--;}



	return 0;
}
