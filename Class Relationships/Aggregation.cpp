#include<iostream>
#include<cstring>

using namespace std;

class employee
{
private:
	string empID;
	string name;

public:
	employee(string pempID, string pname)
	{
		empID = pempID;
		name = pname;
	}
	void displayEmployee()
	{
		cout << "empID " << empID << endl;
		cout << "name " << name << endl;
		cout << "********************" << endl;
	}
	~employee()
	{
		cout << "deleting employee" << endl;
	}
};

class department
{
private:
	employee* emp[2];

public:
	department(){}

	void addemployee(employee* emp1, employee* emp2)
	{
		emp[0] = emp1;
		emp[1] = emp2;
	}

	void displayDepartment()
	{
		for (int i = 0; i < 2; i++)
		{
			emp[i]->displayEmployee();
		}

	}

	~department()
	{
		cout << "department shutting down" << endl;
	}
};

int main()
{
	department* depa = new department();
	employee* e1 = new employee("E001", "Nimal");
	employee* e2 = new employee("E002", "Kasun");

	depa->addemployee(e1, e2);
	depa->displayDepartment();

	delete depa;

	e1->displayEmployee();
	e2->displayEmployee();

	delete e1;
	delete e2;

	employee* e3 = new employee("E003", "Aimal");
	employee* e4 = new employee("E004", "Pasun");

	depa->addemployee(e3, e4);
	depa->displayDepartment();

	
	

}
/*output
empID E001
name Nimal
********************
empID E002
name Kasun
********************
department shutting down

empID E001
name Nimal
********************
empID E002
name Kasun
********************
deleting employee
deleting employee

empID E003
name Aimal
********************
empID E004
name Pasun
*********************/
