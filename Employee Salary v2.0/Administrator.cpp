// this is the file "Administrator.cpp"
#include "Administrator.h"
#include "salariedEmp.h"
#include "Employee.h"
#include <string>
#include <iostream>
using namespace std;

Administrator::Administrator()
{
	AdminTitle = "0";
	CompanyArea = "0";
	SupervisorName = "0";
}

Administrator::Administrator(const string& newName,
	const string& newSsn, 
	double newWeeklySalary,
	string newAdminTitle,
	string newCompanyArea,
	string newSupervisorName)
	
	: salariedEmp(newName, newSsn, salary)


{
	AdminTitle = newAdminTitle;
	CompanyArea = newCompanyArea;
	SupervisorName = newSupervisorName;
}

void Administrator::changeSupervisor()
{
	cout << "What is the name of the new Supervisor?" << endl;
	getline(cin, SupervisorName);
}

void Administrator::readAdminInfo()
{
	cout << "Enter the name	of the administrator: ";
	getline(cin, name);
	cout << "Enter the administrator's SSN: ";
	getline(cin, ssn);
	cout << "Enter the administrator's title (such as Director or Vice President): ";
	getline(cin, AdminTitle);
	cout << "Enter the company area of responsibility (such as Production, Accounting, or Personnel): ";
	getline(cin, CompanyArea);
	cout << "Enter the name of this administrator's immediate supervisor: ";
	getline(cin, SupervisorName);
}

void Administrator::print()
{
	cout << "administrator's title: " << AdminTitle << endl;
	cout << "company area of responsibility: " << CompanyArea << endl;
	cout << "name of this administrator's immediate supervisor: " << SupervisorName << endl;
}

void Administrator::printCheck() const
{
	cout << "Check Stub: " << AdminTitle << ", " << CompanyArea << ", " << SupervisorName << endl;
	cout << "Employee number: " << ssn << endl;
	cout << "This is an Administrator.";
}