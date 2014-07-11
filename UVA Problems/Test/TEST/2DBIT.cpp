//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <string>
//#include <cmath>
//using namespace std;
//
//struct BIT
//{
//	int X,Y;
//	vector< vector<int> >tree;
//
//	BIT(int x , int y)
//	{
//		tree.resize(x);
//		for(int i = 0 ; i<x ; i++)
//			tree[i].resize(y);
//	}
//
//
//	void update(int x , int y , int val){
//		while (x < X){
//			updateY(x , y , val); 
//			// this function should update array tree[x] 
//			x += (x & -x); 
//		}
//	}
//
//	void updateY(int x , int y , int val){
//		while (y < Y){
//			tree[x][y] += val;
//			y += (y & -y); 
//		}
//	}
//	int cum(int x , int y)
//	{
//		int sum = 0;
//		while(x>=0)
//		{
//			while(y>=0)
//			{
//				sum+=tree[x][y];
//				y -= (y & -y);
//			}
//			x -= (x & -x);
//		}
//		return sum;
//	}
//
//};