#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class ProgramScientists
{
private:
	string _name;
	string _family;
	string _studentId;
	static short int progress;
public:
	static int numberOfMembers;
	const string course = "Advanced Programming, 1400-2";
	
	ProgramScientists()
	{
		numberOfMembers++;
	}
	void set(string name, string family, string studentId)
	{
		_name = name;
		_family = family;
		_studentId = studentId;
	}
void Update(string discription, string dateTime, short int n)
	{		
		if((progress+n) >= 100)
			progress=100;
		else 
			progress += n;
			
		cout << "File has been modified by " << _name << " in " << dateTime << ".\n--'" << discription << "'\nProgress: " << progress << "%" << endl << "----------------------------" << endl;
	}
	void showProgress()
	{
		cout << "Progress: " << progress << "%" << endl;
	}
};

int ProgramScientists::numberOfMembers;
short int ProgramScientists::progress;

int main()
{
	ProgramScientists A;
	A.set("Alireza", "Abri", "40018833201");
	ProgramScientists M;
	M.set("Matin", "Alishani", "4001833227");
	ProgramScientists P;
	P.set("Pardis", "Kazemi", "4001833237"); 
	/////
	cout << A.course << "\n----------------------------" << endl;
	/////
	A.Update("Added a method to class.", "4/11/2022, 19:31", 12);
}
