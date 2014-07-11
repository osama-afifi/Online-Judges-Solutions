#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <cstdlib>

//Book

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);



	int I=1,V=5,X=10,L=50,C=100,D=500,M=1000;




	int I_count[150]={};
	int V_count[150]={};
	int X_count[150]={};
	int L_count[150]={};
	int C_count[150]={};

	for(int U=0;U<=100;U++)
	{
	
	 I_count[U]=0;
	 V_count[U]=0;
	 X_count[U]=0;
	 L_count[U]=0;
	 C_count[U]=0;
	
	}
	
	for(int i=1;i<=100;i++)
	{


	string text;
	string output[5];
	string zatona;


		output[0].clear();
		output[1].clear();
		output[2].clear();
		output[3].clear();

		int num[5];
		int z=0;

		for(int j=i,q=1; j!=0 ; q=q*10)
		{
			num[z]=(j%10)*q;
			j=j/10;
			z++;
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

		if(z==1)
		{
			zatona=output[0];
			goto res;
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




		if(z==2)
		{
			zatona=output[1]+output[0];
			goto res;
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



		if(z==3)
		{
			zatona=output[2]+output[1]+output[0];
			goto res;
		}


		/////////////

		output[3].append((num[3]/1000),'M');




		zatona=output[3]+output[2]+output[1]+output[0];

res:



		for(int p=0;p<zatona.length();p++)
		{



			if(zatona[p]=='I')
				I_count[i]=I_count[i]++;

			if(zatona[p]=='V')
				V_count[i]=V_count[i]++;

			if(zatona[p]=='X')
				X_count[i]=X_count[i]++;

			if(zatona[p]=='L')
				L_count[i]=L_count[i]++;

			if(zatona[p]=='C')
				C_count[i]=C_count[i]++;



		}


		I_count[i]+=I_count[i-1];

		V_count[i]+=V_count[i-1];

		X_count[i]+=X_count[i-1];

		L_count[i]+=L_count[i-1];

		C_count[i]+=C_count[i-1];

		
		
	}


	int N;
	while(cin>>N && N!=0)
	{

		cout<<N<<": "<< I_count[N] <<" i, "<< V_count[N] <<" v, "<< X_count[N] <<" x, "<< L_count[N] <<" l, "<< C_count[N] <<" c"<<endl;


	}




	return 0;
}
