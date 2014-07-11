////[1,2,3,4,5,6,7,8,9,10,11,12]  // initial
////[2,3,4,5,6,12,7,8,9,10,11,1]  // left-clockwise (insert last in middle and shift left) or remove last insert midlle
////[1,2,3,4,5,7,8,9,10,11,12,6]  // right-clockwise] (remove middle and put last) remove middle put it last
////[12,1,2,3,4,5,6,7,8,9,10,11]  // all-anti (shifting right)
////[2,3,4,5,6,7,8,9,10,11,12,1]  // all-clock (shifting left)
////[12,1,2,3,4,5,7,8,9,10,11,6]  // left-anti (remove last put it first,middle at last) 
////[1,2,3,4,5,12,6,7,8,9,10,11]  // right-anti (remove last put it middle)
//
//#include <iostream>
//#include <stdio.h>
//#include <algorithm>
//#include <iomanip>
//#include <vector>
//#include <cstring>
//
//using namespace std;
//
//const int target_arr[12] =
//{1,2,3,4,5,6,7,8,9,10,11,12};
//vector <int> target ;
//int const oo = 1<<25;
//
//vector <int> arr ;
//bool vis[12][12];
//short k,l;
//bool found;
//int res;
//int temp;
//bool reached ()
//{
//	for( k=0;k<12;k++)
//		if(arr[k]!=target_arr[k])
//			return false;
//	return true;
//}
//
//void left_clock()
//{
//	temp=arr[0];
//	arr.erase(arr.begin());
//	arr.push_back(temp);
//	temp=arr[10];
//	arr.erase(arr.begin()+10);
//	arr.insert(arr.begin()+5,temp);
//}
//void left_anti()
//{
//	temp=arr[11];
//	arr.pop_back();
//	arr.insert(arr.begin(),temp);
//	temp=arr[6];
//	arr.erase(arr.begin()+6);
//	arr.push_back(temp);
//}
//
//void right_clock()
//{
//	temp=arr[5];
//	arr.erase(arr.begin()+5);
//	arr.push_back(temp);
//}
//void right_anti()
//{
//	temp=arr[11];
//	arr.pop_back();
//	arr.insert(arr.begin()+5,temp);
//}
//
//void all_clock()
//{
//	temp=arr[0];
//	arr.erase(arr.begin());
//	arr.push_back(temp);
//}
//
//void all_anti()
//{
//	temp=arr[11];
//	arr.pop_back();
//	arr.insert(arr.begin(),temp);
//}
//
//void dfs (int index , int pos)
//{
//	if(index==20)return;
//
//	if(arr==target)
//	{
//		if(index<res)
//			res=index;
//		return;
//	}
//
//	if(vis[arr[5]][arr[11]])
//	//if(pos==0)
//	//	goto lc;
//	//else if(pos==1)
//	//	goto la;
//	//else if(pos==2)
//	//	goto rc;
//	//else if(pos==3)
//	//	goto ra;
//	//else if(pos==4)
//	//	goto ac;
//	//else if(pos==5)
//	//	goto aa;
//
//lc:
//	left_clock();
//	dfs(index+1,0);
//	left_anti(); //for undo
//
//la:
//	left_anti();
//	dfs(index+1,1);	
//	left_clock(); //for undo
//
//rc:
//	right_clock();
//	dfs(index+1,2);	
//	right_anti(); //for undo
//
//ra:
//	right_anti();	
//	dfs(index+1,3);	
//	right_clock(); //for undo
//
//ac:
//	all_clock();
//	dfs(index+1,4);	
//	all_anti(); //for undo
//
//aa:
//	all_anti();	
//	dfs(index+1,5);	
//	all_clock(); //for undo
//}
//
//int main()
//{
//
//	freopen("input.in","r",stdin);
//	int t;
//	scanf("%d",&t);
//	for( int i=1;i<=12;i++)
//		target.push_back(i);
//	while(t--)
//	{
//		memset(vis,false,sizeof vis);
//		res=oo;
//		found=false;
//		arr.clear();
//		int num;
//		for( int i=0;i<12;i++)
//		{
//			scanf("%d",&num);
//			arr.push_back(num);
//		}
//		dfs(0,0);
//
//		printf("%d\n",res);
//
//	}
//
//	return 0;
//}