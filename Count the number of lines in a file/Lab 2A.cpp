//Michael Trinh
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

void file(ifstream &in)
{
	while (true)
	{
		cout << "Enter filename: ";
		string s;
		getline(cin, s);
		in.open(s.c_str());
		if (!in.fail())
		{
			break;
		}
		cout << "Couldn't open file, try again!" << endl;
		in.clear();
	}
}
int CountLines(ifstream &in)
{
	int count = 0;
	string line;
	while (getline(in, line))//..loop condition goes here...
	{
		if (in.fail())
		{
			break;
		}
		count++;
	}
	return count;
}

int main()
{
	ifstream in;
	file(in);
	cout << "Num lines = " << CountLines(in) << endl;
	system("pause");
	return 0;
}

