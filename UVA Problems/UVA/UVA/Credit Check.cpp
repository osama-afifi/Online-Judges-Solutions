# include <iostream>
# include <string>
# include <cstring>
#include <vector>
#include <algorithm>

using namespace std;



int main ()

{
	freopen ("input.in","r",stdin);

	string text;
	int t ;
	cin>>t;
	cin.get();
	while(t>0)
	{		

		getline (cin,text);	

		for(int q=0;q<text.length();q++)
		{
			if (text[q]==' ')
			{
				text.erase(q,1);
				q--;
			}
		}


		int sum1=0;

		for(int i=text.length()-2;i>=0;i-=2)
		{

			int dig=((text[i])-'0')*2;

			if(dig>9)
			{
				if (dig%9!=0)
					dig=dig%9;
				else
					dig=9;
			}
			sum1=sum1+dig;


		}

		int sum2=0;

		for(int i=text.length()-1;i>=0;i-=2)
		{

			int dig=((text[i])-'0');

			sum2=sum2+dig;


		}


		int sum=sum1+sum2;

		if (sum%10==0)
			cout<<"Valid"<<endl;
		else
			cout<<"Invalid"<<endl;

		t--;}

	return 0;
}

