# include <iostream>
# include <cstring>
# include <iomanip>
# include <cstdlib>
# include <algorithm>
# include <cmath>
# include <map>
# include <set>
# include <vector>
# include <sstream>
# include <cstring>
# include <windows.h>
# include <math.h>  
# include <Wincon.h>
# include <dos.h>
# include <stdio.h>
# include <conio.h>
# include <ctime>
# include <fstream>  
# include <mmsystem.h>
# pragma comment(lib, "winmm.lib")
#define _WIn32_WInnT 0n500

#define Player1 0
#define Player2 1
int Player=0;

using namespace std;
///////////////// Sets Cursor Position  //////////////////////

COORD Position(int x , int y)
{
	COORD coordinate;
	coordinate.X =  static_cast<SHORT>(x);
	coordinate.Y =  static_cast<SHORT>(y);
	SetConsoleCursorPosition
		(GetStdHandle(STD_OUTPUT_HANDLE),coordinate);
	return coordinate;
}

enum c4type {C,R,B};

class c4Pieces
{	
public:
	c4type cType;
	c4Pieces():cType(C)
	{}
};

class c4Board
{
public:
	c4Pieces game[6][7]; 
};

class c4Game
{
public :
	c4Pieces c00,c01,c02,c03,c04,c05,c06;
	c4Pieces c10,c11,c12,c13,c14,c15,c16;
	c4Pieces c20,c21,c22,c23,c24,c25,c26;
	c4Pieces c30,c31,c32,c33,c34,c35,c36;
	c4Pieces c40,c41,c42,c43,c44,c45,c46;
	c4Pieces c50,c51,c52,c53,c54,c55,c56;
	c4Board c4;
	int arr[7];

	void Default ()
	{
		memset(arr,-1,sizeof(arr));
		c4.game[0][0]=c00;c4.game[0][1]=c01;c4.game[0][2]=c02;c4.game[0][3]=c03;c4.game[0][4]=c04;c4.game[0][5]=c05;c4.game[0][6]=c06;
		c4.game[1][0]=c10;c4.game[1][1]=c11;c4.game[1][2]=c12;c4.game[1][3]=c03;c4.game[1][4]=c14;c4.game[1][5]=c15;c4.game[1][6]=c16;
		c4.game[2][0]=c20;c4.game[2][1]=c21;c4.game[2][2]=c22;c4.game[2][3]=c03;c4.game[2][4]=c24;c4.game[2][5]=c25;c4.game[2][6]=c26;
		c4.game[3][0]=c30;c4.game[3][1]=c31;c4.game[3][2]=c32;c4.game[3][3]=c03;c4.game[3][4]=c34;c4.game[3][5]=c35;c4.game[3][6]=c36;
		c4.game[4][0]=c40;c4.game[4][1]=c41;c4.game[4][2]=c42;c4.game[4][3]=c03;c4.game[4][4]=c44;c4.game[4][5]=c45;c4.game[4][6]=c46;
		c4.game[5][0]=c50;c4.game[5][1]=c51;c4.game[5][2]=c52;c4.game[5][3]=c03;c4.game[5][4]=c54;c4.game[5][5]=c55;c4.game[5][6]=c56;
	}	

	void Assign(int x, int y)
	{
		x=(x*9)-2;
		y=(y*4)-2;
		Position(x,y);
	}

	c4type Mark(int MARK1,int MARK2)
	{
		Assign(MARK1+1,(6-MARK2));
		if(Player==0)
		{
			cout<<'R';
			return R;
		}
		else
		{
			cout<<'B';
			return B;
		}
	}

	int RandomNumber()
	{
		time_t sec; 
		time(&sec);
		srand(sec);	

		int RANDOM=(rand());
		return RANDOM;
	}

	void Clear(int x, int y)
	{
		x=(x*9)-1;
		y=(y*4)-2;
		Position(x,y);
		cout<<"\b\b  ";
	}

	void Grid()
	{
		for(int j=0;j<25;j+=4)	
			for(int i=3;i<65;i++)
			{
				Position(i,j);
				cout<<"_";
			}		

			for(int i=2;i<70;i+=9)
				for(int j=1;j<25;j++)
				{
					Position(i,j);
					cout<<"|";
				}
	}

	int CheckWin(int x,int y,c4Pieces connect4[6][7])
	{
		int NumberOfWins=0;
		// column
		if ( x>=3 )
		{
			if ( connect4[x][y].cType==connect4[x-1][y].cType && connect4[x][y].cType==connect4[x-2][y].cType && connect4[x][y].cType==connect4[x-3][y].cType )
			{
				if ( connect4[x][y].cType==R)
					NumberOfWins++;
				else
					NumberOfWins--;
			}
		}

		//Rows
		if( y>=3)
		{
			if ( connect4[x][y].cType==connect4[x][y-1].cType && connect4[x][y].cType==connect4[x][y-2].cType && connect4[x][y].cType==connect4[x][y-3].cType )
			{
				if ( connect4[x][y].cType==R)
					NumberOfWins++;
				else
					NumberOfWins--;
			}
		}
		if ( y<=3 )
		{
			if ( connect4[x][y].cType==connect4[x][y+1].cType && connect4[x][y].cType==connect4[x][y+2].cType && connect4[x][y].cType==connect4[x][y+3].cType )
			{
				if ( connect4[x][y].cType==R)
					NumberOfWins++;
				else
					NumberOfWins--;
			}
		}
		if ( y-1>=0 && y+2<=6 )
		{
			if ( connect4[x][y].cType==connect4[x][y-1].cType && connect4[x][y].cType==connect4[x][y+1].cType && connect4[x][y].cType==connect4[x][y+2].cType )
			{
				if ( connect4[x][y].cType==R)
					NumberOfWins++;
				else
					NumberOfWins--;
			}
		}
		if ( y-2>=0 && y+1<=6 )
		{
			if ( connect4[x][y].cType==connect4[x][y-1].cType && connect4[x][y].cType==connect4[x][y-2].cType && connect4[x][y].cType==connect4[x][y+1].cType )
			{
				if ( connect4[x][y].cType==R)
					NumberOfWins++;
				else
					NumberOfWins--;
			}
		}

		//Diagonals
			if ( y-3>=0 && x>=3)
			{
				if ( connect4[x][y].cType==connect4[x-1][y-1].cType && connect4[x][y].cType==connect4[x-2][y-2].cType && connect4[x][y].cType==connect4[x-3][y-3].cType )
				{
					if ( connect4[x][y].cType==R)
						NumberOfWins++;
					else
						NumberOfWins--;
				}
			}
			if (y+3<=6 && x>=3)
			{
				if ( connect4[x][y].cType==connect4[x-1][y+1].cType && connect4[x][y].cType==connect4[x-2][y+2].cType && connect4[x][y].cType==connect4[x-3][y+3].cType )
				{
					if ( connect4[x][y].cType==R)
						NumberOfWins++;
					else
						NumberOfWins--;
				}
			}
			if (y+3<=6 && x<3)
			{
				if ( connect4[x][y].cType==connect4[x+1][y+1].cType && connect4[x][y].cType==connect4[x+2][y+2].cType && connect4[x][y].cType==connect4[x+3][y+3].cType )
				{
					if ( connect4[x][y].cType==R)
						NumberOfWins++;
					else
						NumberOfWins--;
				}
			}
			if ( y-3>=0 && x<3)
			{
				if ( connect4[x][y].cType==connect4[x+1][y-1].cType && connect4[x][y].cType==connect4[x+2][y-2].cType && connect4[x][y].cType==connect4[x+3][y-3].cType )
				{
					if ( connect4[x][y].cType==R)
						NumberOfWins++;
					else
						NumberOfWins--;
				}
			}
		if ( x-1>=0 && x+2<=5 && y-1>=0 && y+2<=6)
		{
			if ( connect4[x][y].cType==connect4[x-1][y-1].cType && connect4[x][y].cType==connect4[x+1][y+1].cType && connect4[x][y].cType==connect4[x+2][y+2].cType )
				{
					if ( connect4[x][y].cType==R)
						NumberOfWins++;
					else
						NumberOfWins--;
				}
		}
		if ( x-2>=0 && x+1<=5 && y-2>=0 && y+1<=6)
		{
			if ( connect4[x][y].cType==connect4[x-2][y-2].cType && connect4[x][y].cType==connect4[x-1][y-1].cType && connect4[x][y].cType==connect4[x+1][y+1].cType )
				{
					if ( connect4[x][y].cType==R)
						NumberOfWins++;
					else
						NumberOfWins--;
				}
		}
		if ( x-1>=0 && x+2<=5 && y-2>=0 && y+1<=6)
		{
			if ( connect4[x][y].cType==connect4[x-1][y+1].cType && connect4[x][y].cType==connect4[x+1][y-1].cType && connect4[x][y].cType==connect4[x+2][y-2].cType )
				{
					if ( connect4[x][y].cType==R)
						NumberOfWins++;
					else
						NumberOfWins--;
				}
		}
		if ( x-2>=0 && x+1<=5 && y-1>=0 && y+2<=6)
		{
			if ( connect4[x][y].cType==connect4[x-2][y+2].cType && connect4[x][y].cType==connect4[x-1][y+1].cType && connect4[x][y].cType==connect4[x+1][y-1].cType )
				{
					if ( connect4[x][y].cType==R)
						NumberOfWins++;
					else
						NumberOfWins--;
				}
		}
		return NumberOfWins*10000;
	}

	bool Draw (c4Pieces _board[6][7])
	{
		for( int j=0 ; j<7 ; j++ )
			for ( int i=0 ; i<6 ; i++ )
				if(_board[i][j].cType==C)
					return false;
		return true;

		/*if(CheckWin(_board)==0)
		return true;
		return false;*/
	}

	int Evaluate(int x,int y,c4Pieces board[6][7])
	{
		bool draw=true;
		int value=CheckWin(x,y,board);
		if(value==0)
		{
			for( int j=0 ; j<7 ; j++ )
				for ( int i=0 ; i<6 ; i++ )
				{
					if(board[i][j].cType== C)
					{
						draw=false;
						break;
					}
				}
				if(draw==true)return 0;
				else return -1;
		}
		else 
			return value;
	}

	int minimax(int depth, c4Pieces _board[6][7] )
	{
		int bestValue = 10000, index = 0;
		int bestMoves[42] ;
		for( int j=0; j<7; j++ )
		{
			for ( int i=0 ; i<6 ; i++ )
			{
				if( _board[i][j].cType == C )
				{
					_board[i][j].cType = B;
					int value = maxSearch(depth,i,j, _board );
					if( value < bestValue )
					{
						bestValue = value;
						index = 0;
						bestMoves[index] = j;
					}

					else if( value == bestValue )
					{
						bestMoves[index++] = j;
					}
					_board[i][j].cType = C;
					break;
				}
			}
		}
		if( index > 0 )
			index = RandomNumber ()% index;
		return bestMoves[index];
	}

	int minSearch(int depth ,int x,int y, c4Pieces _board[6][7] )
	{
		int pos_value=Evaluate(x,y,_board);
		if(pos_value != -1 || depth==0)
			return pos_value;

		int bestValue = 10000;
		for(int j=0 ; j<7 ; j++ )
		{
			for ( int i=0 ; i<6 ; i++ )
			{
				if( _board[i][j].cType == C )
				{
					_board[i][j].cType = B;

					int value=maxSearch(depth-1,i,j,_board);
					if( value < bestValue )
						bestValue = value;
					_board[i][j].cType = C;
					break;
				}
			}
		}
		return bestValue;
	}

	int maxSearch(int depth, int x, int y,c4Pieces _board[6][7] )
	{
		int pos_value=Evaluate(x,y,_board);
		if(pos_value != -1|| depth==0)
			return pos_value;

		int bestValue = -10000;
		for( int j=0 ; j<7 ; j++ )
		{
			for ( int i=0 ; i<6 ; i++ )
			{
				if( _board[i][j].cType == C )
				{
					_board[i][j].cType = R;
					int value=minSearch(depth-1,i,j,_board);

					if(value > bestValue )
						bestValue = value;
					_board[i][j].cType = C;
					break;
				}
			}
		}
		return bestValue;
	}

	void HumanPlay()
	{
		int MARK;

		Position(5,28);
		if(Player==0)
			cout<<"Player 1 Turn";
		else
			cout<<"Player 2 Turn";
		Position(5,30);
		cout<<"To (     )";
		Position(11,30);
		cin>>MARK;
		arr[MARK-1]++;

		if(c4.game[arr[MARK-1]][MARK-1].cType == C )
		{
			c4.game[arr[MARK-1]][MARK-1].cType=Mark(MARK-1,arr[MARK-1]);
			if ( CheckWin(arr[MARK-1],MARK-1,c4.game)!= 0 )
				goto END;
		}
		else
		{
			cout<<"\a\a\a";
			HumanPlay();
		}

		Player=(Player+1)%2;

		HumanPlay();
END:
		system("cls");
		cout<<"Player "<<Player+1<<" Wins.\a\a"<<endl;
	}

	void Congrat()
	{
		system("cls");
		if(Draw(c4.game)==false)
			cout<<"Player "<<Player+1<<" Wins. !!!!!" ;
		else
			cout<<"Draw. !!!!!"<<endl;
		Sleep(5000);
		cin.get();
	}

	void ComputerPlay()
	{
		int level,depth;
		system("cls");
		cout<<"Press :\n"<<"1)Easy\n"<<"2)Medium\n"<<"3)Hard\n";
		cin>>level;
		system("cls");
		if(level==1)
			depth=3;
		else if (level==2)
			depth=5;
		else
			depth=7;
		Grid();
		while(true)
		{
			int MARK;
			Position(5,28);
			if(Player==0)
				cout<<"Player 1 Turn              ";
			else
				cout<<"Computer Turn...Please Wait";
			Position(5,30);
			cout<<"To (     )";
			if(Player==0)
			{
				Position(11,30);
				cin>>MARK;
				arr[MARK-1]++;
			}
			else
			{
				while(true)
				{
					MARK=minimax(depth,c4.game);
					if(c4.game[arr[MARK]+1][MARK].cType == C )
					{
						arr[MARK]++;
						MARK++;
						break;
					}
				}
			}

			if(c4.game[arr[MARK-1]][MARK-1].cType == C )
			{
				c4.game[arr[MARK-1]][MARK-1].cType=Mark(MARK-1,arr[MARK-1]);

				if (CheckWin(arr[MARK-1],MARK-1,c4.game)!= 0 || Draw(c4.game)==true)
					goto END;
			}
			else
			{
				cout<<"\a\a\a";
				continue;
			}
			Player=(Player+1)%2;
		}
END:
		Congrat();
	}
};

int main()
{
	system("Color F3");
	c4Game Connect4;
	Connect4.Default();
	int choice;
	cout<<"Press :\n"<<"(1) For 2 players.\n"<<"(2) For 1 player.\n";
	cin>>choice;
	system("cls");
	if ( choice==1 )
	{
		Connect4.Grid();
		Connect4.HumanPlay();
	}
	else
		Connect4.ComputerPlay();
	cout<<endl<<endl<<endl<<endl;
	return 0;
}

