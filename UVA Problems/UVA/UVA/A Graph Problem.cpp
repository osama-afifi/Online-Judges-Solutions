# include <iostream>
# include <iomanip>
# include <cstring>
# include <string>
# include <sstream>
# include <algorithm>
# include <math.h>

using namespace std;
long long N;

bool vis[77];
int counter;
void solve(int index)
{
	


	for(int i=1;i<=index;i++)
	{
		if(/*i!=0 &&*/ !vis[i+1] && !vis[i-1])
		{
			counter++;
			vis[i+1]=true;
			vis[i-1]=true;
			solve(index+1);
			vis[i+1]=false;
			vis[i-1]=false;

		}

	}

//if(index==N)return;

}



int main()
{
	freopen("input.in","r",stdin);



	while(cin>>N)
	{
		counter=0;
		memset(vis,false,sizeof(vis));

		solve(30);

		cout<<counter<<endl;

	}

	return 0;
}