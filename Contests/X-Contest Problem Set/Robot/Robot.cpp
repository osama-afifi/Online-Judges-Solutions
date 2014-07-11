#include<iostream>
#include<fstream>
#include<vector>
#include<limits>
#include<queue>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int m, k;
		cin>>k>>m;
		vector<vector<int> > grid(k,vector<int>(k,numeric_limits<int>::max()));
		int r,c;
		for(int i=0;i<m;i++){
			cin>>r>>c;
			grid[r][c]=-2;
		}
		grid[k-1][k-1]=0;
		queue<pair<int,int> > next;
		next.push(pair<int,int>(k-1,k-1));
		while(!next.empty()){
			r=next.front().first; 
			c=next.front().second;
			next.pop();
			if(r-1>=0 && grid[r-1][c]!=-2 && grid[r-1][c]>grid[r][c]+1){
				grid[r-1][c]=grid[r][c]+1;
				next.push(pair<int,int>(r-1,c));
			}
			if(c-1>=0 && grid[r][c-1]!=-2 && grid[r][c-1]>grid[r][c]+1){
				grid[r][c-1]=grid[r][c]+1;
				next.push(pair<int,int>(r,c-1));
			}

			if(r+1<k && grid[r+1][c]!=-2 && grid[r+1][c]>grid[r][c]+1){
				grid[r+1][c]=grid[r][c]+1;
				next.push(pair<int,int>(r+1,c));
			}
			if(c+1<k && grid[r][c+1]!=-2 && grid[r][c+1]>grid[r][c]+1){
				grid[r][c+1]=grid[r][c]+1;
				next.push(pair<int,int>(r,c+1));
			}
		}
		cout<<grid[0][0]-1<<endl;
	}

	return 0;
}