#include <iostream>
#include <string>
using namespace std;

int main ()
{
	freopen ("input.in","r",stdin);


	string text1;
	string text2;

	while(getline(cin,text1),getline(cin,text2))
	{
		int alpha1[30];
		int alpha2[30];

		if(text1=="" || text2=="")
		{
			cout<<endl;
			continue;
		}
		for(int i=1 ;i<=26;i++)
		{alpha1[i]=0;
		alpha2[i]=0;}

		int max1=0;
		int max2=0;

		for(int i=0 ;i<text1.length();i++)
		{
			alpha1[text1[i]-96]++;
		}


		for(int i=0 ;i<text2.length();i++)
		{
			alpha2[text2[i]-96]++;
		}



		for(int q=1 ;q<=26;q++)
		{
			int min;
			if(alpha1[q]>=alpha2[q] )
				min=alpha2[q];
			else
				min=alpha1[q];

			if(alpha1[q]>=min && alpha2[q]>=min)
			{
				char ch=q+96;
				for(int c=0;c<min;c++)
				cout<<ch;
			}
		}

		cout<<endl;
	}

	return 0;
}
