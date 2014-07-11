//#include <iostream>
//#include <string>
//#include <cstring>
//#include <math.h>
//#include <algorithm>
//
////Matches
//
//using namespace std;
//int main ()
//{
//	freopen("input.in", "r", stdin);
//
//	//Letter	I	V	X	L	C	D	M
//	//Value  	1	5	10	50	100	500	1000
//
//
//	int I=1,V=5,X=10,L=50,C=100,D=500,M=1000;
//
//	string text;
//	string output[5];
//	string zatona;
//
//	while(getline(cin,text))
//	{
//
//		if(text[0]>='0' &&text[0]<='9')
//		{
//
//			int num[5];
//
//			output[0].clear();
//			output[1].clear();
//			output[2].clear();
//			output[3].clear();
//
//			for(int i=text.length()-1,q=1 ,z=0; i>=0 ; i--,q=q*10,z++)
//			{
//				num[z]=(text[i]-'0')*q;
//			}
//
//			int done=0;
//
//			//////////////////////////////////////////////
//
//			for(int f=0;f<=1;f++) //X
//			{
//				for(int d=0;d<=1;d++) //V/////////
//				{
//					for(int s=-3;s<=3;s++) //I
//					{
//						if( (f*X)+(d*V)+(s*I) == num[0] )
//						{
//							if(s<0)
//								output[0].append(abs(s),'I');
//
//							output[0].append(d,'V');	
//							output[0].append(f,'X');
//
//							if(s>=0)
//								output[0].append(abs(s),'I');
//
//							done=1;
//							break;
//						}
//
//					}
//					if(done==1)break;
//				}
//				if(done==1)break;
//			}
//
//			///////////
//
//			if(text.length()<=1)
//			{
//				zatona=output[0];
//				goto res;
//			}
//
//			done=0;
//
//			for(int f=0;f<=1;f++) //C
//			{
//				for(int d=0;d<=1;d++) //L/////////
//				{
//					for(int s=-3;s<=3;s++) //X
//					{
//						if( (f*C)+(d*L)+(s*X) == num[1] )
//						{
//							if(s<0)
//								output[1].append(abs(s),'X');
//
//							output[1].append(d,'L');	
//							output[1].append(f,'C');
//
//							if(s>=0)
//								output[1].append(abs(s),'X');
//
//							done=1;
//							break;
//						}
//
//					}
//					if(done==1)break;
//				}
//				if(done==1)break;
//			}
//
//
//
//
//			if(text.length()<=2)
//			{
//				zatona=output[1]+output[0];
//				goto res;
//			}
//
//			/////////////
//
//			done=0;
//
//			for(int f=0;f<=1;f++) //M
//			{
//				for(int d=0;d<=1;d++) //D/////////
//				{
//					for(int s=-3;s<=3;s++) //C
//					{
//						if( (f*M)+(d*D)+(s*C) == num[2] )
//						{
//							if(s<0)
//								output[2].append(abs(s),'C');
//
//							output[2].append(d,'D');	
//							output[2].append(f,'M');
//
//							if(s>=0)
//								output[2].append(abs(s),'C');
//
//							done=1;
//							break;
//						}
//
//					}
//					if(done==1)break;
//				}
//				if(done==1)break;
//			}
//
//
//
//			if(text.length()<=3)
//			{
//				zatona=output[2]+output[1]+output[0];
//				goto res;
//			}
//
//
//			/////////////
//
//			output[3].append((num[3]/1000),'M');
//
//
//
//
//			zatona=output[3]+output[2]+output[1]+output[0];
//		}
//
//
//
//
//
//		//////////////////////////////////////////////////////////////
//
//res:
//		int Value[20];
//
//		char Numerals[20];
//
//
//		Value[0] = 1, Numerals[0] = 'I';
//		Value[1] = 2, Numerals[1] = 'X';
//		Value[2] = 2, Numerals[2] = 'V' ;
//		Value[3] = 2, Numerals[3] = 'L';
//		Value[4] = 2, Numerals[4] = 'C';
//		Value[5] = 3, Numerals[5] = 'D';
//		Value[6] = 4, Numerals[6] = 'M';
//
//		int sum=0;
//
//		for(int i=0;i<zatona.length();i++)
//			for(int j=0;j<7;j++)
//			{
//				if(zatona[i]==Numerals[j])
//				{
//					sum+=Value[j];
//					break;
//				}
//			}
//
//			cout<<sum<<endl;
//
//	}
//	return 0;
//}
