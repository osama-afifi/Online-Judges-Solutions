# include <iostream>
# include <string>
# include <iomanip>


using namespace std;
int main()
{
	freopen("input.in", "r", stdin);

	int n;

	string name[1000];
	string temp;
	string greed[1000];

	int spend[1000];
	int gained[1000];
	int remainder[1000];
	int money[1000];
	int takers;
	int share;
	int j;
	int k;
	int first=1;

	while(cin>>n)
	{

		if (first==0)
			cout<<"\n";

		first=0;
		for(int i=0 ; i<n ;i++)
		{
			cin>>name[i];
		}



		for(int b=0 ; b<n ;b++)
		{
			gained[b]=0;
		}

		
		for(int b=0 ; b<n ;b++)
		{
			spend[b]=0;
		}



		for(int i=0 ; i<n ;i++)
		{
			cin>>temp;


			for(j=0 ; j<n ;j++)
			{
				if(temp==name[j])
					break;
			}

			cin>>money[j];
			cin>>takers;

			if (takers==0)
			{remainder[j]=money[j];
			money[j]=0;
			share=0;
			}

			else if (money[j]==0)
			{
			share=0;
			money[j]=0;
			remainder[j]=0;
			}

			else
			{
			remainder[j]=money[j]%takers;
			share=money[j]/takers;
			spend[j]=spend[j]-money[j]+remainder[j];
			}


			for(int q=0 ; q<takers ;q++)
			{
				cin>>temp;
				for(k=0 ; k<n ;k++)
				{

					if(temp==name[k])
						break;
				}
				gained[k]+=share;

			}

		}

		for(int z=0;z<n;z++)
		{
			cout<<name[z]<<" "<<gained[z]+spend[z]<<"\n";
		}

	}

	return 0;
}