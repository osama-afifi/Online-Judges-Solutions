# include <iostream>
# include <sstream>
# include <string>
# include <cstring>
# include <algorithm>
using namespace std;

string REVERSE(int num)
{
	string text;
	stringstream ss;
	ss<<num;
	ss>>text;
	reverse(text.begin(),text.end());
	return text;
}
int TO_NUM(string text)
{
	int num;
	stringstream ss;
	reverse(text.begin(),text.end());
	ss<<text;
	ss>>num;

	return num;
}

int main()
{

	//"A"  65   "a"  97   " "  32
	//"B"  66   "b"  98   "!"  33
	// .         .        ","  44
	// .         .        "."  46
	// .         .        ":"  58
	//"Y"  89   "y"  121  ";"  59
	//"Z"  90   "z"  122  "?"  63




	freopen("input.in","r",stdin);

	string text;
	while(getline(cin,text))
	{
		string output;

		if(text[0]>='0' &&text[0]<='9')
		{
			while(text.length()!=0)
			{
				int temp;
				for(int j=1;j<=text.length();j++)
				{
					string sub=text.substr(0,j);
					temp=TO_NUM(sub);	

					if( (temp>='A' && temp<='Z') || (temp>='a' && temp<='z') || temp==' ' || temp=='!' || temp==',' || temp=='.' || temp==':' || temp==';' || temp=='?' )
					{
						output.insert(0,1,(char)temp);
						text.erase(0,j);
						break;
					}

				}
			}

			cout<<output<<endl;
		}

		else
		{
			for(int i=0;i<text.length();i++)
			{
				output.insert(0,REVERSE(text[i]));
			}

			cout<<output<<endl;
		}

	}

	return 0;
}