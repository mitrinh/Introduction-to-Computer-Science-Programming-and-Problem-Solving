//Michael Trinh
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class products
{
private:
	int sales[10] = {5, 20, 15, 35, 2, 1, 9, 65, 34, 55}; //"error C2536:cannot specify explicit initializer for arrays" VS2013 bug)
	int totalsales = 0;
public:
	void inputSales();
	void listSales();
};

void products::inputSales()
{
	for (int i = 0; i < 10; i++)
	{
		totalsales += sales[i];
	}
}

void products::listSales()
{
	ofstream SalesReport;
	SalesReport.open("Sales.txt");
	SalesReport << totalsales;
	SalesReport.close();
	cout << "The total sales are $" << totalsales << endl;
}

int main()
{
	products money;
	money.inputSales();
	money.listSales();
	system("pause");
	return 0;
}