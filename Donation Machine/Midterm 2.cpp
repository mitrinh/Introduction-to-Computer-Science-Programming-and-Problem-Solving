//Michael Trinh
#include <iostream>
using namespace std;

class Donate
{
private:
	int donation[999];
	int size = 0;
public:
	int total = 0;
	int average = 0;
	void gather();
	void calculate_total();
	void calculate_average();
	friend void display();
};

void Donate::gather()
{
	for (int i = 0; i < 999; i++)
	{
		cout << "How much would you like to donate?" << " (Enter -1 if you are finished)" << endl;
		cin >> donation[i];
		if (donation[i] == -1)
		{
			break;
		}
		while (donation[i] > 2500)
		{
				cout << "You have donated over the limit for an individual donation and your money has been refunded." << endl;
				cout << "How much would you like to donate?" << " (Enter -1 if you are finished)" << endl;
				cin >> donation[i];
				if (donation[i] == -1)
				{
					break;
				}
		}
		size++;//determines size of array
	}
}

void Donate::calculate_total()
{
	for (int i = 0; i < size; i++)
	{
		total += donation[i];
	}
	cout << "The total of all donations is $" << total << endl;
}

void Donate::calculate_average()
{
	average = total / size;	
	cout << "The average donation amount is $" << average << endl;
}

void display()
{
	Donate donate;
	donate.gather();
	donate.calculate_total();
	donate.calculate_average();	
}

int main()
{
	display();
	system("pause");
	return 0;
}