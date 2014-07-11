#include <iostream>

////////////The correct answer
using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);

	long int x,h=1,l=1,w=1,t,TSA=0;
	cin>>t;
	while (t>0)
	{
		cin>>x;

		if(x==1)
		{	cout<<"6"<<endl;
		t--;
		continue;
		}
		long min=1000000 ;
		for(l=1;l<=x;l++)
		{for(w=1;w<=x/l;w++)
		{for(h=1;h<=w;h++)
		{
     if(x==l*w*h)
	 {
		TSA=(l*w+w*h+l*h)*2;

		if (TSA<min)
		min=TSA;
	 }
		}		
		}
		}


		cout<<min<<endl;
	

	t--;
}
return 0;
}