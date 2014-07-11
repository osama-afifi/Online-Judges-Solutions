#include <iostream>
#include <string>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);

	int N;

	while(cin>>N && N!=0)
	{
		int sheet=(N+3)/4;


		if(N==1)
		{
			cout<<"Printing order for 1 pages:"<<endl<<"Sheet 1, front: Blank, 1"<<endl;

			continue;
		}


		pair <int,int> SHEET[150]={};

		for(int i=1;i<=sheet*2;i++)
		{
			SHEET[i].first=i;
		}

		for(int i=sheet*2+1,j=sheet*2;i<=N;i++,j--)
		{
			SHEET[j].second=i;
		}

		for(int i=1;i<=sheet*2;i+=2)

			swap(SHEET[i].first,SHEET[i].second);



		cout<<"Printing order for "<<N<<" pages:"<<endl;
		for(int i=1;i<=sheet*2;i++)
		{

			if(SHEET[i].first==0 && SHEET[i].second==0)continue;

			cout<<"Sheet "<<(i+1)/2<<", front: ";

			if(SHEET[i].first!=0) cout<<SHEET[i].first;
			else cout<<"Blank";
			cout<<", ";

			if(SHEET[i].second!=0) cout<<SHEET[i].second;
			else cout<<"Blank";

			cout<<endl;


			i++;

			if(SHEET[i].first==0 && SHEET[i].second==0)continue;

			cout<<"Sheet "<<(i+1)/2<<", back : ";



			if(SHEET[i].first!=0) cout<<SHEET[i].first;
			else cout<<"Blank";
			cout<<", ";

			if(SHEET[i].second!=0) cout<<SHEET[i].second;
			else cout<<"Blank";

			cout<<endl;
		}

	}
	return 0;
}
