# include <iostream>
# include <stdio.h>
# include <string>

using namespace std;

int main()
{
	freopen("input.in","r",stdin);
	int t;
	string text;
	cin>>t;
	cin.ignore();
	while(t>0)
	{
		cin>>text;

		if(text=="1" || text=="4" || text =="78")
			printf("+\n");

		else if(text.length()>=2 && text[text.length()-2]=='3' &&  text[text.length()-1]=='5')
			printf("-\n");

		else if(text.length()>=2 && text[0]=='9' &&  text[text.length()-1]=='4')
			printf("*\n");
		else if(text.length()>=3 && text[0]=='1'  && text[1]=='9'  && text[2]=='0' )
			printf("?\n");
		else
			printf("\n");

		t--;
	}

	return 0;
}