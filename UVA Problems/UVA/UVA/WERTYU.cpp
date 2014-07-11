#include <iostream>
#include <string>

using namespace std;

int main ()
{
	freopen("input.in", "r" , stdin);

	string text;

	while(getline(cin,text))
	{
	string samp = " 1234567890-=WERTYUIOP[]\\SDFGHJKL;'XCVBNM,./ ";
  string wertyu = " `1234567890-QWERTYUIOP[]ASDFGHJKL;ZXCVBNM,. ";


	for(int i=0 ; i<text.length() ; i++)
	{
		for(int j=0 ; j<samp.length() ; j++)
		{
			if(text[i]==samp[j])
			{	text[i]=wertyu[j];
				break;
			}
		}


	}

	cout<<text<<endl;

	}
	return 0;
}