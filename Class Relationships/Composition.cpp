#include<iostream>
#include<cstring>
#define SIZE 2
using namespace std;

class classRooms
{
private:
	int roomno;
public:
	classRooms() {}
	classRooms(int no)
	{
		roomno = no;
	}
	void display()
	{
		cout << "class room" << roomno << endl;
	}

	~classRooms()
	{
		cout << "deleting room" << roomno << endl;
	}

};

class university
{
private:

	classRooms *room[SIZE];

public:
	university()//default constructor
	{
		room[0] = new classRooms(101);
		room[1] = new classRooms(102);
	}

	university(int no1, int no2)//parameterised constructor
	{
		room[0] = new classRooms(no1);
		room[1] = new classRooms(no2);
	}

	void displayClassRoom()
	{
		for (int i = 0; i < SIZE; i++)
		{
			room[i]->display();
		}


	}

	~university()//destructor
	{
		cout << "university shutting down" << endl;

		for (int i = 0; i < SIZE; i++)
		{
			delete room[i];//call the destructor of classRooms
		}

		cout << "the end" << endl;
	}
};



int main()
{
	university* myuni;//creating dynamic object

	myuni = new university(501, 502);

	myuni->displayClassRoom();

	delete myuni;

	return 0;
}
/*output
class room501
class room502
university shutting down
deleting room501
deleting room502
the end
*/
