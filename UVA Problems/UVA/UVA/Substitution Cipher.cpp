#include <iostream>
#include <string>

using namespace std;


int main()
{

	freopen("input.in", "r", stdin);
	int t;
	cin>>t;
	while(t>0)
	{

		string text,dic[100];
		char cyp[100];

		int A,K;

		cin>>A>>K;

		char alphabet='a';

		for(int i=0; i<K;i++,alphabet++)
			cyp[i]=alphabet;

		for(int i=0 ; i<K;i++)
			cin>>dic[i];

		cin>>text;

		int c=0;

		for(int i=0 ; i<dic[i].length(); i++)
		{
			for(int j=1 ; j<K ; j++)
			{

				if(dic[j][i]!=dic[j-1][i])
				{
					dic[j-1][i]=cyp[j];

					c++;
				}

				else if(dic[j][i]==dic[j-1][i])
				{
					i++;
					continue;
				}
			}
		}


		for(int i=0 ; i<A; i++)
			cout<<cyp[i];

		t--;}
	return 0;
}

