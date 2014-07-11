# include <iostream>
# include <math.h>
# include <iomanip>
# include <string>
# include <map>
# include <set>
# include <vector>
# include <algorithm>


using namespace std;

struct NO
{
	long long num;
	int type;
	long long  mod;

	bool operator <(const NO &a)const
	{

		if(mod!=a.mod)
			return mod<a.mod;
		if(type!=a.type)
			return type>a.type;
		if(a.type==1 &&type==1)
		return num>a.num;

		else
			return num<a.num;
	};

};

int main()
{
	freopen("input.in","r",stdin);


	long long N;
	long long M;

	while(cin>>N>>M)
	{

		cout<<N<<" "<<M<<endl;
		if(M==0 && N==0)break;

		vector<NO> vec;
		long long no;
		for(int i=0;i<N;i++)
		{
			cin>>no;

			NO temp;
			temp.num=no;
			temp.type=abs(no%2);
			temp.mod=no%M;

			vec.push_back(temp);

		}
		sort(vec.begin(),vec.end());

		vector<NO> ::iterator it;


		for(it=vec.begin();it!=vec.end();it++)
		{
			cout<<(*it).num<<endl;
		}

	}
	return 0;
}