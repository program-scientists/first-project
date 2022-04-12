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
		cout << "SHOWING INFO FOR Id=" << _id << ":\t{Name: " << name << ",\tFamily: " << family << ",\t";
		switch (accessCode)
		{
		case 2:
			cout << username << " is a seller!}" << endl;
			break;
		case 3:
			cout << username << " is a buyer!}" << endl;
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
	bool s = false;
	const string username = "Admin";
	const string password = "0000";
	int accessCode;
public:
	void getUser(User ob)
	{
		if (s == true)
		{
			ob.showInfo();
		}
		else
		{
			cout << "You don't have permission to access this method!!!" << endl;		
		}
	}
	Admin(string u, string p)
	{
		if (u == username && p == password)
		{
			cout << "Hello Admin!" << endl << "-----------" << endl;
			s = true;
		}
		else
		{
			cout << "Incorrect password or username!!!" << endl;		
		}
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
		accessCode = 2;
	}
	void login(string u, string p)
	{
		if (u == username && p == password)
		{
			cout << "Logged in!" << endl;
		}
		else
		{
			cout << "Something went wrong!" << endl;		
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
			cout << "Logged in!" << endl;
		}
		else
		{
			cout << "Something went wrong!" << endl;		
		}
	}
};
int User::id;

int main()
{	
	Buyer u1("Alireza","Abri","A_AB","123");
	Buyer u2("Matin","Alishani","A_ABC","1234");
	Buyer u3("Pardis","Kazemi","A_ABCD","12345");
//	u.login("A_AB","123");
//////////////////////////////
	Admin a("Admin", "0000");
	a.getUser(u3);
}
