#include <iostream>
#include <string>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);

	int t;
	int kase=1;
	cin>>t;
	while(t>0)
	{

		string text[11];
		int rank[11];


		for(int i=0;i<10;i++)
		{
			cin>>text[i];
			cin>>rank[i];
		}

		int max=0;

		for(int i=0;i<10;i++)
		{
			if(rank[i]>max)
				max=rank[i];
		}

		cout<<"Case #"<<kase++<<":"<<endl;

		for(int i=0;i<10;i++)
		{
			if(rank[i]==max)
				cout<<text[i]<<endl;
		}



			t--;}
	return 0;
}
