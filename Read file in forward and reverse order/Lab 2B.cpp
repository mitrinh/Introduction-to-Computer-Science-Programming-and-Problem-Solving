//Michael Trinh 
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

//put prototypes of all functions here!
void inputfile(ifstream &in); //put this in the private section instead
void toarray(ifstream &in); //pass the ifstream object to this function in the parentheses!
void reverse(string myarray[34], int numused); //pass the array and numused to this function in the parentheses!
void forward(string myarray[34], int numused); //pass the array and numused to this function in the parentheses!

int main()
{
	ifstream in;
	inputfile(in);
	system("pause");
	return 0;
}

void inputfile(ifstream &in)
{
	string s;
	cout << "Enter filename: ";
	getline(cin, s);
	in.open(s.c_str());
	if (in.is_open()) //include an if/else statement: If the file is open, call the toarray function,
	{
		toarray(in);
	}
	else //otherwise display the message "File Not Found"
	{
		cout << "File Not Found" << endl;
	}
}

void toarray(ifstream &in)
{
	string line;
	int numused = 0; //tracks the number of lines in the array
	string myarray[34];//declare array of size 34
	while (getline(in, line))
	{
		if (in.fail())	//display a message "Unable To Read File
		{
			cout << "Unable To Read File" << endl;
		}
		else
		{
			myarray[numused] = line;
			numused++;
		}
		forward(myarray, numused); //call the forward function here        
	}
}

void reverse(string myarray[34], int numused)
{
	ofstream myfile("example.txt", ios::out | ios::app);
	if (myfile.is_open())
	{
		for (int i = numused - 1; i >= 0; --i) // write "backwards"
		{
			myfile << myarray[i] << endl;
		}
		myfile.close();
	}
	else //display message "Unable to Write to File"
	{
		cout << "Unable to Write to File" << endl;
	}
}

void forward(string myarray[34], int numused)
{
	ofstream myfile("example.txt");
	if (myfile.is_open())
	{
		for (int i = 0; i < numused; i++) // write "forwards" loop here using i as the array index
		{
			myfile << myarray[i] << endl;
		}
		myfile.close();
	}
	else
	{
		cout << "Unable to Write to File" << endl;	//display message "Unable to Write to File"
	}
	reverse(myarray, numused);//call reverse function
}