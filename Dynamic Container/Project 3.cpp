//Michael Trinh
//Running the program on small will take some time to load (1-2 min), running the program on medium will take even longer (2-5 min)
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class dynamic_container
{
	friend void initialize(dynamic_container dynamic_container); //set the array
private:
	int numused = 0;
	int numAllocated = 50;
	string *arr = new string[numAllocated];
	void doublecapacity(); //doubles the array capacity and sets the new parts of the array
public:
	dynamic_container(); //constructor
	~dynamic_container(); //destructor
	void add(); //a function to open the weblog.txt file and add a line from the file as a string to the private array.  
	int size(); //a function to return the total number of lines in the container.
	void lineNum(int index); //a function to display a line from the container when a line number is provided.  Note: This is the line number, which is the array's index number + 1.
	void lineSearch(string key); //a function to search the container for a specific search string, such as an ip address, and display all lines that contain that search string. 
};

dynamic_container::dynamic_container()
{

}

dynamic_container::~dynamic_container()
{

}

void initialize(dynamic_container dynamic_container)
{
	for (int i = 0; i < dynamic_container.numAllocated; i++)
	{
		dynamic_container.arr[i] = "0";
	}
}

void dynamic_container::doublecapacity()
{
	string *bigger = new string[numAllocated * 2];
	for (int i = 0; i < numAllocated; i++)
	{
		bigger[i] = arr[i];
	}
	delete[] arr;
	arr = bigger;
	numused = (numAllocated - 1);
	numAllocated *= 2;
	for (int i = (numAllocated/2); i < numAllocated; i++)
	{
		arr[i] = "0";
	}
}

void dynamic_container::add()
{
	ifstream myfile;
	myfile.open("weblog_small.txt");
	if (myfile.is_open())
	{
		for (int i = 0; i < numAllocated; i++)
		{
			size();
			if (numused == (numAllocated - 1))
			{
				doublecapacity();
			}
			getline(myfile, arr[i]);
		}
	}
	else
	{
		cout << "Cannot open file for writing" << endl;
	}
	myfile.close();
}

int dynamic_container::size()
{
	numused = 0;
	for (int i = 0; i < numAllocated; i++)
	{
		if (arr[i] != "0")
		{
			numused++;
		}
	}
	return numused;
}

void dynamic_container::lineNum(int index)
{
		cout << arr[index] << endl << endl;
}

void dynamic_container::lineSearch(string key)
{
	for (int i = 0; i < numAllocated; i++)
	{
		string str = arr[i];
		size_t found = str.find(key);
		if (found != string::npos)
		{
			lineNum(i);
		}
	}
}

int main()
{
	dynamic_container dynamic_container;
	initialize(dynamic_container);
	dynamic_container.add();
	dynamic_container.lineSearch("140.184.71.52"); //choose what keyword you would like to search
	system("pause");
	return 0;
}