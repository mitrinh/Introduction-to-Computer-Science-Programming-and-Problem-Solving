// this is the file "Administrator.h"

#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include "salariedEmp.h"
#include "employee.h"
#include <string>
using namespace std;

class Administrator : public salariedEmp
{
public:
	Administrator();
	Administrator(const string& newName,
		const string& newSsn,
		double newWeeklySalary,
		string newAdminTitle, 
		string newCompanyArea, 
		string newSupervisorName);
	void changeSupervisor();
	void readAdminInfo();
	void print();
	void printCheck() const;
private:
	string AdminTitle;
	string CompanyArea;
	string SupervisorName;
};

#endif
