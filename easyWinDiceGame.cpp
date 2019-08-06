/*
Name: Ethan Thomas
CS& 131 Section: A
Program Name: Easy Win Dice Game
Description: This program runs the easy dice game. 
When the game starts, you will start with $20, 3 dice,
and it cost $1 for every roll. 
You must roll at least once before exiting the program.
When the dice are rolled, 
if you get all three dice to roll 1's then you will get $20, 
if all three dice are equal but not equal to 1 then you will recieve $10, 
and if any two dice are equal to each other than you win $2. 
*/

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib> 
using namespace std;


int main()
{
	int amount_money = 20.0;
	const int BIG_WIN = 20;
	const int MED_WIN = 10;
	const int SMALL_WIN = 2;
	
	char user_input = 'y';
	srand(static_cast<unsigned int>(time(0)));
	do
	{
		int die1 = (rand() % 6) + 1;
		int die2 = (rand() % 6) + 1;
		int die3 = (rand() % 6) + 1;
		/*int die1 = 0;
		int die2 = 0;
		int die3 = 0;

		cin >> die1;
		cin >> die2;
		cin >> die3;*/
		amount_money -= 1;
		
		
		if (die1 == 1 && die2 == 1 && die3 == 1)
		{
			amount_money += BIG_WIN;
			cout << "You rolled: " << die1 << "," << die2 << "," 
				 << die3 << endl;
			cout << "You won $" << BIG_WIN << "!" << endl;
			cout << "You currently have $" << amount_money 
				 << endl;

		}
		else if (die1 == 1 && die2 == 1 && die3 == 1)
		{
			amount_money += MED_WIN;
			cout << "You rolled: " << die1 << "," << die2 << "," 
				 << die3 << endl;
			cout << "You won $" << MED_WIN << "!" << endl;
		
		}
		else if (die1 == die2 || die2 == die3 || die3 == die1)
		{
			amount_money += SMALL_WIN;
			cout << "You rolled: " << die1 << "," << die2 << "," 
				 << die3 << endl;
			cout << "You won $" << SMALL_WIN << "!" << endl;
		
		}
		else
		{
			cout << "You rolled: " << die1 << "," << die2 << "," 
				 << die3 << endl;
			cout << "You did not win any money" << endl;
			
		}
		cout << "You currently have $" << amount_money
			<< endl;
		cout << "Do you want to play again? If YES then enter Y," 
			 << " if NO then enter N:";
		cin >> user_input;
		system("CLS");
	} while (amount_money >= 1 && tolower(user_input) == 'y');
	system("pause");

	return 0;
}
			
	
/*	TEST MODE:
	
	1
	1
	1
	You rolled : 1, 1, 1
	You won $20!
	You currently have $39
	Do you want to play again ? If YES then enter Y, if NO then enter N:

	2
	2
	2
	You rolled : 2, 2, 2
	You won $2!
	You currently have $40
	Do you want to play again ? If YES then enter Y, if NO then enter N:

	1
	2
	2
	You rolled : 1, 2, 2
	You won $2!
	You currently have $41
	Do you want to play again ? If YES then enter Y, if NO then enter N:

	2
	4
	2
	You rolled : 2, 4, 2
	You won $2!
	You currently have $42
	Do you want to play again ? If YES then enter Y, if NO then enter N:

	5
	5
	1
	You rolled : 5, 5, 1
	You won $10!
	You currently have $51
	Do you want to play again ? If YES then enter Y, if NO then enter N:

	1
	2
	3
	You rolled : 1, 2, 3
	You did not win any money
	You currently have $50
	Do you want to play again ? If YES then enter Y, if NO then enter N: */



    /*NORMAL OUTPUT:
	 
	  You rolled : 1, 1, 4
	  You won $2!
	  You currently have $21
	  Do you want to play again ? If YES then enter Y, if NO then enter N:

	  You rolled : 3, 4, 3
	  You won $2!
	  You currently have $22
	  Do you want to play again ? If YES then enter Y, if NO then enter N:

	  You rolled : 2, 1, 6
	  You did not win any money
	  You currently have $21
	  Do you want to play again ? If YES then enter Y, if NO then enter N:

	  You rolled : 3, 1, 4
	  You did not win any money
	  You currently have $20
	  Do you want to play again ? If YES then enter Y, if NO then enter N:

	  You rolled : 3, 5, 5
	  You won $2!
	  You currently have $21
	  Do you want to play again ? If YES then enter Y, if NO then enter N:

	  You rolled : 3, 5, 1
	  You did not win any money
	  You currently have $20
	  Do you want to play again ? If YES then enter Y, if NO then enter N:

	  You rolled : 5, 6, 6
	  You won $2!
	  You currently have $21
	  Do you want to play again ? If YES then enter Y, if NO then enter N:

	  You rolled : 2, 1, 2
	  You won $2!
	  You currently have $22
	  Do you want to play again ? If YES then enter Y, if NO then enter N:*/
	
	
