#include<iostream>
#include<string>
#include<stdlib.h>
#include<time.h>
using namespace std;
int P1(int **table, string N1)
{
	string x;        //x and y just for waste value by user
	int a, S1;
	cout<<"\n \n      Its the turn of "<<N1;
	cout<<endl<<endl;
	cout<<" Enter any key for rolling the dice = ";
	cin>>x;
	a = (rand()+time(0))%6+1;           // random number
	system("CLS");
	cout<<"\n \t\t Player ( "<<N1<<" ) Move \n\n";
	cout<<" Your dice is rolling . . . . . . ."<<endl;
	cout<<" The Number of dice is = "<<a<<endl;
	S1+=a;
	if (S1==6)         //Lader
	{
		S1+=19;
		cout<<"\n It was a LADDER !!";
	}
	else if (S1==27)   //Lader
	{
		S1+=31;
		cout<<"\n It was a LADDER !!";
	}
	else if (S1==65)   //Snake
	{
		S1-=21;
		cout<<"\n It was a SNAKE !!";
	}
	else if (S1==72)  //Lader
	{
		S1+=21;
		cout<<"\n It was a LADDER !!";
	}
	else if (S1==97)  //Snake
	{
		S1-=20;
		cout<<"\n It was a SNAKE !!";
	}
	cout<<endl<<endl;
	for(int i=0; i<10; i++)  //  Game Display after rounds
	{
		for(int j=0; j<10; j++)
		{
			
			if (table[i][j]==97)
			{
				cout<<table[i][j]<<" S"<<" | ";
			}
			else if(table[i][j]==72)
			{
				cout<<table[i][j]<<" L"<<" | ";
			}
			else if(table[i][j]==65)
			{
				cout<<table[i][j]<<" S"<<" | ";
			}
			else if(table[i][j]==27)
			{
				cout<<table[i][j]<<" L"<<" | ";
			}
			else if(table[i][j]==6)
			{
				cout<<table[i][j]<<" L"<<" | ";
			}
			else if (table[i][j]==S1)
			{
				cout<<S1<<" ($)"<<" | ";
			}
			else
			{
				cout<<table[i][j]<<" | ";
			}
			
		}
	cout<<endl;	
	}
	return S1;
}
	
	
	
	
	
	
int P2(int **table, string N2)
{
	string  y;        //x and y just for waste value by user
	int b, S2;
	cout<<"\n \n    NOW Its the turn of "<<N2;
	cout<<endl<<endl;
	cout<<" Enter any key for rolling the dice = ";
	cin>>y;
	b = (rand()+time(0))%6+1;           // random number
	system("CLS");
	cout<<"\n \t\t Player ( "<<N2<<" ) Move \n\n"; 
	cout<<" Your dice is rolling . . . . . . ."<<endl;
	cout<<" The Number of dice is = "<<b<<endl;
	S2+=b;
	if (S2==6)         //Lader
	{
		S2+=19;
		cout<<"\n It was a LADDER !!";
	}
	else if (S2==27)   //Lader
	{
		S2+=31;
		cout<<"\n It was a LADDER !!";
	}
	else if (S2==65)   //Snake
	{
		S2-=21;
		cout<<"\n It was a SNAKE !!";
	}
	else if (S2==72)  //Lader
	{
		S2+=21;
		cout<<"\n It was a LADDER !!";
	}
	else if (S2==97)  //Snake
	{
		S2-=20;
		cout<<"\n It was a SNAKE !!";
	}
	cout<<endl<<endl;
	for(int i=0; i<10; i++)  //  Game Display after rounds
	{
		for(int j=0; j<10; j++)
		{
			
			if (table[i][j]==97)
			{
				cout<<table[i][j]<<" S"<<" | ";
			}
			else if(table[i][j]==72)
			{
				cout<<table[i][j]<<" L"<<" | ";
			}
			else if(table[i][j]==65)
			{
				cout<<table[i][j]<<" S"<<" | ";
			}
			else if(table[i][j]==27)
			{
				cout<<table[i][j]<<" L"<<" | ";
			}
			else if(table[i][j]==6)
			{
				cout<<table[i][j]<<" L"<<" | ";
			}
			else if (table[i][j]==S2)
			{
				cout<<S2<<" (#)"<<" | ";
			}
			else
			{
				cout<<table[i][j]<<" | ";
			}
			
		}
	cout<<endl;	
	}
	return S2;
}


int main()
{
	
	string N1, N2;
	int **table, k=100,Q,R;
	table=new int*[10];
	cout<<"\n\t\t***********************************************************\n\n";
	cout<<"\t\t\tWelcome to the Snake and ladder Game......  Player 1 = ($) \n\t\t\t\t\t\t\t\t    Player 2 = (#)\n\n";
	cout<<"\t\t***********************************************************\n\n";
	cout<<"  Enter the name of First Player = ";
	cin>>N1;
	cout<<endl;
	cout<<"  Enter the name of Second Player = ";
	cin>>N2;
	cout<<endl<<endl;
	for (int i=0; i<10; i++)  // Dynamic Memory allocation
	{
		table[i]=new int[10];
	}
	for(int i=0; i<10; i++)   //  storing values in dynamic memory according to game
	{
		for(int j=0; j<10; j++)
		{
			table[i][j]=k;
			k--;
		
		}
	}
	for(int i=0; i<10; i++)  //  First Display of game
	{
		for(int j=0; j<10; j++)
		{
			if (table[i][j]==97)
			{
				cout<<table[i][j]<<" S"<<" | ";
			}
			else if(table[i][j]==72)
			{
				cout<<table[i][j]<<" L"<<" | ";
			}
			else if(table[i][j]==65)
			{
				cout<<table[i][j]<<" S"<<" | ";
			}
			else if(table[i][j]==27)
			{
				cout<<table[i][j]<<" L"<<" | ";
			}
			else if(table[i][j]==6)
			{
				cout<<table[i][j]<<" L"<<" | ";
			}
			else
			{
				cout<<table[i][j]<<" | ";
			}
			
		}
	cout<<endl;	
	}

	
		REPEAT:                       //condition checking untill winning.
		Q = P1(table, N1);
		R = P2(table, N2);
		if (Q<=100 || R<=100)
		{
			goto REPEAT;
		}
		if(Q>=100)                   //condition checking, who is winner.
		{
			cout<<"\n**********************************************************************\n\n";
			cout<<"\t\tCONGRATULATIONS "<<N1<<" you WON !!"<<endl<<endl;
			cout<<"\t\tBETTER LUCK. TRY AGAIN "<<N2<<" you LOST !!";
			cout<<"\n\n**********************************************************************\n\n";
		}
		else
		{
			cout<<"\n**********************************************************************\n\n";
			cout<<"\t\tCONGRATULATIONS "<<N2<<" you WON !!";
			cout<<"\t\tBETTER LUCK. TRY AGAIN "<<N1<<" you LOST !!";
			cout<<"\n\n**********************************************************************\n\n";
		}
		return 0;
}
