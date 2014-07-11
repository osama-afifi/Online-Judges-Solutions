# include <iostream>
# include <string>
# include <cstring>
#include <vector>
#include <algorithm>

using namespace std;



int main ()

{
	freopen ("input.in","r",stdin);
	int anana[5000];
	string text[5000];
	string copy[5000];




	int X;
	for(X=0; ; X++)
	{
		cin>>text[X];
		if(text[X]=="#")break;
	}

	for(int i=0; i<X ; i++)
		anana[i]=0;       

	for(int i=0; i<X ; i++)
	{
		copy[i] =text[i];
		for(int j=0; j<copy[i].length() ; j++)
		{
			if(copy[i][j]>'Z')
				copy[i][j]=copy[i][j]-32;

		}
	}




	for(int i=0; i<X ; i++)
	{
		for(int j=0; j<copy[i].length() ; j++)
		{
			for(int q=1; q<copy[i].length()-j ; q++)
			{
				if(copy[i][j]>copy[i][j+q])
					swap(copy[i][j],copy[i][j+q]);
			}
		}
	}


	for(int i=0; i<X ; i++)
		for(int j=i+1; j<X ; j++)
		{
			if(copy[i]==copy[j])
			{
				anana[i]=1;
				anana[j]=1;
			}


		}


		string OUT[5000];

///////////////////////////// Sort the list.

		for(int i=0; i<X ; i++)
		{
			for(int j=i+1; j<X ; j++)
			{

				int Length;
				if(text[i].length()>=text[j].length())
					Length=text[j].length();

				else
					Length=text[i].length();


				for(int q=0; q<Length ; q++)
				{

					
					if(text[i][q]> text[j][q])
					{

						swap(text[i],text[j]);
						swap(anana[i],anana[j]);
					break;
					}

					else if(text[i][q]==text[j][q])
					{
						swap(text[i],text[j]);
						swap(anana[i],anana[j]);
					continue;
					}


					else 
						break;
				}

			}
		}

/////////////////////////////////////////////////////////////

		for(int i=0; i<X ; i++)
		{
			if (anana[i]==0)
				cout<<text[i]<<endl;
		}


		return 0;
}

