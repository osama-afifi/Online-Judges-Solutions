# include <iostream>
# include <algorithm>
# include <set>

using namespace std;

int main()
{
	freopen("input.in","r",stdin);

	int N;
	while(cin>>N)
	{
		set<long long>S;
		int n;
		for(int i=0;i<N;i++)
		{
			cin>>n;
			S.insert(n);
		}
		int Q;
		cin>>Q;

		set<long long> ::iterator it;
		for(int i=0;i<Q;i++)
		{
			cin>>n;
			it=find(S.begin(),S.end(),n);

			if(it--!=S.begin())
				cout<<(*it);
			else
				cout<<"X";

		
			++it;

			cout<<" ";         

			if(it++!=S.end())
				cout<<(*it);
			else
				cout<<"X";
			cout<<endl;
		}

	}
	return 0;
}