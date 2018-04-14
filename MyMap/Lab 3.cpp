//Michael Trinh
#include <string>
#include <iostream>
using namespace std;

class pairT
{
public:
	string key;
	int val;
};

class MyMap
{
private:
	int size;
	int numused;
	pairT entries[100];
	int MyMap::findIndexForKey(string key);
public:
	MyMap::MyMap();
	int MyMap::getValue(string key);
	void MyMap::add(string key, int val);
	void report(string key);
};

MyMap::MyMap()
{
	size = 100;
	numused = 0;
}

int MyMap::findIndexForKey(string key)
{
	for (int i = 0; i < size; i++)
	{
		if (entries[i].key == key)
			return i;
	}
	return -1;
}

int MyMap::getValue(string key)
{
	int found = findIndexForKey(key);	
	if (found != -1)
	{ 
		return entries[found].val;
	}
	else if (found = -1)
	{
		cout << "The key is not found." << endl; //Display a message if the key is not found
	}
}

void MyMap::add(string key, int val)
{
	pairT p;
	int found = findIndexForKey(key);
	if (found != -1) 
	{
		entries[found].val = val;
	}
	else
	{
		p.key = key;
		p.val = val;
		entries[numused] = p;
		numused++;
	}
}

void MyMap::report(string key)
{
	for (int i = 0; i < size; i++)
	{
			cout << key[i] << endl;
	}
}

int main()
{
	MyMap call;
	call.getValue("example");
	call.add("example", 5);
	call.report("example");
	system("example");
	return 0;
}