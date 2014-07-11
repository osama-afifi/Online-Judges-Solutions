#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);
	int kase=1;
	int t;
	cin>>t;
	int first=1;
	while (t>0)
	{
		string text;		
		string answer;
		string withoutspaces_text;
		string withoutspaces_ans;
		if(first==1)
			cin.get();

		first=0;

		getline(cin,text);

		getline(cin,answer);

		int space=0;

		withoutspaces_text=text;


		for(int i=0;i<withoutspaces_text.length();i++)
		{
			if(withoutspaces_text[i]==' ')
			{withoutspaces_text.erase (i,1);
			i--;}
		}

		withoutspaces_ans=answer;

		for(int i=0;i<withoutspaces_ans.length();i++)
		{
			if(withoutspaces_ans[i]==' ')
			{withoutspaces_ans.erase (i,1);
			i--;}

		}




		if(text==answer)
			cout<<"Case "<<kase++<<": Yes"<<endl;

		else if(withoutspaces_text==withoutspaces_ans)
			cout<<"Case "<<kase++<<": Output Format Error"<<endl;

		else
			cout<<"Case "<<kase++<<": Wrong Answer"<<endl;



		t--;
	}
	return 0;
}
