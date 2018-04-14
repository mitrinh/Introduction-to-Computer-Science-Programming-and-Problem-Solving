#include <iostream>
#include <string> 
using namespace std;

void get_values(int &val1, int &val2)
{
	cout << "Enter num1: ";
	cin >> val1;
	cout << "Enter num2: ";
	cin >> val2;
}

void compare_values(int &val1, int &val2)
{
	if (val1<val2)
	{
		cout << val1 << " is smallest\n";
	}
	if (val1>val2)
	{
		cout << val2 << " is smallest\n";	//write a statement to test if val2 is smallest and display the result
	}
	if (val1 == val2)
	{
		cout << val1 << " and " << val2 << " are equal\n";//write a statement to test if val1 and val2 are equal and display the result
	}
	if (val1<0)
	{
		cout << val1 << " is negative\n";//write a statement to test if val1 is negative (less than zero)
	}
	cout << "difference (val1-val2) : " << val1 - val2 << '\n';
	if (val2 != 0)
	{
		cout << "remainder (val1%val2) : " << val1%val2 << '\n';
	}
	cout << "square(val1) : " << val1*val1 << '\n';
}

void EvenOdd()
{
	int val = 0;
	cout << "Testing for odd or even...";
	cout << "Please enter an integer: ";
	cin >> val;
	string res="even"; //set a default value
	if (val % 2!=0)
	{
		res = "odd";// a number is even if it is 0 modulo 2 and odd otherwise
	}
	cout << "The value " << val << " is an " << res << " number\n";
}

int main()
{
	int val1, val2;
	get_values(val1, val2);
	compare_values(val1, val2);
	EvenOdd();
	system("pause");
	return 0;
}


