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


void file()           //creates a file stores the data of game
{
quiz start[5];
strcpy(start[0].ques,"Super computer");

strcpy(start[0].opta,"Param");
strcpy(start[0].optb,"Wipro");
strcpy(start[0].optc,"Amul");
strcpy(start[0].optd,"Panda");
strcpy(start[0].coropt,"a");
start[0].quesno=1;

strcpy(start[1].ques," Which of the Following is false about the computer");

strcpy(start[1].opta," Very fast processing");
strcpy(start[1].optb," stores the data");
strcpy(start[1].optc," High IQ");
strcpy(start[1].optd," Versatile machine");
strcpy(start[1].coropt,"c");
start[1].quesno=2;

strcpy(start[2].ques,"Which is the smallest unit of memory");

strcpy(start[2].opta,"Kilobyte");
strcpy(start[2].optb,"Byte");
strcpy(start[2].optc,"Megabyte");
strcpy(start[2].optd,"Nibble");
strcpy(start[2].coropt,"b");
start[2].quesno=3;

strcpy(start[3].ques,"Which is not a type of computer");

strcpy(start[3].opta,"Analog");
strcpy(start[3].optb,"Digital");
strcpy(start[3].optc,"Hybrid");
strcpy(start[3].optd,"Olson");
strcpy(start[3].coropt,"d");
start[3].quesno=4;

strcpy(start[4].ques,"What is the full form of MB");

strcpy(start[4].opta,"Mega Byte");
strcpy(start[4].optb,"Meta Byte");
strcpy(start[4].optc,"Mica Byte");
strcpy(start[4].optd,"Mile Byte");
strcpy(start[4].coropt,"a");
start[4].quesno=5;

fstream f;
f.open("game.dat",ios::binary|ios::out|ios::app);
for(int i=0;i<5;i++)
{
f.write((char*)&start[i],sizeof(quiz));      //writing data to the file
}
f.close();
}


void wans()        // animation for wrong answers
{
clrscr();

for(int i=0;i<3;i++)
{
clrscr();
cout<<"Wrong Answer\n";
for(long s=1; s<=10000000;s++);
cout<<"                 ==                                       =="<<endl;
cout<<"                   ==                                   ==\n";
cout<<"                     ==                               ==\n";
cout<<"                       ==                           ==\n";
cout<<"                         ==                       ==\n";
cout<<"                           ==                   ==\n";
cout<<"                             ==               ==\n";
cout<<"                               ==           ==\n";
cout<<"                                 ==       ==\n";
cout<<"                                  ==    ==\n";
cout<<"                                    ====\n";
cout<<"                                  ==    ==\n";
cout<<"                                ==        ==\n";
cout<<"                              ==            ==\n";
cout<<"                            ==                ==\n";
cout<<"                          ==                    ==\n";
cout<<"                        ==                        ==\n";
cout<<"                      ==                            ==\n";
cout<<"                    ==                                ==\n";
cout<<"                  ==                                    ==\n";

for(long a=1; a<=10000000;a++);
clrscr();
cout<<"Wrong Answer\n";

cout<<"                 ==                                       =="<<endl;
cout<<"                   ==                                   ==\n";
cout<<"                     ==                               ==\n";
cout<<"                       ==                           ==\n";
cout<<"                         ==                       ==\n";
cout<<"                           ==                   ==\n";
cout<<"                             ==               ==\n";
cout<<"                               ==           ==\n";
cout<<"                                 ==       ==\n";
cout<<"                                  ==    ==\n";
cout<<"                                    ====\n";
cout<<"                                  ==    ==\n";
cout<<"                                ==        ==\n";
cout<<"                              ==            ==\n";
cout<<"                            ==                ==\n";
cout<<"                          ==                    ==\n";
cout<<"                        ==                        ==\n";
cout<<"                      ==                            ==\n";
cout<<"                    ==                                ==\n";
cout<<"                  ==                                    ==\n";
}
}


void credit()
{
clrscr();
int x,y,z,q,c,s;

for(x=1;x<=23;x++)
{
for(long a=1; a<=10000000;a++);
clrscr();
cout<<"\t\t\t MADE BY ::";
cout<<"\n                 --------------------------------------\n " ;
for(y=22;y>x;y--)
{cout<<endl;}
if(x==1||x==2)
cout<<"\t\t\t\tAnkush Rawat";
if(x==3||x==4)
cout<<"\t\t\t\tAnkush Rawat\n\n\t\t\t\tSagar Kalra";
if(x==5||x==6)
cout<<"\t\t\t\tAnkush Rawat\n\n\t\t\t\tSagar Kalra\n\n\t\t\t\tPrashant Sharma";
if(x>=7)
cout<<"\t\t\t\tAnkush Rawat\n\n\t\t\t\tSagar Kalra\n\n\t\t\t\tPrashant Sharma\n\n\t\t\t\tSiddarth";
cout<<"\n                 ---------------------------------------";
}
getch();
}


void exitanim()           //animation while exiting game
{
clrscr();

for(int i=0;i<5;i++)
{
cout<<"\n\n\n";
cout<<"                      ====="<<endl;
cout<<"                    ==      =="<<endl;
cout<<"                   ==  O   O == "<<endl;
cout<<"                   ==    u   ==    "<<endl;
cout<<"                    ==      ==               " <<endl;
cout<<"                       ====                       "<<endl;
cout<<"                        ==    "                   <<endl;
cout<<"                        ==    "                   <<endl;
cout<<"                    =============      \\|/      "<<endl;
cout<<"                   ==            ==     ==     "<<endl;
cout<<"                   ==            ==    ==      "<<endl;
cout<<"                   ==            ==   ==        "<<endl;
cout<<"                   ==            ==  ==         " <<endl;
cout<<"                   ==            == ==          "<<endl;
cout<<"                   ==             === ";
cout<<"\n\n\t\t\t\t\tThanks For Playing";
for(long s=1; s<=10000000;s++);
clrscr();
cout<<"\n\n\n";

cout<<"                      ====="<<endl;
cout<<"                    ==      =="<<endl;
cout<<"                   ==  O   O == "<<endl;
cout<<"                   ==    u   ==    "<<endl;
cout<<"                    ==      ==               " <<endl;
cout<<"                       ====                       "<<endl;
cout<<"                        ==    "                   <<endl;
cout<<"                        ==    "                   <<endl;
cout<<"                    =============   \\|/      "<<endl;
cout<<"                   ==            ==  ==     "<<endl;
cout<<"                   ==            ==  ==      "<<endl;
cout<<"                   ==            ==  ==        "<<endl;
cout<<"                   ==            ==  ==         " <<endl;
cout<<"                   ==            ==  ==          "<<endl;
cout<<"                   ==             === ";
cout<<"\n\n\t\t\t\t\tThanks For Playing";
for(long b=1; b<=10000000;b++);
clrscr();
cout<<"\n\n\n";

cout<<"                      ====="<<endl;
cout<<"                    ==      =="<<endl;
cout<<"                   ==  O   O == "<<endl;
cout<<"                   ==    u   ==    "<<endl;
cout<<"                    ==      ==               " <<endl;
cout<<"                       ====                       "<<endl;
cout<<"                        ==    "                   <<endl;
cout<<"                        ==    "                   <<endl;
cout<<"                    =============         \\|/      "<<endl;
cout<<"                   ==            ==        ==     "<<endl;
cout<<"                   ==            ==       ==      "<<endl;
cout<<"                   ==            ==      ==        "<<endl;
cout<<"                   ==            ==     ==         " <<endl;
cout<<"                   ==            ==   ==          "<<endl;
cout<<"                   ==             === ";
cout<<"\n\n\t\t\t\t\tThanks For Playing";
for(long h=1; h<=10000000;h++);
clrscr();

}


}



void animation1()               //welcome animation
{
clrscr();
for(int i=0;i<5;i++)
{
clrscr();

cout<<"\n\n\n\n\n";
cout<<"||            ||  ||=====   ||        ====      ====     ||\\  //||  ||======"<<endl;
cout<<" ||          ||   ||        ||      ==        ==    ==   || \\// ||  ||      "<<endl;
cout<<"  ||   ||   ||    ||====    ||      ==       ==      ==  ||     ||  ||====  "<<endl;
cout<<"   || |||| ||     ||        ||      ==        ==    ==   ||     ||  ||      "<<endl;
cout<<"    ||    ||      ||======  ||====    ====     =====     ||     ||  ||======"<<endl;
cout<<"\n\n\n \t\t\t\t\t\t\t  TO :- QUIZ COMPETITION";
for(long s=1; s<=20000000;s++);
clrscr();
cout<<"\n\n\n\n\n   \n\n\n\n\n";
cout<<"\n\n\n \t\t\t\t\t\t\t  TO :- QUIZ COMPETITION";
for(long a=1; a<=20000000;a++);
}
}

void animation()               //name animation
{
clrscr();
int x,y,p=73,z,q,c,s;
for(x=1;x<=25;x++)
{
for(long a=1; a<=10000000;a++);
clrscr();
cout<<"\t\t\t\t PROJECT leader :: ";
cout<<"\n\t\t\t===============================";

for(y=1;y<=x;y++)
{
cout<<endl;}
for(y=1;y<=x;y++)
{
cout<<"    ";}
cout<<"Ankush";
for(s=1;s<=p;s++)
{ cout<<"    ";  }
p=p-2;
cout<<"Rawat";
}
}


void user()
{
clrscr();
cout<<"\t\tWelcome to the quiz competition game ";
cout<<"\n\t=====================================================\n";
int sc=0,c,j=0,h=0;
char ch[90]={"\0"};
fstream f;
f.open("game.dat",ios::binary|ios::in);
quiz a;
while(f.read((char*)&a,sizeof(quiz)))
{



	if(strcmpi(a.ques,ch)==0) //for handlin error
	{
	break;
	}

	strcpy(ch,a.ques);
	char ans[9];
	cout<<"\t\t\t\t\t\t\t    (your score) = "<<sc<<endl;
	cout<<a.ques<<endl<<endl;
	cout<<"a:- "<<a.opta<<endl<<"b:- "<<a.optb<<endl;
	cout<<"c:- "<<a.optc<<endl<<"d:- "<<a.optd<<endl;
	cout<<"\n Your Option :- ";
	h++;

	cin>>ans;

	c=strcmpi(ans,a.coropt);
	if(c==0)
	{
	sc=sc+10;
	cout<<"\n correct Answer";
	getch();
	clrscr();
	}
	else
	{
	j++;
	wans();
	getch();
	clrscr();
	}
}
f.close();
for(int x=0;x<8;x++)
{
cout<<"\n\n\n\nNo. of question attempted = "<<h;
cout<<"\n\n\n No. of wrong answers = "<<j;
for(long d=1; d<=10000000;d++);
cout<<"\n\n\n\n\n \t\t\t YOUR  SCORE  :-  "<<sc;
for(long s=1; s<=10000000;s++);
clrscr();
} //close of animation
} //close of user

//to see ques


void see()

{
clrscr();
fstream f;
char ch[100];
f.open("game.dat",ios::binary|ios::in);
quiz a;
while(	f.read((char*)&a,sizeof(quiz)))
{

	cout<<"Question "<<a.quesno<<" :- "<<a.ques<<endl;
	cout<<"options:-\t1." <<a.opta<<"\t\t\t2."<<a.optb<<"\n\t\t3."<<a.optc<<"\t\t\t4."<<a.optd<<endl;
	cout<<"-------------------------------------------------------------------------------\n";

}
f.close();
getch();
}

void invalid()          // animation for invalid entry
{
clrscr();
for(int i=0;i<5;i++)
{
cout<<"\n\n\n\n\n\n\n";

cout<<"\t========   ==\\\\    ==  ==        ==   ====     ==    ========  ====   "<<endl;
cout<<"\t   =       == \\\\   ==   ==      ==  ==    ==   ==       ==     ==  == "<<endl;
cout<<"\t   =       ==  \\\\  ==    ==    ==   ========   ==       ==     ==   == "<<endl;
cout<<"\t   =       ==   \\\\ ==     ==  ==    ==    ==   ==       ==     ==   == "<<endl;
cout<<"\t========   ==    \\\\==      ====     ==    ==   =====  =======  ====== "<<endl;

for(long s=1; s<=20000000;s++);
clrscr();
for(long a=1; a<=20000000;a++);
}


}

void add()                    //fuction to add a question in quiz
{
quesno=0;
int x=1;
clrscr();
fstream f;
f.open("game.dat",ios::binary|ios::app);
quiz aa;
cout<<"\n\n\t\t\t TO ADD QUESTION INT THE QUIZ\n ";
cout<<"============================================================================\n\n\n";
cout<<"\n\n\nEnter the question\n:- ";
gets(aa.ques);
cout<<"Enter the option 1. ";
gets(aa.opta);
cout<<"Enter the option 2. ";
gets(aa.optb);
cout<<"Enter the option 3. ";
gets(aa.optc);
cout<<"Enter the option 4. ";
gets(aa.optd);
cout<<"Which option is correct:- ";
gets(aa.coropt);
count_ques();
quesno++;
aa.quesno=quesno;
if(aa.quesno>0)
{
f.write((char*)&aa,sizeof(aa));         //writing question in binary file
cout<<"Your Questions have been sucessfully added";
}
f.close();
getch();
}







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
