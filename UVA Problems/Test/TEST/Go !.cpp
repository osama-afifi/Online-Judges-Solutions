//#include <iostream>
//#include <windows.h> 
//#include <math.h>
//#include <string> 
//#include <ctime> // to use the time function.
//#include <iomanip> 
//#include <fstream> 
//#include <conio.h>
//#include <deque>
//#pragma comment( lib, "winmm" )
//using namespace std;
//void menu(); void move();
//struct Point
//{
//	int x;
//	int y;
//};
//int score=0, sound=0, counter, level=1, score_plus;
//int speed=100;
//bool mode = true;  // true=classic; false=compaign	
//string name;
//deque <Point> snake;
//deque <Point> MAZE;
//void gotoXY(int x, int y)    
//{                         
//	COORD coord;          
//	coord.X = x;
//	coord.Y = y;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
//}
//
//void LEVEL()
//{
//	if (level==1)
//	{
//		speed=100;
//		counter =10;
//		score_plus=3;
//		return;
//	}
//	else if (level==2)
//	{
//		speed=85;
//		counter =15;
//		score_plus=5;
//		return;
//	}
//	else if (level==3)
//	{
//		speed=70;
//		counter=20;
//		score_plus=7;
//		return;
//	}
//	else if (level==4)
//	{
//		speed=58;
//		counter=25;
//		score_plus=10;
//		return;
//	}
//	else if (level==5)
//	{
//		speed=50;
//		counter=25;
//		score_plus=12;
//		return;
//	}
//}
//
//void option()	
//{
//	system("cls");
//	bool flag=true;
//	Point point;
//	point.x=31;
//	point.y=7;
//	gotoXY(33,7);
//	cout<<"Mode  : ";
//	if(mode==true)
//		cout<<"Classic "<<endl;
//	else
//		cout<<"Compaign";
//	gotoXY(33,9);
//	cout<<"Music : ON"<<endl;
//	gotoXY(33,11);
//	cout<<"Level : "<<level<<endl;
//	gotoXY(33,13);
//	cout<<"EXIT"<<endl;
//	while(true)
//	{
//		if(flag==true)
//		{
//			gotoXY(point.x,point.y);
//			cout<<(char)16<<endl;
//			flag=false;
//		}
//
//		if	( GetAsyncKeyState(VK_UP) & 0x25 &&(point.y>7))
//		{
//			gotoXY(point.x,point.y);
//			cout<<" "<<endl;
//			point.y-=2;	
//			flag=true;
//		}
//		else if	( GetAsyncKeyState(VK_DOWN) & 0x25 && (point.y<13))
//		{
//			gotoXY(point.x,point.y);
//			cout<<" "<<endl;
//			point.y+=2;
//			flag=true;
//		}
//		if( GetAsyncKeyState(VK_RETURN) & 0x0D )
//		{
//			switch (point.y)
//			{
//			case 7:
//				if(mode==true)
//				{
//					gotoXY(41,7);
//					cout<<"Compaign";
//					mode=false;
//				}
//				else if (mode==false)
//				{
//					gotoXY(41,7);
//					cout<<"Classic ";
//					mode=true;
//				}
//				break;
//			case 9:
//				if(sound==1)
//				{
//					gotoXY(41,9);
//					cout<<"ON ";
//					sound=0;
//				}
//				else if (sound == 0)
//				{
//					gotoXY(41,9);
//					cout<<"Off";
//					sound=1;
//				}
//				break;
//			case 11:
//				if(level==1)
//				{
//					level=2;
//					gotoXY(41,11);
//					cout<<level;
//				}
//				else if (level == 2)
//				{
//					level=3;
//					gotoXY(41,11);
//					cout<<level;	
//				}
//				else if (level==3)
//				{
//					level=4;
//					gotoXY(41,11);
//					cout<<level;	
//				}
//				else if (level==4)
//				{
//					level=5;
//					gotoXY(41,11);
//					cout<<level;	
//				}
//				else if (level==5)
//				{
//					level=1;
//					gotoXY(41,11);
//					cout<<level;	
//				}
//				break;
//			case 13:
//				menu();
//				return;
//			}
//		}
//	}	
//}
//
//void help()
//{
//	system("cls");
//	gotoXY(15,5);cout<<" # Make the snake grow longer by directing it to the food."<<endl;;Sleep(200);
//	gotoXY(15,7);cout<<" # Use the keys "<<(char)30<<","<<(char)31<<","<<(char)17<<","<<(char)16<<" to move Up,Down,Left,Right ."<<endl;Sleep(200);
//	gotoXY(15,9);cout<<" # You cannot stop the snake or make it go backwards."<<endl;Sleep(200);
//	gotoXY(15,11);cout<<" # Try not to hit the walks or the tail."<<endl;Sleep(200);
//	gotoXY(15,13);cout<<" # Eat the bonus food to increase your score."<<endl;Sleep(500);
//	//when you playing compaign you will get to the next level by eating 10 pieces of food 
//	gotoXY(0,18);cout<<"--------------------------------------------------------------------------------"<<endl;
//	gotoXY(22,21);
//	cout<< " Press ESC To Return To  MAIN MENU"<<endl;
//	while(true)
//	{
//		if( GetAsyncKeyState(VK_ESCAPE) & 0x1B)
//			menu();
//	}
//}
//
//void frame()
//{
//	Point point ;
//	for(int i=0;i<80;i++)
//	{
//		point.x=i;
//		point.y=0;
//		MAZE.push_back(point);
//	}
//	for(int i=0;i<22;i++)
//	{
//		point.x=79;
//		point.y=i;
//		MAZE.push_back(point);
//	}
//	for(int i=79;i>=0;i--)
//	{
//		point.x=i;
//		point.y=21;
//		MAZE.push_back(point);
//	}
//	for(int i=21;i>=0;i--)
//	{
//		point.x=0;
//		point.y=i;
//		MAZE.push_back(point);
//	}
//
//}
//
//void maze()
//{
//	system("cls");
//
//	for(int i=0; i<MAZE.size();i++)
//	{
//		gotoXY(MAZE[i].x,MAZE[i].y);
//		cout<<"#";
//	}
//	gotoXY(1,23);
//	cout<<"Score : "<<score<<"    Level : "<<level<<endl;
//	if(mode==false)
//	{
//		gotoXY(29,23);
//		cout<<"Food : "<<counter<<endl;
//	}
//}
//
//Point FOOD()
//{
//
//	Point foodpoint;
//	while(true)
//	{
//		bool flag=true;
//		srand ( time(NULL) );
//		while(true)
//		{
//			foodpoint.x=rand()%99+1;
//			if(foodpoint.x<79)
//				break;
//		}
//
//		while(true)
//		{
//			foodpoint.y=rand()%30+1;
//			if(foodpoint.y<21)
//				break;
//		}
//		for(int i=0;i<snake.size();i++)
//		{
//			if((foodpoint.x==snake[i].x)&&(foodpoint.y==snake[i].y))
//			{
//				flag=false;
//				break;
//			}
//		}
//		if(flag==true)
//			break;
//	}
//	gotoXY(foodpoint.x,foodpoint.y);
//	if(mode==false && counter==0)
//		cout<<(char)1;
//	else
//		cout<<"*";
//	counter--;
//	return foodpoint;
//
//}
//
//bool CHECK()
//{
//	bool flag=true;
//	for(int i=1; i<snake.size();i++)
//	{
//		if((snake[0].x==snake[i].x)&&(snake[0].y==snake[i].y))
//		{
//			flag=false;
//			break;
//		}
//	}
//	for(int i=0;i<MAZE.size();i++)
//	{
//		if((snake[0].x==MAZE[i].x)&&(snake[0].y==MAZE[i].y))
//		{
//			flag=false;
//			break;
//		}
//	}
//	return flag;
//}
//
//void Interface()
//{
//	frame();
//	for(int i=0;i<MAZE.size();i++)
//	{
//		gotoXY(MAZE[i].x,MAZE[i].y);
//		cout<<(char)2;
//		Sleep(20);
//	}
//	gotoXY(17, 5);cout<<"  ######  ##    ##    ###    ##    ## ######## "<<endl;Sleep(75);
//	gotoXY(17, 6);cout<<" ##    ## ###   ##   ## ##   ##   ##  ##       "<<endl;Sleep(75);
//	gotoXY(17, 7);cout<<" ##       ####  ##  ##   ##  ##  ##   ##       "<<endl;Sleep(75);
//	gotoXY(17, 8);cout<<"  ######  ## ## ## ##     ## #####    ######   "<<endl;Sleep(75);
//	gotoXY(17, 9);cout<<"       ## ##  #### ######### ##  ##   ##       "<<endl;Sleep(75);
//	gotoXY(17,10);cout<<" ##    ## ##   ### ##     ## ##   ##  ##       "<<endl;Sleep(75);
//	gotoXY(17,11);cout<<"  ######  ##    ## ##     ## ##    ## ######## "<<endl;Sleep(100);
//	gotoXY(17,13);cout<<"               .d8888b. .d8888b. 88d8b.d8b. .d8888b."<<endl;Sleep(75); 
//	gotoXY(17,14);cout<<"               88'  `88 88'  `88 88'`88'`88 88ooood8 "<<endl;Sleep(75);
//	gotoXY(17,15);cout<<"               88.  .88 88.  .88 88  88  88 88.  ... "<<endl;Sleep(75);
//	gotoXY(17,16);cout<<"               `8888P88 `88888P8 dP  dP  dP` 88888P' "<<endl;Sleep(75);
//	gotoXY(17,17);cout<<"                    .88                           "<<endl;Sleep(75);
//	gotoXY(17,18);cout<<"                d8888P                            "<<endl;Sleep(1000);
//	system("cls");
//	for(int i=0;i<MAZE.size();i++)
//	{
//		gotoXY(MAZE[i].x,MAZE[i].y);
//		cout<<(char)2;
//	}
//	gotoXY(25,10);cout<<" ENTER YOUR NAME : ";
//	getline(cin,name);
//	while(true)
//	{
//		if( GetAsyncKeyState(VK_RETURN) & 0x0D)
//			menu();
//	}
//}
//
//void go()
//{
//	system("cls");
//	gotoXY(0,4);
//	cout<<"                                   333333333333333"<<endl;   
//	cout<<"                                  3:::::::::::::::33 "<<endl;
//	cout<<"                                 3::::::33333::::::3"<<endl;
//	cout<<"                                 3333333     3:::::3"<<endl;
//	cout<<"                                             3:::::3"<<endl;
//	cout<<"                                             3:::::3"<<endl;
//	cout<<"                                      33333333:::::3"<<endl; 
//	cout<<"                                      3:::::::::::3"<<endl;  
//	cout<<"                                      33333333:::::3"<<endl; 
//	cout<<"                                             3:::::3"<<endl;
//	cout<<"                                             3:::::3"<<endl;
//	cout<<"                                             3:::::3"<<endl;
//	cout<<"                                 3333333     3:::::3"<<endl;
//	cout<<"                                 3::::::33333::::::3"<<endl;
//	cout<<"                                  3:::::::::::::::33"<<endl; 
//	cout<<"                                   333333333333333"<<endl;   
//	Sleep(600);
//	system("cls");
//
//	gotoXY(0,4);
//	cout<<"                                   222222222222222    "<<endl;    
//	cout<<"                                  2:::::::::::::::22  "<<endl;  
//	cout<<"                                  2::::::222222:::::2 "<<endl;
//	cout<<"                                  2222222     2:::::2 "<<endl;
//	cout<<"                                              2:::::2 "<<endl;
//	cout<<"                                              2:::::2 "<<endl;
//	cout<<"                                           2222::::2  "<<endl;
//	cout<<"                                      22222::::::22   "<<endl;
//	cout<<"                                    22::::::::222     "<<endl;
//	cout<<"                                   2:::::22222        "<<endl;
//	cout<<"                                  2:::::2             "<<endl;
//	cout<<"                                 2:::::2             "<<endl;
//	cout<<"                                 2:::::2       222222"<<endl;
//	cout<<"                                 2::::::2222222:::::2"<<endl;
//	cout<<"                                 2::::::::::::::::::2"<<endl;
//	cout<<"                                 22222222222222222222"<<endl;
//	Sleep(600);
//	system("cls");
//
//	gotoXY(0,4);
//	cout<<"                                      1111111   "<<endl;   
//	cout<<"                                     1::::::1   "<<endl;
//	cout<<"                                    1:::::::1   "<<endl;
//	cout<<"                                    111:::::1   "<<endl;
//	cout<<"                                       1::::1   "<<endl;
//	cout<<"                                       1::::1   "<<endl;
//	cout<<"                                       1::::1   "<<endl;
//	cout<<"                                       1::::l   "<<endl;
//	cout<<"                                       1::::l   "<<endl;
//	cout<<"                                       1::::l   "<<endl;
//	cout<<"                                       1::::l   "<<endl;
//	cout<<"                                       1::::l   "<<endl;
//	cout<<"                                    111::::::111"<<endl;
//	cout<<"                                    1::::::::::1"<<endl;
//	cout<<"                                    1::::::::::1"<<endl;
//	cout<<"                                    111111111111"<<endl;
//	Sleep(600);
//	system("cls");
//
//	gotoXY(0,4);
//	cout<<"                                GGGGGGGGGGGGG      OOOOOOOOO   "<<endl;
//	cout<<"                             GGG::::::::::::G    OO:::::::::OO"<<endl;   
//	cout<<"                           GG:::::::::::::::G  OO:::::::::::::OO"<<endl; 
//	cout<<"                          G:::::GGGGGGGG::::G O:::::::OOO:::::::O"<<endl;
//	cout<<"                         G:::::G       GGGGGG O::::::O   O::::::O"<<endl;
//	cout<<"                        G:::::G               O:::::O     O:::::O"<<endl;
//	cout<<"                        G:::::G               O:::::O     O:::::O"<<endl;
//	cout<<"                        G:::::G    GGGGGGGGGG O:::::O     O:::::O"<<endl;
//	cout<<"                        G:::::G    G::::::::G O:::::O     O:::::O"<<endl;
//	cout<<"                        G:::::G    GGGGG::::G O:::::O     O:::::O"<<endl;
//	cout<<"                        G:::::G        G::::G O:::::O     O:::::O"<<endl;
//	cout<<"                         G:::::G       G::::G O::::::O   O::::::O"<<endl;
//	cout<<"                          G:::::GGGGGGGG::::G O:::::::OOO:::::::O"<<endl;
//	cout<<"                           GG:::::::::::::::G  OO:::::::::::::OO "<<endl;
//	cout<<"                             GGG::::::GGG:::G    OO:::::::::OO   "<<endl;
//	cout<<"                                GGGGGG   GGGG      OOOOOOOOO     "<<endl;
//	Sleep(600);
//
//	LEVEL();
//	maze();
//	move();
//}
//
//void LEVEL_view()
//{
//	system("cls");
//	gotoXY(25,6);cout<<"#      ###### #    # ###### #      "<<endl; 
//	gotoXY(25,7);cout<<"#      #      #    # #      #      "<<endl; 
//	gotoXY(25,8);cout<<"#      #####  #    # #####  #      "<<endl; 
//	gotoXY(25,9);cout<<"#      #      #    # #      #      "<<endl; 
//	gotoXY(25,10);cout<<"#      #       #  #  #      #      "<<endl; 
//	gotoXY(25,11);cout<<"###### ######   ##   ###### ###### "<<endl; 
//	Sleep(200);
//
//	if(level==1)
//	{
//		gotoXY(37,13);cout<<"   #   "<<endl;   
//		gotoXY(37,14);cout<<"  ##   "<<endl;
//		gotoXY(37,15);cout<<" # #   "<<endl;
//		gotoXY(37,16);cout<<"   #   "<<endl;
//		gotoXY(37,17);cout<<"   #   "<<endl;
//		gotoXY(37,18);cout<<"   #   "<<endl;
//		gotoXY(37,19);cout<<" ##### "<<endl;
//	}
//	else if(level==2)
//	{
//		gotoXY(37,13);cout<<" #####  "<<endl;
//		gotoXY(37,14);cout<<"#     # "<<endl;
//		gotoXY(37,15);cout<<"      # "<<endl;
//		gotoXY(37,16);cout<<" #####  "<<endl;
//		gotoXY(37,17);cout<<"#       "<<endl;
//		gotoXY(37,18);cout<<"#       "<<endl;
//		gotoXY(37,19);cout<<"####### "<<endl;
//	}
//	else if(level==3)
//	{
//
//		gotoXY(37,13);cout<<" #####  "<<endl;
//		gotoXY(37,14);cout<<"#     # "<<endl;
//		gotoXY(37,15);cout<<"      # "<<endl;
//		gotoXY(37,16);cout<<" #####  "<<endl;
//		gotoXY(37,17);cout<<"      # "<<endl;
//		gotoXY(37,18);cout<<"#     # "<<endl;
//		gotoXY(37,19);cout<<" #####  "<<endl;
//	}
//	else if(level==4)
//	{      
//		gotoXY(37,13);cout<<"#    #  "<<endl;
//		gotoXY(37,14);cout<<"#    #  "<<endl;
//		gotoXY(37,15);cout<<"#    #  "<<endl;
//		gotoXY(37,16);cout<<"####### "<<endl;
//		gotoXY(37,17);cout<<"     #  "<<endl;
//		gotoXY(37,18);cout<<"     #  "<<endl;
//	}
//	else if(level==5)
//	{
//		gotoXY(37,13);cout<<"####### "<<endl;
//		gotoXY(37,14);cout<<"#       "<<endl;
//		gotoXY(37,15);cout<<"#       "<<endl;
//		gotoXY(37,16);cout<<"######  "<<endl;
//		gotoXY(37,17);cout<<"      # "<<endl;
//		gotoXY(37,18);cout<<"      # "<<endl;
//		gotoXY(37,19);cout<<"#     # "<<endl;
//		gotoXY(37,19);cout<<" #####  "<<endl;
//	}
//	Sleep(600);
//}
//
//void gameover()
//{
//	Point point;
//	bool flag=true;
//	point.x=36; point.y=18;
//	system("cls");
//	gotoXY(1, 5);cout<<" .88888.                                   .88888.                              ";
//	gotoXY(1, 6);cout<<"d8'   `88                                 d8'   `8b                             ";
//	gotoXY(1, 7);cout<<"88        .d8888b. 88d8b.d8b. .d8888b.    88     88 dP   .dP .d8888b. 88d888b.  ";
//	gotoXY(1, 8);cout<<"88   YP88 88'  `88 88'`88'`88 88ooood8    88     88 88   d8' 88ooood8 88'    '  ";
//	gotoXY(1, 9);cout<<"Y8.   .88 88.  .88 88  88  88 88.  ...    Y8.   .8P 88 .88'  88.  ... 88        ";
//	gotoXY(1,10);cout<<" `88888'  `88888P8 dP  dP  dP `88888P'     `8888P'  8888P'   `88888P' dP        ";
//	Sleep(200);
//
//	gotoXY(34,14);cout<<" Your score is "<<score<<endl;
//	snake.clear();
//	score=0;
//	Sleep(200);
//	gotoXY(38,18);cout<<"MAIN MENU"<<endl;
//	gotoXY(38,20);cout<<"EXIT"<<endl;
//	while(true)
//	{
//		if(flag==true)
//		{
//			gotoXY(point.x,point.y);
//			cout<<(char)16<<endl;
//			flag=false;
//		}
//
//		if	( GetAsyncKeyState(VK_UP) & 0x25 &&(point.y>18))
//		{
//			gotoXY(point.x,point.y);
//			cout<<" "<<endl;
//			point.y-=2;	
//			flag=true;
//		}
//		else if	( GetAsyncKeyState(VK_DOWN) & 0x25 && (point.y<20))
//		{
//			gotoXY(point.x,point.y);
//			cout<<" "<<endl;
//			point.y+=2;
//			flag=true;
//		}
//		if( GetAsyncKeyState(VK_RETURN) & 0x0D )
//		{
//			switch(point.y)
//			{
//			case 18:
//				menu();
//				return;
//			case 20:
//				exit(0);
//				break;
//			}
//		}
//	}
//
//}
//
//void move()
//{
//	bool check;
//	Point foodpoint,finishpoint,point,point2;
//	point.x=3;point2.x=2;
//	point.y=10;point2.y=10;
//	Point space;
//	snake.push_back(point);
//	snake.push_back(point2);
//	int move=2;
//	LEVEL();
//	foodpoint=FOOD();
//	while(true)
//	{
//		space=snake.back();
//		for(int i=snake.size()-1;i>0;i--)
//			snake[i]=snake[i-1];
//		if	( GetAsyncKeyState(VK_UP) & 0x25 && move!=3)
//			move=1;
//		else  if	( GetAsyncKeyState(VK_DOWN) & 0x25 && move!=1)
//			move=3;
//		else if	( GetAsyncKeyState(VK_RIGHT) & 0x25 && move!=4)
//			move=2;
//		else  if	( GetAsyncKeyState(VK_LEFT) & 0x25 && move!=2)
//			move=4;
//
//		switch(move) 
//		{
//		case 1:
//			snake[0].y--;
//			break;
//		case 2:
//			snake[0].x++;
//			break;
//		case 3:
//			snake[0].y++;
//			break;
//
//		case 4:
//			snake[0].x--;
//			break;
//		}
//		Sleep(speed);
//
//		if((foodpoint.x==snake[0].x)&&(foodpoint.y==snake[0].y))
//		{
//			snake.push_back(space);
//			score+=score_plus;
//			gotoXY(1,23);
//			cout<<"Score : "<<score<<" "<<endl;
//			if (mode==false)
//			{
//				gotoXY(36,23);
//				cout<<counter;
//			}
//			foodpoint=FOOD();
//			if(mode==false && counter==-2)
//			{
//				Sleep(100);
//				system("cls");
//				snake.clear();
//				level++;
//				LEVEL();
//				LEVEL_view();
//				go();
//			}
//
//		}
//		check=CHECK();
//		if(check==false)
//		{
//			gameover();
//			return ;
//		}
//		gotoXY(snake[0].x,snake[0].y);
//		cout<<"@";
//		for( int i=1; i<snake.size(); i++)
//		{
//			gotoXY(snake[i].x,snake[i].y);
//			cout<<"*";
//		}
//		gotoXY(space.x,space.y);
//		cout<<" ";
//
//
//	}
//}
//
//void menu()
//{
//	system("cls");
//	Point point;
//	bool flag=true;
//	point.x=31;
//	point.y=8;
//	gotoXY(33,8);
//	cout<<"Play"<<endl;
//	gotoXY(33,9);
//	cout<<"Option"<<endl;
//	gotoXY(33,10);
//	cout<<"High score"<<endl;
//	gotoXY(33,11);
//	cout<<"Help"<<endl;
//	gotoXY(33,12);
//	cout<<"Exit"<<endl;
//	while(true)
//	{
//		if(flag==true)
//		{
//			gotoXY(point.x,point.y);
//			cout<<(char)16<<endl;
//			flag=false;
//		}
//		if	( GetAsyncKeyState(VK_UP) & 0x25 && (point.y>8))
//		{
//			gotoXY(point.x,point.y);
//			cout<<" "<<endl;
//			point.y--;
//			flag=true;
//		}
//		else if	( GetAsyncKeyState(VK_DOWN) & 0x25 && (point.y<12))
//		{
//			gotoXY(point.x,point.y);
//			cout<<" "<<endl;
//			point.y++;
//			flag=true;
//		}
//		if( GetAsyncKeyState(VK_RETURN) & 0x0D)
//		{
//			switch(point.y)
//			{
//			case 8:
//				if(mode==false)
//					{LEVEL();
//				LEVEL_view();}
//				go();
//				return;
//			case 9:
//				option();
//				return;
//			case 10:
//				break;
//			case 11:
//				help();
//				return;
//			case 12:
//				exit(1);
//				break;
//
//			}
//		}
//	}
//}
//
//int main() 
//{
//	//if(sound==0)
//	//PlaySound(TEXT("lool.wav"),NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
//	Interface();
//
//}
//
