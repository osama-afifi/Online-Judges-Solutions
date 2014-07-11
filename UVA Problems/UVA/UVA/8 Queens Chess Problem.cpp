//#include <iostream>
//#include <math.h>
//#include <cstdlib>
//#include <iomanip>
//#include <cmath>
//#include <stdio.h>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//
//int board[9];
//int r,c,solution;
//
//bool check(int k)
//{
//	for(int i=1;i<k;i++)
//		if(board[i]==board[k] || abs(board[i]-board[k])==abs(i-k) )
//			return false;
//	return true;
//}
//
//void output()
//{
//	bool first=true;
//	if(board[r]!=c)return;
//	cout<<setw(2)<<++solution<<"      ";
//	for(int i=1;i<=8;i++)
//	{
//		if(!first)
//			cout<<" ";
//		first=false;
//		cout<<board[i];
//	}
//	cout<<endl;
//}
//
//void back(int row)
//{
//	if(row < 9)
//	{
//		 for (board[row]=1; board[row]<=8; board[row]++)
//		{
//			if(check(row))
//				back(row+1);			
//		}
//	}
//	else
//		output();
//}
//
//int main ()
//{
//	freopen("input.in","r",stdin);
//	int t;
//	cin>>t;
//	cin.ignore();
//	while(t>0)
//	{
//		memset(board, 0, sizeof(board));
//		solution=0;
//		cin>>c;
//		cin>>r;
//
//		cout<<"SOLN       COLUMN"<<endl;
//		cout<<" #      1 2 3 4 5 6 7 8"<<endl<<endl;
//		back(1);
//
//		if(t!=1)cout<<endl;
//
//		t--;
//	}
//	return 0;
//}
