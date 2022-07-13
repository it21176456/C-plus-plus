#include<iostream>
#include<cstring>
using namespace std;

class person//base class
{
protected:
	 char name[10];
	 char address[20];
	int age;

public:
	
	person()
	{
		strcpy_s(name, "kamith");
		strcpy_s(address, "maharagama");
		age = 19;
	}

	void display()
	{
		cout << "this is person class" << endl;
	}
	
};

class student :public person  //derived class
{
private:
	int stuNo;
	double gpa;

public:
	student()//default constructor
	{
		strcpy_s(name, "ajith");
		strcpy_s(address, "pannipitiya");
		age = 22;
		stuNo = 001;
		gpa = 3.6;
	}
	void display()
	{
		cout << "this is student class" << " derived class from person" << endl;
	}

	void displayDetails()
	{
		
		cout << name << " " << address << " " << age << " " <<  stuNo <<" " << gpa << endl;
	}

};

class employee :public person
{
private:
	int empNO;
	double salary;

public:
	employee()//default constructor
	{
		strcpy_s(name, "samare");
		strcpy_s(address, "panadura");
		age = 45;
		empNO = 002;
		salary = 45000;
	}

	void display()
	{
		cout << "this is employee class" << " derived from person class" << endl;
	}

	void displayDetails()
	{
		cout << name << " " << address << " " << age << " " << empNO << " " << salary << endl;
	}


};

int main()
{
	person p1;
	student s1;
	employee e1;

	p1.display();
	s1.display();
	e1.display();

	cout << "\n" << endl;

	s1.displayDetails();
	e1.displayDetails();

	return 0;
}

/* output
this is person class
this is student class derived class from person
this is employee class derived from person class


ajith pannipitiya 22 1 3.6
samare panadura 45 2 45000
*/
