# include <iostream>
# include <string>
# include <cstring>
# include <sstream>
# include <map>
# include <set>
# include <vector>

using namespace std;

int main ()
{
	freopen("input.in","r",stdin);

	string text;

	//1 represents B, F, P, or V
	//2 represents C, G, J, K, Q, S, X,  or Z
	//3 represents D or T
	//4 represents L
	//5 represents M or N
	//6 represents R
	//VBDSUEQPQOPQWEXXCZ

	while(getline(cin,text))
	{
		string output;

		for(int i=1;i<text.length();i++)
		{
			if(text[i-1]==text[i])
			{
				text.erase(i,1);
				i--;
			}

		}


		bool b1=false;
		bool b2=false;
		bool b3=false;
		bool b4=false;
		bool b5=false;
		bool b6=false;

		for(int i=0;i<text.length();i++)
		{

			if((text[i]=='B' || text[i]=='F' || text[i]=='P' || text[i]=='V') && (b1==false))
			{
				output.append(1,'1');
				b1=true;
				b2=false;
				b3=false;
				b4=false;
				b5=false;
				b6=false;
			}
			else if((text[i]=='C' || text[i]=='G' || text[i]=='J' || text[i]=='K' || text[i]=='Q' || text[i]=='S' || text[i]=='X' || text[i]=='Z') && (b2==false))
			{
				output.append(1,'2');
				b1=false;
				b2=true;
				b3=false;
				b4=false;
				b5=false;
				b6=false;
			}
			else if((text[i]=='D' || text[i]=='T') && (b3==false))
			{
				b1=false;
				b2=false;
				b3=true;
				b4=false;
				b5=false;
				b6=false;
				output.append(1,'3');
			}
			else if((text[i]=='L') && (b4==false))
			{
				b1=false;
				b2=false;
				b3=false;
				b4=true;
				b5=false;
				b6=false;
				output.append(1,'4');
			}
			else if((text[i]=='M' || text[i]=='N') && (b5==false))
			{
				b1=false;
				b2=false;
				b3=false;
				b4=false;
				b5=true;
				b6=false;
				output.append(1,'5');
			}
			else if((text[i]=='R') && (b6==false))
			{
				b1=false;
				b2=false;
				b3=false;
				b4=false;
				b5=false;
				b6=true;
				output.append(1,'6');
			}
			else if((text[i]=='A') ||(text[i]=='E') ||(text[i]=='I') ||(text[i]=='O') ||(text[i]=='U') ||(text[i]=='H') ||(text[i]=='W') || (text[i]=='Y'))
			{
				b1=false;
				b2=false;
				b3=false;
				b4=false;
				b5=false;
				b6=false;
			}

		}

		cout<<output<<endl;

	}

	return 0;
}
