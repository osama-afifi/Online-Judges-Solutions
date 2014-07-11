#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);

	int t;
	cin>>t;

	cin.get();
	while(t>0)
	{
		string text[5];

		for(int i=0;i<3;i++)
		{
			getline(cin,text[i]);

			if(text[i]=="")
			{
				i=-1;
				continue;
			}

		}

		int cX=0;
		int cO=0;


		for(int i=0;i<3;i++)
			for(int j=0;j<3;j++)
			{
				if(text[i][j]=='O')cO++;
				if(text[i][j]=='X')cX++;
			}

			bool bX=false;
			bool bO=false;

			for(int i=0;i<3;i++)
			{
				if(text[i][0]=='O' && text[i][1]=='O' && text[i][2]=='O')bO=true;
				if(text[0][i]=='O' && text[1][i]=='O' && text[2][i]=='O')bO=true;
				if((text[0][0]=='O' && text[1][1]=='O' && text[2][2]=='O')||(text[2][0]=='O' && text[1][1]=='O' && text[0][2]=='O'))bO=true;


				if(text[i][0]=='X' && text[i][1]=='X' && text[i][2]=='X')bX=true;
				if(text[0][i]=='X' && text[1][i]=='X' && text[2][i]=='X')bX=true;
				if((text[0][0]=='X' && text[1][1]=='X' && text[2][2]=='X')||(text[2][0]=='X' && text[1][1]=='X' && text[0][2]=='X'))bX=true;	

			}






			if( ( (cX==5) && (cO==4) && bO==false && bX==false) || ( (cX==3) && (cO==2) && bX==true ) || ( (cX==3) && (cO==3) && bO==true && bX==false  ) 
				|| ( (cX==4) && (cO==3) && bX==true && bO==false) || ( (cX==4) && (cO==4) && bO==true && bX==false) || ( (cX==0) && (cO==0) ) 
				|| ( (cX==1) && (cO==0) ) || ( (cX==1) && (cO==1) ) || ( (cX==2) && (cO==1) ) || ( (cX==2) && (cO==2) )
				|| ( (cX==3) && (cO==2)  )|| ( (cX==3) && (cO==3) && bO==false && bX==false) || ( (cX==4) && (cO==3) && bX==false && bO==false) 
				|| ( (cX==4) && (cO==4) && bO==false && bX==false) || ( (cX==5) && (cO==4) && bO==false && bX==true) ) 

			{
				cout<<"yes"<<endl;
			}

			else
				cout<<"no"<<endl;




			t--;}
	return 0;
}
