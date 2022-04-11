#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

class User
{
private:
	int _id;
	static int id;
	void showInfo()
	{
		cout << "Id: " << _id << "\tName: " << name << "\tFamily: " << family << "\t";
		switch (accessCode)
		{
		case 2:
			cout << username << " is a seller!" << endl;
			break;
		case 3:
			cout << username << " is a buyer!" << endl;
			break;
		}
	}
protected:
	string name;
	string family;
	string username;
	string password;
	int accessCode;
public:
	User()
	{
		id++;
		_id = id;
	}
	friend class Admin;
};
class Admin
{
protected:
	string username;
	string password;
	int accessCode;
public:
	void getUser(User ob)
	{
		ob.showInfo();
	}
	Admin(string u, string p)
	{
		username = u;
		password = p;
		accessCode = 1;
	}
};
class Seller : public User
{
public:
	Seller(string n, string f, string u, string p)
	{
		name = n;
		family = f;
		username = u;
		password = p;
		accessCode = 3;
	}
	void login(string u, string p)
	{
		if (u == username && p == password)
		{
			cout << "Logged in!";
		}
		else
		{
			cout << "Something went wrong!";		
		}
	}
};
class Buyer : public User
{
public:
	Buyer(string n, string f, string u, string p)
	{
		name = n;
		family = f;
		username = u;
		password = p;
		accessCode = 3;
	}
	void login(string u, string p)
	{
		if (u == username && p == password)
		{
			cout << "Logged in!";
		}
		else
		{
			cout << "Something went wrong!";		
		}
	}
};
int User::id;

int main()
{	Buyer u("Alireza","Abri","A_AB","1234");
//	u.login("A_AB","1234");
	Admin a("Admin","0000");
	a.getUser(u);
}
