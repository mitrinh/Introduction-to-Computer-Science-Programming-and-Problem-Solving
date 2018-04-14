#include <iostream>
using namespace std;

void playgame()
{
	cout << "Play game called\n";
}

void loadgame()
{
	cout << "Load game called\n";
}

void playmultiplayer()
{
	cout << "Play multiplayer game called\n";
}

void setData(int &input)
{
	cout << "1. Play game\n";
	cout << "2. Load game\n";
	cout << "3. Play multiplayer\n";
	cout << "4. Exit\n";
	cout << "Selection: ";
	cin >> input;
}


void getFunction(int &input)
{
/*		if (input == 1)
			playgame();
		else if (input == 2)
			loadgame();
		else if (input == 3)
			playmultiplayer();
		else if (input == 4)
			cout << "Thank you for playing!\n";
		else
			cout << "Error, bad input, quitting\n";
*/
}

void switchFunction(int &input)
{
	switch (input)
	{
	case 1:            // Note the colon, not a semicolon
		playgame();
		break;
	case 2:            // Note the colon, not a semicolon
		loadgame();
		break;
	case 3:            // Note the colon, not a semicolon
		playmultiplayer();
		break;
	case 4:            // Note the colon, not a semicolon
		cout << "Thank you for playing!\n";
		break;
	default:            // Note the colon, not a semicolon
		cout << "Error, bad input, quitting\n";
		break;
	}
}

int main()
{
	int input;
	setData(input);
	switchFunction(input);
	system("pause");
	return 0;
}