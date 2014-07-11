#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main()
{
	freopen("input.in","r",stdin);
	int N;

	while(cin>>N && N!=0)
	{

		queue <int> S;
		for(int i=1;i<=N;i++)
			S.push(i);
		cout<<"Discarded cards:";
		bool first=true;
		while(S.size()>1)
		{
			if(first==false)
				cout<<", ";
			else
				cout<<" ";
			cout<<S.front();
			S.pop();
			S.push(S.front());
			S.pop();
			first=false;
		}
		cout<<endl<<"Remaining card: "<<S.front()<<endl;
	}
	return 0;
}