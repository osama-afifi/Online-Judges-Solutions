#include <iostream>
#include <string>
#include <cstring>
#include <math.h>
#include <iomanip>
#include <map>
#include <set>
#include <vector>

using namespace std;

int LEAP (long n)
{
	int l=0;
	if(n%4==0 &&n%100!=0)
		return l=1;
	else if(n%400==0)
		return l=1;
	else
		return l=0;

}

int main()
{	freopen("input.in","r",stdin);
map<string,int> M;
M["January"]=0;
M["February"]=31;
M["March"]=59;
M["April"]=90;
M["May"]=120;
M["June"]=151;
M["July"]=181;
M["August"]=212;
M["September"]=243;
M["October"]=273;
M["November"]=304;
M["December"]=334;

// 31 59 90 120 151 181 212 243 273 304 334
int t;
cin>>t;
cin.ignore();
string m1,m2;
int d1,d2;
int l1,l2;
long y1,y2;
char dummy;
while(t>0)
{
	cin>>m1>>d1>>dummy>>y1;
	cin>>m2>>d2>>dummy>>y2;
	l1=LEAP(y1);
	l2=LEAP(y2);

	if(m1=="January" || m1=="February")
		d1+=M[m1];
	else
		d1+=M[m1]+l1;
	if(m2=="January" || m2=="February")
		d2+=M[m2];
	else
		d2+=M[m2]+l2;




	t--;
}

return 0;
}
//The names of the months are {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November" and "December"}.
//And the numbers of days for the months are {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 and 31}
//respectively in a non-leap year. In a leap year, number of days for February is 29 days; others are same as shown in previous line.