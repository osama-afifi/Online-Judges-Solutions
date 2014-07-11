# include <iostream>
# include <string>

using namespace std;

int main()
{
	freopen("input.in", "r", stdin);

	string text;
	string palin;

	int group;
	int j;
	int i;
	int word;

	int first=0;

	while(cin>>group && group!=0 )
	{
		
		if ( group==0)break;

		cin>>text;

word=text.length()/group;
palin.clear();


		if(group==1)
		{
			for(int q=1  ; q<=text.length() ; q++ )
			{
				palin.append( 1 , text[text.length()-q]);

			}

			cout<<palin<<endl;
			continue;
		}

		


		for(i=0;i<group;i++)
		{

			palin.clear();

			for(j=0  ; j<word ; j++ )
			{
				palin.append( 1 , text[(i*word)+word-j-1]);

			}



			cout<<palin;


		}
		i++;
		cout<<endl;

		first=1;



	}


	return 0;
}