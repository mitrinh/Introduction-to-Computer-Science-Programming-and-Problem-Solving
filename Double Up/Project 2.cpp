//Michael Trinh
#include <iostream>
using namespace std;

class Double_Up
{
  private:
	  int num;
	  int total = 0;
  public:
	  void mutate();
	  void calculate();
	  void accessor();
};

void Double_Up::mutate()
{
	cout << "Enter a number EQUAL to or LESS than 20: ";
	cin >> num;		
	if (num > 20)
	{
		while (num > 20)
		{
			cout << "ERROR: You typed a number GREATER than 20." << endl << endl;
			cout << "Enter a number EQUAL to or LESS than 20: ";
			cin >> num;
		}
	}
}

void Double_Up::calculate()
{
	for (int i = 1; i <= num; i++)
	{
		int temp;
		temp = i * 2;
		total += temp;
		cout << "Double up " << i << " = " << temp << endl;
	}
}

void Double_Up::accessor()
{
	cout << "Total = " << total << endl;
}

int main()
{
	Double_Up doubl;
	doubl.mutate();
	doubl.calculate();
	doubl.accessor();
	system("pause");
	return 0;
}