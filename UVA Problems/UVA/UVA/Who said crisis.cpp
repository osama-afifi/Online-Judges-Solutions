# include <iostream>
# include <string>
# include <cstring>
# include <iomanip>
# include <cstdlib>
# include <algorithm>

using namespace std;

int main ()
{ 
	freopen("input.in","r",stdin);

	int t;
	cin>>t;
	cin.ignore();
	while(t>0)
	{
		string text1;
		string text2;
		string output;
		int X=0;
		int max=0;
		bool SWAP=false;
		cin>>text1>>text2;


		for(int i=0;i<text1.length();i++)
		{
			if(text1[i]=='0')
			{
				text1.erase(i,1);
				i--;
			}
			else 
				break;
		}


		for(int i=0;i<text2.length();i++)
		{
			if(text2[i]=='0')
			{
				text2.erase(i,1);
				i--;
			}
			else 
				break;
		}




		if( ( text1.length()>text2.length() ) || ( text1.length()==text2.length() && text1>text2 ) )
		{
			max=text1.length();
		}
		else if(text1==text2)
		{
			cout<<0<<endl;
			t--;
			continue;
		}
		else
		{
			max=text2.length();
			swap(text1,text2);
			SWAP=true;
		}



		while(true)
		{
			if(text1.length()==max)break;
			text1.insert(0," ");

		}

		while(true)
		{
			if(text2.length()==max)break;
			text2.insert(0," ");

		}


		///////////

		int rem=0;
		int no;

		for(int i=max-1 ; i>=0; i--)
		{

			if(text2[i]!=' ')
			{
				no=text1[i]-text2[i]-rem;
				rem=0;
			}

			else
			{
				no=text1[i]-'0'-rem;
				rem=0;
			}
			if(no<0)
			{
				no+=10;
				rem=1;
			}

			char ch=no+'0';
			output.insert(0,1,ch);

		}

		for(int i=0;i<output.length();i++)
		{
			if(output[i]=='0')
			{
				output.erase(i,1);
				i--;
			}
			else 
				break;
		}


		if(SWAP==true)
			output.insert(0,1,'-');

		cout<<output<<endl;

		t--;	
	}
	return 0;
}
