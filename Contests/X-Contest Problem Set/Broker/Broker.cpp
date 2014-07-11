#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int main(){

	int k;
	cin>>k;

	for(int Case=1;Case<=k;Case++){
		int n,m;
		int x;

		cin>>n>>m;

		vector<vector<int> > c_pref(n, vector<int>(m));
		vector<vector<int> > f_pref(m, vector<int>(n));
		priority_queue<pair<int,int> > clients;
		vector<int> rep(n);

		for(int i=0;i<n;i++){
			cin>>x;
			rep[i]=x;
			clients.push(pair<int,int>(x,i));
		}

		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>c_pref[i][j];
				c_pref[i][j]--; //make it 0-based
			}
		}

		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>f_pref[i][j];
				f_pref[i][j]--; //make it 0-based
			}
		}

		vector<int> c_assign(n,-1);
		vector<int> f_assign(m,-1);
		vector<int> last_chk(n,-1);
		while(!clients.empty()){
			int cur_client = clients.top().second;
			clients.pop();
			while(++last_chk[cur_client] < m)
			{
				int cur_freelancer = c_pref[cur_client][last_chk[cur_client]];
				if(f_assign[cur_freelancer]==-1)
				{
					c_assign[cur_client] = cur_freelancer;
					f_assign[cur_freelancer] = cur_client;
					break;
				}
				else
				{
					bool break_again=false;
					for(int i=0;i<n;i++){
						if(f_pref[cur_freelancer][i]==cur_client){
							clients.push(pair<int,int>(rep[f_assign[cur_freelancer]],f_assign[cur_freelancer]));
							c_assign[f_assign[cur_freelancer]]=-1;

							c_assign[cur_client] = cur_freelancer;
							f_assign[cur_freelancer] = cur_client;

							break_again=true;
							break;
						}
						else if(f_pref[cur_freelancer][i]==f_assign[cur_freelancer]){
							break;
						}
					}
					if(break_again)break;
				}
			}
		}

		cout<<Case<<"-";
		for(int i=0;i<n-1;i++)cout<<c_assign[i]+1<<" ";
		cout<<c_assign[n-1]+1<<endl;
	}

	return 0;
}
