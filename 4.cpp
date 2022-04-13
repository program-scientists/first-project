#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

class Person
{
private:
	string ID;
public:
	string name;
	string family;
	unsigned int age;
	Person()
	{
		cout << "--Person CONSTRUCTOR has been called--" << endl;
	}
	~Person()
	{
		cout << "--Person DESTRUCTOR has been called--" << endl;
	}
	void getDetails()
	{
		cout << "Enter name: ";
		cin>> name;
		cout << "Enter family: ";
		cin >> family;
		cout << "Enter age: ";
		cin >> age;
	}
	void showDetails()
	{
		cout << name << " " << family << "\t" << age <<  endl;
	}
	void setID(string id)
	{
		ID = id;
	}
	void showID()
	{
		cout << ID;
	}
};
////////////////
class Student : public Person
{
protected:
	string SID;
	string entryYear;
public:
	Student()
	{
		cout << "--Student CONSTRUCTOR has been called--" << endl;
	}
	~Student()
	{
		cout << "--Student DESTRUCTOR has been called--" << endl;
	}
	void getDetails()
	{
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter family: ";
		cin >> family;
		cout << "Enter age: ";
		cin >> age;
		cout << "Enter StudentID: ";
		cin >> SID;
		cout << "Enter year of entry: ";
		cin >> entryYear;
	}
	void showDetails()
	{
		cout << name << " " << family << "\tAge : " << age << endl << "Student ID: " << SID << "\nSemester: " << entryYear << endl;
	}
};
class CsStudent : public Student
{
public:
	CsStudent()
	{
		cout << "--CsStudent CONSTRUCTOR has been called--" << endl;
	}
	~CsStudent()
	{
		cout << "--CsStudent DESTRUCTOR has been called--" << endl;
	}
};
class MathStudent : public Student
{
public:
	MathStudent()
	{
		cout << "--MathStudent CONSTRUCTOR has been called--" << endl;
	}
	~MathStudent()
	{
		cout << "--MathStudent DESTRUCTOR has been called--" << endl;
	}
};
////////////////
class Employee : public Person
{
private:
	string position;
protected:
	unsigned long int salary;
	string idNumber;
	int yearsWorked;
public:
	Employee()
	{
		cout << "--Employee CONSTRUCTOR has been called--" << endl;
	}
	~Employee()
	{
		cout << "--Employee DESTRUCTOR has been called--" << endl;
	}
	void getDetails()
	{
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter family: ";
		cin >> family;
		cout << "Enter age: ";
		cin >> age;
		cout << "Enter position: ";
		cin >> position;
		cout << "Enter years worked: ";
		cin >> yearsWorked;
	}
	void showDetails()
	{
		cout << name << " " << family << "\t" << age << endl << "position: " << position << "\t years worked: " << yearsWorked << endl;
	}
	void setIdnumber(string idNum)
	{
		idNumber = idNum;
	}
	void setIdnumber(unsigned long s)
	{
		salary = s;
	}
};
class Staff : public Employee
{
public:
	Staff()
	{
		cout << "--Staff CONSTRUCTOR has been called--" << endl;
	}
	~Staff()
	{
		cout << "--Staff DESTRUCTOR has been called--" << endl;
	}
};
class Teacher : public Employee
{
protected:
	string subject;
	unsigned int publications;
	string rank;
public:
	Teacher()
	{
		cout << "--Teacher CONSTRUCTOR has been called--" << endl;
	}
	~Teacher()
	{
		cout << "--Teacher DESTRUCTOR has been called--" << endl;
	}
	void getDetails()
	{
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter family: ";
		cin >> family;
		cout << "Enter age: ";
		cin >> age;
		cout << "Enter rank: ";
		cin >> rank;
		cout << "Enter years worked: ";
		cin >> yearsWorked;
		cout << "Enter subject you teach: ";
		cin >> subject;
	}
	void showDetails()
	{
		cout << name << " " << family << "\t" << age << endl << "rank: " << rank << "\tsubject:" << subject << "\t years worked: " << yearsWorked << endl;
	}
	void setPublications(unsigned int p)
	{
		publications = p;
	}
	void showPublications()
	{
		cout << publications << " publications!" << endl;
	}
};
class ITWorker : public Staff
{
public:
	ITWorker()
	{
		cout << "--ITWorker CONSTRUCTOR has been called--" << endl;
	}
	~ITWorker()
	{
		cout << "--ITWorker DESTRUCTOR has been called--" << endl;
	}
};
class Manager : public Staff, public Teacher
{
public:
	Manager()
	{
		cout << "--Manager CONSTRUCTOR has been called--" << endl;
	}
	~Manager()
	{
		cout << "--Manager DESTRUCTOR has been called--" << endl;
	}
};
class DepartmentChair : public Teacher
{
private:
	int numberOfMembers=0;
public:
	DepartmentChair()
	{
		cout << "--DepartmentChair CONSTRUCTOR has been called--" << endl;
	}
	~DepartmentChair()
	{
		cout << "--DepartmentChair DESTRUCTOR has been called--" << endl;
	}
	DepartmentChair(Teacher t)
	{
		cout << t.name << " " << t.family << " added to DepartmentChair!" << endl;
		numberOfMembers++;
	}
	void addMember(Teacher t)
	{
		cout << t.name << " " << t.family << " added to DepartmentChair!" << endl;
		numberOfMembers++;
	}
	void showNumberOfMembers()
	{
		cout << numberOfMembers << endl;
	}
};
////////////////
int main()
{
//	Manager m;
	// -------- //
//	CsStudent s;
}