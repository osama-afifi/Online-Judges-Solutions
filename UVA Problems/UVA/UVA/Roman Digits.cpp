#include <iostream>
#include <string>
#include <cstring>
#include <math.h>
#include <algorithm>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);

	//Letter	I	V	X	L	C	D	M
	//Value  	1	5	10	50	100	500	1000


	int I=1,V=5,X=10,L=50,C=100,D=500,M=1000;

	string text;
	string output[5];

	while(getline(cin,text))
	{

		if(text[0]>='0' &&text[0]<='9')
		{

			int num[5];

			output[0].clear();
			output[1].clear();
			output[2].clear();
			output[3].clear();

			for(int i=text.length()-1,q=1 ,z=0; i>=0 ; i--,q=q*10,z++)
			{
				num[z]=(text[i]-'0')*q;
			}

			int done=0;

			//////////////////////////////////////////////

			for(int f=0;f<=1;f++) //X
			{
				for(int d=0;d<=1;d++) //V/////////
				{
					for(int s=-3;s<=3;s++) //I
					{
						if( (f*X)+(d*V)+(s*I) == num[0] )
						{
							if(s<0)
								output[0].append(abs(s),'I');

							output[0].append(d,'V');	
							output[0].append(f,'X');

							if(s>=0)
								output[0].append(abs(s),'I');

							done=1;
							break;
						}

					}
					if(done==1)break;
				}
				if(done==1)break;
			}

			///////////

			if(text.length()<=1)
			{
				cout<<output[0]<<endl;
				continue;
			}

			done=0;

			for(int f=0;f<=1;f++) //C
			{
				for(int d=0;d<=1;d++) //L/////////
				{
					for(int s=-3;s<=3;s++) //X
					{
						if( (f*C)+(d*L)+(s*X) == num[1] )
						{
							if(s<0)
								output[1].append(abs(s),'X');

							output[1].append(d,'L');	
							output[1].append(f,'C');

							if(s>=0)
								output[1].append(abs(s),'X');

							done=1;
							break;
						}

					}
					if(done==1)break;
				}
				if(done==1)break;
			}




			if(text.length()<=2)
			{
				cout<<output[1]<<output[0]<<endl;
				continue;
			}

			/////////////

			done=0;

			for(int f=0;f<=1;f++) //M
			{
				for(int d=0;d<=1;d++) //D/////////
				{
					for(int s=-3;s<=3;s++) //C
					{
						if( (f*M)+(d*D)+(s*C) == num[2] )
						{
							if(s<0)
								output[2].append(abs(s),'C');

							output[2].append(d,'D');	
							output[2].append(f,'M');

							if(s>=0)
								output[2].append(abs(s),'C');

							done=1;
							break;
						}

					}
					if(done==1)break;
				}
				if(done==1)break;
			}



			if(text.length()<=3)
			{
				cout<<output[2]<<output[1]<<output[0]<<endl;
				continue;
			}


			/////////////

			output[3].append((num[3]/1000),'M');




			cout<<output[3]<<output[2]<<output[1]<<output[0]<<endl;
		}



		//////////////////////////////////////////////////////////////


		else
		{
			int Value[20];

			string Numerals[20];


			Value[0] = 1000, Numerals[0] = "M";
			Value[1] = 900, Numerals[1] = "CM";
			Value[2] = 500, Numerals[2] = "D" ;
			Value[3] = 400, Numerals[3] = "CD";
			Value[4] = 100, Numerals[4] = "C";
			Value[5] = 90, Numerals[5] = "XC";
			Value[6] = 50, Numerals[6] = "L";
			Value[7] = 40, Numerals[7] = "XL";
			Value[8] = 10, Numerals[8] = "X";
			Value[9] = 9, Numerals[9] = "IX";
			Value[10] = 5, Numerals[10] = "V";
			Value[11] = 4, Numerals[11] = "IV";
			Value[12] = 1, Numerals[12] = "I";

			size_t pos=1;


			int sum=0;
			int X=0;
			string temp;


			sum=0;
			int i;
			for(i=0;i<=12;i++)
			{
				temp=text.substr(0,1);
				pos=temp.find(Numerals[i]);

				if(string::npos!=pos)
				{
					X=pos;
					text.erase(0,Numerals[i].length());
					sum=sum+Value[i];
					i=-1;
					continue;

				}

				if(Numerals[i].length()>=2)
				{
					temp=text.substr(0,2);
					pos=temp.find(Numerals[i]);

					if(string::npos!=pos)
					{
						X=pos;
						text.erase(0,Numerals[i].length());
						sum=sum+Value[i];

						i=-1;
						continue;

					}
				}
			}



			cout<<sum<<endl;
		}



	}



	return 0;
}
