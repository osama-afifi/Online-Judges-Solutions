#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int m=0;
bool VIS[26][26];
bool MAP[26][26];
int movex[]={0,0,1,-1,1,1,-1,-1};
int movey[]={1,-1,0,0,-1,1,1,-1};
int count;
bool inRange(int x , int y)
{
	if(x>=0 && y>=0 && x<m && y<m)return true;
	return false;
}

void solve(int x , int y)
{

	for(int i=0; i<8 ; i++)
	{
		if(inRange(x+movex[i],y+movey[i]) && !VIS[x+movex[i]][y+movey[i]] && MAP[x+movex[i]][y+movey[i]])
		{
			count++;
			VIS[x+movex[i]][y+movey[i]]=true;
			solve(x+movex[i],y+movey[i]);

		}
	}
}

int main()
{
	freopen("input.in","r",stdin);
	int t,x;
	cin>>t;
	cin.ignore(2);
	while(t>0)
	{

		memset(VIS,false,sizeof(VIS));
		int c=0;
		string text;
		int max=0;
		bool br = false;
		while(getline(cin,text))
		{  

			if(text=="")
			break;
			
			m=text.length();

			for(int i=0;i<m;i++)
				MAP[c][i]=text[i]-'0';
			c++;
		}
		
		for(int i=0;i<m;i++)
			for(int j=0;j<m;j++)
			{

				if(!VIS[i][j] && MAP[i][j])
				{
					count=1;
					VIS[i][j]=true;
					solve(i,j);
					if(count>max)
						max=count;
				}
			}
			cout<<max<<endl;
			
			t--;
			if(t)cout<<endl;
	}

	return 0;
}