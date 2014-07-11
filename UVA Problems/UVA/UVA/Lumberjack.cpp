#include <iostream>
#include<iomanip>
#include<math.h>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);

	int t,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10;

	cin>>t;
	cout<<"Lumberjacks:"<<endl;
	while (t>0)
	{

cin>>b1>>b2>>b3>>b4>>b5>>b6>>b7>>b8>>b9>>b10;

if ( (b1>b2)&&(b2>b3)&&(b3>b4)&&(b4>b5)&&(b5>b6)&&(b6>b7)&&(b7>b8)&&(b8>b9)&&(b9>b10))
	cout<<"Ordered"<<endl;

else if ( (b1<b2)&&(b2<b3)&&(b3<b4)&&(b4<b5)&&(b5<b6)&&(b6<b7)&&(b7<b8)&&(b8<b9)&&(b9<b10))
	cout<<"Ordered"<<endl;
else
	cout<<"Unordered"<<endl;

		
		t--;
	}
	return 0;
}