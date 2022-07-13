//uni directional
#include<iostream>
#include<cstring>

using namespace std;

class manager
{
private:
	string managerID;
	string name;

public:
	manager();
	manager(string pmanagerID, string pname)
	{
		managerID = pmanagerID;
		name = pname;
	}

	void displayManager()
	{
		cout << "Manager ID: " << managerID << endl;
		cout << "Manager Name: " << name << endl;
	}
};

class department
{
private:
	string depID;
	manager* mgr;

public:
	department(string pdepID, manager* m)
	{
		depID = pdepID;
		mgr = m;
	}

	void displayDept()
	{
		cout << "deptID: " << depID << endl;
		mgr->displayManager();
	}

};

int main()
{
	manager* m = new manager("001", "Amal");
	m->displayManager();

	cout << "***************" << endl;
	department* d = new department("D1", m);
	d->displayDept();

	

	return 0;
}
/*output
Manager ID: 001
Manager Name: Amal
***************
deptID: D1
Manager ID: 001
Manager Name: Amal
*/
