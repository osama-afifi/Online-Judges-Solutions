//Day No.
#include <iostream>
using namespace std;
int main ()

{

int y, m, d, l, x, z;
cout<<"Enter the Year Value:";
cin>> y;
  if (y%4!=0)
  {
	l=0;
cout<<"The Year is NOT a Leap Year!\n";
    }
else if (y%4==0 && y%100!=0)
   {
	l=1;

		cout<<"The Year is a Leap Year !\n";
   }
else if (y%400==0)
   {
	l=1;
	cout<<"The Year is a Leap Year !\n";
   }
else
   {
	l=0;
	cout<<"The Year is NOT a Leap Year!\n";
    }
cout<<"Enter the Month Value:";
cin>> m;
switch (m)
{ 
case 1:
 x=0;
break;

case 2:
 x=31;
 break;

case 3:
 x=31+28+l;
 break;

case 4:
 x=31+28+31+l;
break;

case 5:
 x=31+28+31+30+l;
 break;

case 6:
 x=31+28+31+30+31+l;
 break;

case 7:
 x=31+28+31+30+31+30+l;
break;

case 8:
 x=31+28+31+30+31+30+31+l;
 break;

case 9:
 x=31+28+31+30+31+30+31+31+l;
 break;

case 10:
 x=31+28+31+30+31+30+31+31+30+l;
 break;

case 11:
 x=31+28+31+30+31+30+31+31+30+31+l;
 break;

case 12:
 x=31+28+31+30+31+30+31+31+30+31+30+l;
 break;

}

cout<<"Enter the Day Value:";
cin>> d;
cout<<"The Day is number is "<< d+x;
cout<<" \n";
cout<<"Programmed by Osama Magdy";
cin >>z;
  cin.get();
}
