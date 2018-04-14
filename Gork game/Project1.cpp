/* File name and purpose: Project 1/Gork */
/* Author: Michael Trinh */
/* Version: File created on 27 January 2016 on Visual Studio Express 2013 */
/* Attribution: N/A */

#include <iostream>
#include <iomanip>
using namespace std;

void welcome()
{
	cout << "Welcome to my text based game!" << endl;
	cout << "Copyright 2016" << endl;
	cout << "Created by Michael Trinh" << endl;
	cout << "\nYou are in charge of a team of researchers on the largest moon of planet Gork.\n"
		<< "One team member finds toxic mineral.\n"
		<< "The toxic material begins to corrode the oxygen tanks.\n"
		<< "Oxygen levels begin to drop." << endl << endl;
}

void setData()
{
	int option;
	double team0, team1, assist, tanks;
	cout << '\n' << "How many team members are in the initial team? ";
	cin >> team0;
	cout << '\n' << "What would you like to do ? (Type 1, 2, 3) : " << endl;
	cout << " 1. Make an emergency launch to return to base." << endl;
	cout << " 2. Secure the area with non-corrosive shielding from the lunar vehicles \n"
		 << " and request an emergency rescue for the number of team members \n" 
		 << " with corroded oxygen tanks." << endl;
	cout << " 3. Request emergency resupply of non-corrosive oxygen tanks from base." << endl;
	cin >> option;
	if (option == 1)
	{
		cout << "The toxic material has corroded the launch gear and the launch exploded." << endl;
	}
	else if (option == 2)
	{
		cout << "How many team members need to be evacuated? ";
		cin >> team1;
		tanks = team0 - team1;
		cout << "Make sure you have at least " << tanks << " working oxygen tanks!" << endl;
	}
	else if (option == 3)
	{
		cout << "How many requested team members do you need to assist the " << team0 << " team members? ";
		cin >> assist;
		tanks = assist + team0;
		cout << "Make sure you have at least " << tanks << " non-corrosive oxygen tanks!" << endl;
	}
	else
	{
		cout << "You have been eaten by a Grue." << endl;
	}
}

int main()
{
	welcome();
	setData();
	system("pause");
	return 0;
}