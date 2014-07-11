#include <iostream>
#include <string>
#include <cstring>


using namespace std;
char MAP[8][8];
bool occ[8][8];
bool isValid(int x , int y)
{
	if(x>=0 && y>=0 && x<8 && y<8)return true;
	return false;
}
int knight_x[]={1,1,2,2,-1,-1,-2,-2};
int knight_y[]={2,-2,1,-1,2,-2,1,-1};

int king_x[]={-1,-1,-1,0,0,1,1,1};
int king_y[]={-1,0,1,-1,1,-1,0,1};

void knight(int x , int y)
{
	occ[x][y]=true;
	for(int i=0; i<8; i++)
		if(isValid(x+knight_x[i],y+knight_y[i]))
			occ[x+knight_x[i]][y+knight_y[i]]=true;

}

void king(int x , int y)
{
	occ[x][y]=true;
	for(int i=0; i<8; i++)
		if(isValid(x+king_x[i],y+king_y[i]))
			occ[x+king_x[i]][y+king_y[i]]=true;

}

void rook(int x , int y)
{
	occ[x][y]=true;
	for(int i=x+1;i<8;i++){
		if(MAP[i][y]=='e')
			occ[i][y]=true;
		else break;
	}
	for(int i=x-1;i>=0;i--){
		if(MAP[i][y]=='e')
			occ[i][y]=true;
		else break;
	}
	for(int i=y+1;i<8;i++){
		if(MAP[x][i]=='e')
			occ[x][i]=true;
		else break;
	}
	for(int i=y-1;i>=0;i--){
		if(MAP[x][i]=='e')
			occ[x][i]=true;
		else break;
	}
}
void bishop(int x , int y)
{
	occ[x][y]=true;
	for(int i=x+1,j=y+1;i<8 && j<8;i++,j++){
		if(MAP[i][j]=='e')
			occ[i][j]=true;
		else break;
	}
	for(int i=x-1,j=y+1;i>=0 && j<8;i--,j++){
		if(MAP[i][j]=='e')
			occ[i][j]=true;
		else break;
	}
	for(int i=x+1,j=y-1;i<8 && j>=0 ;i++,j--){
		if(MAP[i][j]=='e')
			occ[i][j]=true;
		else break;
	}
	for(int i=x-1,j=y-1;i>=0 && j>=0;i--,j--){
		if(MAP[i][j]=='e')
			occ[i][j]=true;
		else break;
	}
}

void queen(int x , int y)
{
	occ[x][y]=true;
	bishop(x,y);
	rook(x,y);
}

void wpawn(int x , int y)
{
	occ[x][y]=true;
	if(isValid(x-1,y-1))
		occ[x-1][y-1]=true;
	if(isValid(x-1,y+1))
		occ[x-1][y+1]=true;
}
void bpawn(int x , int y)
{
	occ[x][y]=true;
	if(isValid(x+1,y-1))
		occ[x+1][y-1]=true;
	if(isValid(x+1,y+1))
		occ[x+1][y+1]=true;
}
int main()
{
	int num;
	freopen("input.in","r",stdin);
	string text;
	while(cin>>text)
	{
		memset(occ,false,sizeof(occ));
		int rows=0, col=0;
		for(int i=0 ; i<text.length(); i++)
			if(text[i]=='/')
			{
				rows++;
				col=0;
			}	
			else if(isdigit(text[i]))
			{
				MAP[rows][col]='e';
				num=text[i]-'0';
				while(num--)
				{
					MAP[rows][col]='e';
				col++;
				}
			}
			else
			{
			MAP[rows][col]=text[i];
				occ[rows][col]=true;
				col++;
			}




	for(int i=0; i<8; i++)
		for(int j=0; j<8; j++)
		{
			switch(MAP[i][j])
			{
			case 'k':
			case 'K':
				king(i,j);
				break;
			case 'q':
			case 'Q':
				queen(i,j);
				break;
			case 'n':
			case 'N':
				knight(i,j);
				break;
			case 'p':
				bpawn(i,j);
				break;
			case 'P':
				wpawn(i,j);
				break;
			case 'r':
			case 'R':
				rook(i,j);
				break;
			case 'b':
			case 'B':
				bishop(i,j);
				break;
			}
		}
		int counter=0;

		for(int i=0; i<8; i++)
			for(int j=0; j<8; j++)
				if(!occ[i][j])
					counter++;

		cout<<counter<<endl;
}
return 0;
}