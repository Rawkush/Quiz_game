#include<process.h>
#include<fstream.h>
#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>


char admin[]={"kvs"};
char password[]={"123"};
int quesno=0;

struct quiz
{
char ques[100];
char opta[90];
char optb[90];
char optc[90];
char optd[90];
char coropt[99];
int quesno;
};


	void main()
	{
	animation1();
	clrscr();

	char name[99];

	char pass[5];
	int y,c,a;

	cout<<"\t\tWelcome to Quiz Competition Game";
	cout<<"\n\t=================================================\n\n\n";
	cout<<"\t\t Enter your choice ::\n";
	cout<<"\t\t-------------------";
	 cout<<"\n\n\n  1. Administrator \t\t 2. User\n\n\n\n Your choice :-  ";

	cin>>y;
	if(y!=1&&y!=2)              //if wrong choice
	{
	invalid();
	cout<<"  Invalid Choice";
	getch();
	exit(0);
	}
	else
	{
	fstream f;
	f.open("game.dat",ios::in|ios::binary);
	if(!f)     //if file not present creates a file
	{
	file();
	}


	if(y==2) //for user
	{
	user();
	exitanim();
	animation();
	credit();
	exit(0);
	}
	//for Administrator rights

	if(y==1)
	{
	clrscr();
	cout<<"Enter Your Username:- ";
	gets(name);
	cout<<"\nEnter your 3 digit password:- ";
	for(int qq=0;qq<=2;qq++)
	{
	clrscr();
	cout<<"Enter Your Username:- "<<name;
	cout<<"\n\nEnter your 3 digit password:- ";
	for(int rr=0;rr<qq;rr++)
       {	cout<<"*";

	 }
	pass[qq]=getch(); ;

	}
	cout<<"*";
	getch();

	c=strcmpi(name,admin);

		if(c==0&&strcmpi(pass,password)==0)   //admin login check
		{
		clrscr();
		cout<<"\t\t\t\t  ACCESS GRANTED\n";
		cout<<"\t\t\t========================================= \n\n";
		point:
		cout<<"\n";
		cout<<"\n 1. Add question in the quiz";
		cout<<"\n\n 2. Edit questions in the quiz";
		cout<<"\n\n 3. Delete question from the quiz";
		cout<<"\n\n 4. See all Questions";
		cout<<"\n\n 5. Play Quiz";
		cout<<"\n\n 6. Credit";
		cout<<"\n\n 7. EXIT \n\n";
		cout<<"\nEnter Your Choice:= ";
		cin>>a;
		//function according to choice
		if(a==1)
		{
		add();  //to add ques
		clrscr();
		goto point;
		}
		if(a==2)
		{
		edit(); //to edit a ques
		clrscr();
		goto point;
		}
		if(a==3)
		{
		del();   //to del a ques
		clrscr();
		goto point;
		}
		if(a==4)
		{
		see();    //to see all ques
		clrscr();
		goto point;
		}
		if(a==5)
		{
		user();    //to play
		clrscr();
		goto point;
		}
		if(a==6)
		{
		credit();
		clrscr();
		goto point;
		}
		if(a==7)   //exit the game
		{
		exitanim();
		animation();
		credit();
		exit(0);
		}


		}

		//for wrong input such as user name password
		if((c!=0)||(strcmpi(pass,password)) )
		{
		invalid();
		cout<<"INVALID ";
		getch();
		exit(0);
		}


	}//y==1 ends here



	}       //else bracket is closed here


}//mains bracket
