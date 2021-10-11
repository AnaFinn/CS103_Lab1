#include <iostream>
using namespace std;

void DrawHangman();
void InvertHangMan();
void WalkMan();
char Play();

int main()
{
	char realLetter = 'o';
	string answer;
	cout << "\nGuess the missing letter in Yo_bee: ";
	answer = Play();
}

void DrawHangman()
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

void InvertHangMan()
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

void WalkMan()
{
	cout << "     o" << endl;
	cout << "    \\|/" << endl;
	cout << "     |" << endl;
	cout << "    / \\" << endl;
}


char Play()
{
	char guessLetter, realLetter;
	realLetter = 'o';
	for (int i = 0; i < 3; i++)
	{
		cin >> guessLetter;
		if (guessLetter == realLetter)
		{
			cout << "\nYour guess is correct!" << endl;
			WalkMan();
			break;
		}
		else
		{
			if (i < 2)
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
	return(guessLetter);
}