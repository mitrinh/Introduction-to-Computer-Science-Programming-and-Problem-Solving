#include <iostream>
using namespace std;

void compare_values(int &age, int &height)
{
	cout << "What is your age?\n";
	cin >> age;
	cout << "What is your height?\n";
	cin >> height;
	if (height == age)
	{
		cout << "Your height is equal to your age!\n";
	}
	else if (height < age)
	{
		cout << "Your height is less than your age!\n";
	}
	else if (height > age)
	{
		cout << "Your height is greater than your age!\n";
	}
	else
	{
		cout << "Something has gone seriously wrong here!\n";
	}
}

void how_old(int &age)
{
	if (age >= 10 && age <= 50)
	{
		if (age >= 10 && age <= 18)
		{
			cout << "You are a Teenager" << endl;
		}
		else
		{
			cout << "You are not a Teenager" << endl;
		}
	}
	else if (age < 10)
	{
		cout << "You are less than ten years" << endl;
	}
	else
	{
		cout << "You are more than 50 years" << endl;
	}
}
int main()
{
	int age, height;
	compare_values(age, height);
	how_old(age);
	system("pause");
}

