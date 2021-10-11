#include <iostream>
using namespace std;

//prototypes
void DrawHangman();
void InvertHangMan();
void WalkMan();
char Play();
void line(int dashes);

int main()
{
	int dashes = 66;
	string answer;//declaring the varible for the play function
	cout << "\nWelcome to play HangMan. This game is to check your spelling skill." << endl;
	line(dashes);//calling function for lines void type
	cout << endl;
	DrawHangman();//calling function for Hangman void type
	cout << "\nGuess the missing letter in Yo_bee: ";
	answer = Play();//) calling function and Assign the return value of the function
}



void line(int dashes)//declaring function for line
{
	for (int i = 0; i < dashes; i++)
	{
		cout << "-";
	}
}

void DrawHangman()//declaring function
{
	cout << "   ___ " << endl;
	cout << "  |   |" << endl;
	cout << "  |   o" << endl;
	cout << "  |  \\|/" << endl;
	cout << "  |   |" << endl;
	cout << "  |  / \\" << endl;
	cout << "  |" << endl;
	cout << "  |" << endl;
	cout << "-----" << endl;
}

void InvertHangMan()//declaring function
{
	cout << "   ___ " << endl;
	cout << "  |   |" << endl;
	cout << "  |   " << endl;
	cout << "  |  \\ /" << endl;
	cout << "  |   |" << endl;
	cout << "  |  \\|/" << endl;
	cout << "  |   o" << endl;
	cout << "  |" << endl;
	cout << "-----" << endl;
}

void WalkMan()//declaring function
{
	cout << "     o" << endl;
	cout << "    \\|/" << endl;
	cout << "     |" << endl;
	cout << "    / \\" << endl;
}


char Play()//function for playing return type
{
	char guessLetter, realLetter;//declarung 2 varibles
	realLetter = 'o';
	for (int i = 0; i < 3; i++)//creating for loop in order for game not to stop after one guess
	{
		cin >> guessLetter;//asking user for input
		if (guessLetter == realLetter)//checking condition 
		{
			cout << "\nYour guess is correct!" << endl;
			WalkMan();//calling function for walkman(guess is correct)
			break;//esiting the loop 
		}
		else
		{
			if (i < 2)//there are two output for wrong guess. 1) Ask user to try again 2) end game after third wrong guess
			{
				cout << "\nSorry, Try again..." << endl;
			}
			else
			{
				cout << "\nYour guess is wrong" << endl;
				InvertHangMan();
			}
		}
	}
	return(guessLetter);//returning the value of the guess number
}s