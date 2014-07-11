#include <iostream>
#include <cstring>
#include <string>
#include <string.h>
#include <map>
#include <stdio.h>
#include <algorithm>


using namespace std;



char MAP[21][21];
bool VIS[31][81];
int movex[]={-1,0,1,0};
int movey[]={0,1,0,-1};
int h;
int dx,dy;
char ch;
int r,c,m,n;


int main()
{
	freopen("input.in","r",stdin);
	//	freopen("output.out","w",stdout);
	int t,kase=0;
	cin>>t;
	cin.ignore();

	while(t--)
	{
		cin>>r>>c>>m>>n;


		for(int i = 0 ; i <r ; i++)
			for(int j = 0 ; j <c ; j++)
				cin>>MAP[i][j];


		map <char,int> M;
		map <char,int> ::iterator it;

		for(int i = 0 ; i <r ; i++)
			for(int j = 0 ; j <c ; j++)
				M[MAP[i][j]]++;
		int maxi=0;

		for(it=M.begin() ; it!=M.end() ; it++)
			maxi = (maxi < it->second) ? it->second : maxi;
		
		int sum=0;

		for(it=M.begin() ; it!=M.end() ; it++)
			if(it->second==maxi)
				sum+= (it->second*m);
			else
				sum+= (it->second*n);

		cout<<"Case "<<++kase<<": "<<sum<<endl;

	}


	return 0;
}