# include <iostream>
# include <string>

using namespace std;

int main()
{

	freopen("input.in","r",stdin);



	string text1;
	string text2;
	int t;
	cin>>t;
	cin.get();
	while(t>0)
	{


	
		getline(cin, text1);
		getline(cin, text2);

		if (text1==text2)
		{cout<<"Yes"<<endl;
		t--;
		continue;
		}

		if (text1.length()!=text2.length())
		{cout<<"No"<<endl;
		t--;
		continue;
		}

		int i;

		for(i=0; i<text1.length();i++)
		{

			if((text1[i]=='a' || text1[i]=='e' || text1[i]=='o' || text1[i]=='i' || text1[i]=='u' ) && (text2[i]=='a' || text2[i]=='e' || text2[i]=='o' || text2[i]=='i' || text2[i]=='u' ))
				continue;

			else if(text1[i]!=text2[i])
				break;
		}

		if(i==text1.length())
			cout<<"Yes"<<endl;

		else if(i!=text1.length())
			cout<<"No"<<endl;


		t--;
	}
	return 0;
}