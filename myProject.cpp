//                 **********  Program for KBC game  **********
#include<iostream>
#include<conio.h>
#include<process.h>
#include<string>
#include<stdlib.h>               //for color
using namespace std;

class kbc
{
	public:
		char option;
		char y,c,l;
		int ch,life;
		string name;
		int Age,q;
		string place;
	void show();
	void enter();
	void input();
	void intro();
	void instraction();
	void game();
};
void kbc::show()
{
	cout<<"*********************************************************************"<<endl;
	cout<<"*                                                                   *"<<endl;
	cout<<"*                  ** WELCOME TO THE KBC GAME **                    *"<<endl;
	cout<<"*                 -------------------------------                   *"<<endl;
}
void kbc::enter()
{
    cout<<"press 1 to enter your details"<<endl;
    cin>>ch;
    system("cls");
}
void kbc::input()
{
    switch(ch)
    {
        case 1:
    	cout<<endl<<"Enter Your Name-"<<endl;
    	cin>>name;
    	cout<<"Enter Your Age-"<<endl;
    	cin>>Age;
    	cout<<"Place(you belong)-"<<endl;
    	cin>>place;
    	getch();
    	break;
	    default:
	    cout<<endl<<"you enter wrong digit and you are not able to continue"<<endl<<endl<<"*****  For play this game please run once again and select correct option this time Thankuu  ***** "<<endl;
	    exit(0);
    }
}
void kbc::intro()
{
	system("cls");
	cout<<"                      *********  WELCOME TO KAUN BANEGA CROREPATI  *********"<<endl;
	cout<<endl<<endl<<"Today we have a NEW PLAYER,here with us whose name is "<<name<<". He belongs to the place called "<<place<<".";
	cout<<endl<<endl<<"Let's start the game KAUN BANEGA CROREPATI"<<endl<<endl;
	getch();
}
void kbc::instraction()
{
	system("cls");
	cout<<"-----  RULES/INTRODUCTION  -----"<<endl<<endl;
	cout<<"*  There are total 10 Multiple choice questions."<<endl;
	cout<<"*  The 1st question is worth Rs.1,000"<<endl;
	cout<<"*  Q 10 is the JACKPOT question worth Rs 7 crore"<<endl<<endl;
	getch();
}
void kbc::game()
{
	system("cls");
	cout<<endl<<"****Lets Start To Play KBC****"<<endl<<"Best Of LUCK For Your Game"<<endl;
	cout<<endl<<"Q1 for Rs. 1,000 press y to show question"<<endl;
	cin>>y;
	if(y=='y')
	{
		system("cls");
		cout<<"Q1 Which of these is a board game which can normally be played by only two opponents at a time?"<<endl;
		cout<<"options are"<<endl;
		cout<<" [A] Snakes and ladders"<<"\t\t\t\t"<<"[B] Chess"<<endl;
		cout<<" [C] Ludo"<<"\t\t\t"<<"[D] Monopoly"<<endl<<endl;
		cout<<"######  IF YOU WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
		z:
		cin>>l;
		if(l=='L')
		{
		y:
			cout<<"[1]  50-50"<<endl;
			cout<<"[2]  AUDIANCE POLL"<<endl;
			cout<<"[3]  EXPERT ADVICE"<<endl<<endl;
			cout<<"Select which lifeline you want to apply"<<endl;
			cin>>life;
			if(life<=3 && life!=0)
			{
				switch(life)
				{
					case 1:
						cout<<"Q1 Which of these is a board game which can normally be played by only two opponents at a time?"<<endl;
						cout<<"Remaining options are"<<endl;
						cout<<"[A]      "<<"\t\t\t"<<"[B] Chess"<<endl;
		                cout<<"[C]      "<<"\t\t\t"<<"[D] Monopoly"<<endl<<endl;
		                cout<<"######  IF YOU {** AGAIN **} WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
		                goto z;
		                break;
					case 2:
					    cout<<endl<<endl<<"According to AUDIANCE POLL the BAR GRAPH is given as--"<<endl<<endl;
					    cout<<"Option A  ||||                               10%"<<endl;
					    cout<<"Option B  ||||||||||||||||||||||||           60%"<<endl;
					    cout<<"Option C  ||||                               10%"<<endl;
					    cout<<"Option D  ||||||||                           20%"<<endl;
					    cout<<"######  IF YOU {** AGAIN **} WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
		                goto z;
		                break;
		            case 3:
					    cout<<endl<<endl<<"^^^^^^^  According to EXPERT ADVICE the answer is definitely OPTION [B]  ^^^^^^^^"<<endl<<endl;
						cout<<"######  IF YOU {** AGAIN **} WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
		                goto z;
						break;
				}
			}
			else
			{
				cout<<endl<<"-*-*-  You are selecting wrong option. Please select correct option  -*-*-"<<endl;
				goto y;
			}
		}
		cout<<endl<<"Select your option"<<endl;
		cin>>option;
		if(option=='B')
		{
		    system("cls");
			cout<<endl<<"******  congratulation you won Rs.1,000  *****"<<endl;
			x:
			cout<<"press c to continue the game or press e to quit game"<<endl;
			cin>>c;
			if(c=='c')
			{
				system("cls");
				cout<<endl<<"Q2 for Rs. 10,000 press y to show question on your computer screen "<<endl;
				cin>>y;
	if(y=='y')
	{
		system("cls");
		cout<<"Q2 Where in India is this animal found in its natural habitat?"<<endl;
		cout<<"Options are"<<endl;
		cout<<"[A] Ranthambore National Park"<<"\t\t\t\t"<<"[B] Jim Corbett National Park"<<endl;
		cout<<"[C] Gir National Park"<<"\t\t\t\t"<<"[D] Bandipur National Park"<<endl<<endl;
		cout<<"######  IF YOU WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
	q:
		cin>>l;
		if(l=='L')
		{
		r:
			cout<<"[1]  50-50"<<endl;
			cout<<"[2]  AUDIANCE POLL"<<endl;
			cout<<"[3]  EXPERT ADVICE"<<endl<<endl;
			cout<<"Select which lifeline you want to apply"<<endl;
			cin>>life;
			if(life<=3 && life!=0)
			{
				switch(life)
				{
					case 1:
						cout<<"Q2 Where in India is this animal found in its natural habitat?"<<endl;
						cout<<"Remaining options are"<<endl;
						cout<<"[A]            "<<"\t\t\t\t"<<"[B]              "<<endl;
		                cout<<"[C] Gir National Park"<<"\t\t\t\t"<<"[D] Bandipur National Park"<<endl<<endl;
		                cout<<"######  IF YOU {** AGAIN **} WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
		                goto q;
		                break;
					case 2:
					    cout<<endl<<endl<<"According to AUDIANCE POLL the BAR GRAPH is given as--"<<endl<<endl;
					    cout<<"Option A  ||||                               10%"<<endl;
					    cout<<"Option B                                      0%"<<endl;
					    cout<<"Option C  ||||||||||||||||||||||||||||       70%"<<endl;
					    cout<<"Option D  ||||||||                           20%"<<endl;
					    cout<<"######  IF YOU {** AGAIN **} WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
		                goto q;
		                break;
		            case 3:
					    cout<<endl<<endl<<"^^^^^^^  According to EXPERT ADVICE the answer is definitely OPTION [C]  ^^^^^^^^"<<endl<<endl;
						cout<<"######  IF YOU {** AGAIN **} WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
		                goto q;
						break;
				}
			}
			else
			{
				cout<<endl<<"-*-*-  You are selecting wrong option so,please select correct option  -*-*-"<<endl;
				goto r;
			}
		}
		cout<<endl<<"Select your option"<<endl;
		cin>>option;
		if(option=='C')
		{
			system("cls");
			cout<<endl<<"******  congratulation you won Rs.10,000  *****"<<endl;
			s:
			cout<<"press c to continue the game or press e to quit game"<<endl;
			cin>>c;
			if(c=='c')
			{
				system("cls");
				cout<<endl<<"Q3 for ****Rs. 1,00,000 (* 1st stage of game *)  press y to show question on your computer screen "<<endl;
				cin>>y;
	if(y=='y')
	{
		system("cls");
		cout<<"Q3 Which of the following is not an example of operating system-"<<endl;
		cout<<"options are"<<endl;
		cout<<"A  Microsoft office"<<"\t\t\t"<<"B  Windows vista"<<endl;
		cout<<"C  Unix"<<"\t\t\t\t"<<"D  Ubuntu Linux"<<endl<<endl;
		cout<<"######  IF YOU WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
	t:
		cin>>l;
		if(l=='L')
		{
		u:
			cout<<"[1]  50-50"<<endl;
			cout<<"[2]  AUDIANCE POLL"<<endl;
			cout<<"[3]  EXPERT ADVICE"<<endl<<endl;
			cout<<"Select which lifeline you want to apply"<<endl;
			cin>>life;
			if(life<=3 && life!=0)
			{
				switch(life)
				{
					case 1:
						cout<<"Q3 Which of the following is not an example of operating system-"<<endl;
						cout<<"Remaining options are"<<endl;
						cout<<"A  Microsoft office"<<"\t\t\t"<<"B               "<<endl;
		                cout<<"C      "<<"\t\t\t\t"<<"D  Ubuntu Linux"<<endl<<endl;
		                cout<<"######  IF YOU {** AGAIN **} WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
		                goto t;
		                break;
					case 2:
					    cout<<endl<<endl<<"According to AUDIANCE POLL the BAR GRAPH is given as--"<<endl<<endl;
					    cout<<"Option A  ||||||||||||||||||||||||||||       70%"<<endl;
					    cout<<"Option B  ||||                               10%"<<endl;
					    cout<<"Option C                                      0%"<<endl;
					    cout<<"Option D  ||||||||                           20%"<<endl;
					    cout<<"######  IF YOU {** AGAIN **} WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
		                goto t;
		                break;
		            case 3:
					    cout<<endl<<endl<<"^^^^^^^  According to EXPERT ADVICE the answer is definitely OPTION A  ^^^^^^^^"<<endl<<endl;
						cout<<"######  IF YOU {** AGAIN **} WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
		                goto t;
						break;
				}
			}
			else
			{
				cout<<endl<<"-*-*-  You are selecting wrong option so,please select correct option  -*-*-"<<endl;
				goto u;
			}
		}
		cout<<endl<<"select your option"<<endl;
		cin>>option;
		if(option=='A')
		{
			system("cls");
			cout<<endl<<"******  congratulation you won Rs.1,00,000  *****"<<endl;
			v:
			cout<<"press c to continue the game or press e to quit game"<<endl;
			cin>>c;
			if(c=='c')
			{
				system("cls");
				cout<<endl<<"Q4 for Rs. 10,00,000  press y to show question on your computer screen "<<endl;
				cin>>y;
	if(y=='y')
	{
		system("cls");
		cout<<"Q4 Who is the author of 'Manas Ka-Hans'?"<<endl;
		cout<<"options are"<<endl;
		cout<<"[A]  Khushwant Singh"<<"\t\t\t\t"<<"[B]  Prem Chand"<<endl;
		cout<<"[C]  Jayashankar Prasad"<<"\t\t\t"<<"[D]  Amrit Lal Nagar"<<endl<<endl;
		cout<<"######  IF YOU WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
	t1:
		cin>>l;
		if(l=='L')
		{
		u1:
			cout<<"[1]  50-50"<<endl;
			cout<<"[2]  AUDIANCE POLL"<<endl;
			cout<<"[3]  EXPERT ADVICE"<<endl<<endl;
			cout<<"Select which lifeline you want to apply"<<endl;
			cin>>life;
			if(life<=3 && life!=0)
			{
				switch(life)
				{
					case 1:
						cout<<"Q4 Who is the author of 'Manas Ka-Hans'?"<<endl;
						cout<<"Remaining options are"<<endl;
					    cout<<"[A]        "<<"\t\t\t\t"<<"[B]  Prem Chand"<<endl;
                		cout<<"[C]             "<<"\t\t\t"<<"[D]  Amrit Lal Nagar"<<endl<<endl;
				        cout<<"######  IF YOU {** AGAIN **} WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
		                goto t1;
		                break;
					case 2:
					    cout<<endl<<endl<<"According to AUDIANCE POLL the BAR GRAPH is given as--"<<endl<<endl;
					    cout<<"Option A  ||||||||                           20%"<<endl;
					    cout<<"Option B  ||||                               10%"<<endl;
					    cout<<"Option C  ||||||||                           20%"<<endl;
					    cout<<"Option D  |||||||||||||||||||                50%"<<endl;
					    cout<<"######  IF YOU {** AGAIN **} WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
		                goto t1;
		                break;
		            case 3:
					    cout<<endl<<endl<<"^^^^^^^  According to EXPERT ADVICE the answer is may be OPTION D  ^^^^^^^^"<<endl<<endl;
						cout<<"######  IF YOU {** AGAIN **} WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
		                goto t1;
						break;
				}
			}
			else
			{
				cout<<endl<<"-*-*-  You are selecting wrong option so,please select correct option  -*-*-"<<endl;
				goto u1;
			}
		}
		cout<<endl<<"select your option"<<endl;
		cin>>option;
		if(option=='D')
		{
			system("cls");
			cout<<endl<<"******  congratulation you won Rs.10,00,000  *****"<<endl;
			v1:
			cout<<"press c to continue the game or press e to quit game"<<endl;
			cin>>c;
			if(c=='c')
			{
				system("cls");
				cout<<endl<<"Q5 for Rs. 25,00,000  press y to show question on your computer screen "<<endl;

			}
			else
			{
				cout<<"Are You sure you want to quit your game"<<endl;
				cout<<"[1] Yes"<<endl<<"[2] No,I want to continue"<<endl<<endl;
				cin>>q;
				if(q==1)
				{
					system("cls");
					cout<<endl<<"You won Rs.10,00,000"<<endl;
					cout<<"********Thanks for Playing the game***********";
				}
				else
				goto x;
			}
		}
		else
		{
			cout<<endl<<"oops! you are giving wrong answer"<<endl<<"-------->Correct answer is option D"<<endl<<endl;
			getch();
			cout<<"----  Sorry you are not able to continue this game ----  "<<endl<<endl;
			cout<<"$$$$$  Rs.1,00,000  $$$$$"<<endl<<"****  BETTER LUCK NEXT TIME  ****"<<endl;
		}
	}

			}
			else
			{
				cout<<"Are You sure you want to quit your game"<<endl;
				cout<<"[1] Yes"<<endl<<"[2] No,I want to continue"<<endl<<endl;
				cin>>q;
				if(q==1)
				{
					system("cls");
					cout<<endl<<"You won Rs.1,00,000"<<endl;
					cout<<"********Thanks for Playing the game***********";
				}
				else
				goto x;
			}
		}
		else
		{
			cout<<endl<<"oops! you are giving wrong answer"<<endl<<"-------->Correct answer is option A"<<endl<<endl;
			getch();
			cout<<"----  Sorry you are not able to continue this game ----  "<<endl<<endl;
			cout<<"$$$$$  Rs.0,000  $$$$$"<<endl<<"****  BETTER LUCK NEXT TIME  ****"<<endl;
		}
	}

			}
			else
			{
				cout<<"Are You sure you want to quit your game"<<endl;
				cout<<"[1] Yes"<<endl<<"[2] No,I want to continue"<<endl<<endl;
				cin>>q;
				if(q==1)
				{
					system("cls");
					cout<<endl<<"You won Rs.10,000"<<endl;
					cout<<"********Thanks for Playing the game***********";
				}
				else
				goto x;
			}
		}
		else
		{
			cout<<endl<<"oops! you are giving wrong answer"<<endl<<"-------->Correct answer is option C"<<endl<<endl;
			getch();
			cout<<"----  Sorry you are not able to continue this game ----  "<<endl<<endl;
			cout<<"$$$$$  Rs.0,000  $$$$$"<<endl<<"****  BETTER LUCK NEXT TIME  ****"<<endl;
		}
	}

			}
			else
			{
				cout<<"Are You sure you want to quit your game"<<endl;
				cout<<"[1] Yes"<<endl<<"[2] No,I want to continue"<<endl<<endl;
				cin>>q;
				if(q==1)
				{
					system("cls");
					cout<<endl<<"You won Rs.1,000"<<endl;
					cout<<"********Thanks for Playing the game***********";
				}
				else
				goto v1;
			}
	 }
		else
		{
			cout<<endl<<"oops! you are giving wrong answer"<<endl<<"-------->Correct answer is option B"<<endl<<endl;
			getch();
			cout<<"----  Sorry you are not able to continue this game ----  "<<endl<<endl;
			cout<<"$$$$$  Rs.0  $$$$$"<<endl<<"****  BETTER LUCK NEXT TIME  ****"<<endl;
		}
	}
		else
		{
			cout<<endl<<"oops! you select the wrong option"<<endl<<endl;
			cout<<"----  Sorry you are not able to continue this game  ----  "<<endl;
		}
}
main()
{
	system ("Color DE");
	kbc o;
	o.show();
	o.enter();
	o.input();
	o.intro();
	o.instraction();
	o.game();
}

