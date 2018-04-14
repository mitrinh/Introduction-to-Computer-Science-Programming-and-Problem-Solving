#include <iostream>
using namespace std;

void compare_values(int &smallest, int &middle, int &largest)
{
	//declare local variables
	int val1, val2, val3;
	//get values
	cout << "Enter val1: ";
	cin >> val1;
	cout << "Enter val2: ";
	cin >> val2;
	cout << "Enter val3: ";
	cin >> val3;
	//compare values
	if (val1 <= val2 && val1 <= val3)
	{ // && means and
		smallest = val1;
		if (val2 <= val3)
		{
			middle = val2;
			largest = val3;
		}
		else
		{
			middle = val3;
			largest = val2;
		}
	}
	else if (val2 <= val1 && val2 <= val3)
	{
		//follow the logic above
		//set smallest equal to the smallest value
		//compare remaining two variables
		//set middle to the smallest of these
		//set largest to the largest of these
		//be careful of open and closed curly braces
		smallest = val2;
		if (val1 <= val3)
		{
			middle = val1;
			largest = val3;
		}
		else
		{
			middle = val3;
			largest = val1;
		}
	}
	else
	{  // since neither val1 nor val2 was smaller than val3, val3 must be the smallest
		smallest = val3;
		if (val1 <= val2)
		{
			middle = val1;
			largest = val2;
		}
		else
		{
			middle = val2;
			largest = val1;
		}
	}
}
	
void display_values(int &smallest, int &middle, int &largest)
	{
		cout << smallest << ", " << middle << ", " << largest << endl; //Display the values in numerical sequence separated by commas
	}

	int main()
	{
		int val1, val2, val3, smallest, middle, largest;
		compare_values(smallest, middle, largest);
		display_values(smallest, middle, largest);
		system ("pause");
		return 0;
	}