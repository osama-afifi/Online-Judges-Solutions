#include <iostream>
#include <iomanip>
#include <vector>
#include <map>

using namespace std;

int main ()
{
	freopen("input.in","r",stdin);
	int N,k;

	while(cin>>N>>k)
	{

		if(N==0 && k==0)break;


		vector<int> V;
		int MAP[26]={0};
		bool CHECK[25]={false};


		int i=1,j=1;
		int rem=0;

		while(true)
		{
			if(V.size()==N)break;
			if(MAP[i]==40)	
			{		
				if(i>=N)
					i=0;
				i++;
				continue;
			}

			if(rem==0)
				MAP[i]+=j;
			else
			{
				MAP[i]+=rem;
				rem=0;
			}

			if(MAP[i]>40)
			{
				rem=MAP[i]-40;
				MAP[i]=40;
			}

			if(MAP[i]==40)			
				V.push_back(i);

			if(i>=N)
				i=0;
			if(j==k)
				j=0;

			i++;
			if(rem==0)	
				j++;
		}

		for(int i=0;i<V.size();i++)
		{
			cout<<setw(3)<<V[i];
		}
		cout<<endl;
	}

	return 0;
}