//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <string>
//#include <cmath>
//using namespace std;
//
//struct BIT
//{
//	int N;
//	vector<int>tree;
//
//	BIT(int n)
//	{
//		N=n;
//		tree.resize(N);
//	}
//
//
//	int cum(int idx)
//	{
//		int sum = 0;
//		while(idx>0)
//		{
//			sum+=tree[idx];
//			idx -= (idx & -idx);
//		}
//		return sum;
//	}
//
//	void update(int idx ,int val){
//		while (idx <= N)
//		{
//			tree[idx] += val;
//			idx += (idx & -idx);
//		}
//	}
//
//int find(int cum) {
//    int idx = 0, m = N >> 1;
//    while (m) {
//        if (tree[idx + m - 1] < cum) 
//            cum -= tree[idx + m - 1] , idx += m;
//        m >>= 1;
//    }
//    return idx;
//}
//
//	int freq(int idx)
//	{
//		// Odd will be O(1), even in c*log(idx)
//		int sum = tree[idx]; 
//		if (idx > 0){ 
//			int z = idx - (idx & -idx); 
//			idx--; 
//			while (idx != z){ 
//				sum -= tree[idx]; 
//				idx -= (idx & -idx);
//			}
//		}
//		return sum;
//	}
//
//	void scale(int c){
//		for (int i = 1 ; i <= N ; i++)
//			tree[i] = tree[i] / c;
//	}
//
//
//};
//
//int main()
//{
//	BIT x = BIT(100);
//	
//	x.update(1,3);
//	x.update(2,4);
//	x.update(3,2);
//	x.update(4,7);
//
//	cout << x.find(1) <<endl;
//	cout << x.find(3) <<endl;
//	cout << x.find(6) <<endl;
//	cout << x.find(7) <<endl;
//	cout << x.find(8) <<endl;
//	cout << x.find(16) <<endl;
//
//
//	return 0;
//}