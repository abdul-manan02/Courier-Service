#include "Admin.h"

Admin :: Admin()
{
	gpo = new GPO;
	ifstream in("Admin.txt");
	in >> username;
	in >> password;
	in.close();
}

string Admin::getUsername()
{
	return username;
}

string Admin::getPassword()
{
	return password;
}

bool Admin::verify()
{
	string temp_username1;
	string temp_username;
	string temp_password;
	string temp_password1;
	cout << "\t U S E R N A M E : ";
	cin >> temp_username1;
	cout << "\t P A S S W O R D : ";
	cin >> temp_password1;
	string path = "Admin.txt";
	ifstream inp;
	inp.open(path, ios::in);
	if (inp.is_open())
	{
		while (inp >> temp_username >> temp_password)
		{
			if (temp_username.compare(temp_username1) == 0 && temp_password.compare(temp_password1) == 0)
			{
				cout << "\t\t V E R I F I E D \n";
				return 1;
			}
			else
			{
				cout << "\t\t I N V A L I D   U S E R N A M E   O R   P A S S W O R D " << endl;
				return 0;
			}
		}
		inp.close();
	}
}

void Admin :: setUsername( )
{
	if (verify() == 1)
	{
		string new_username;
		cout << "\t N E W   U S E R N A M E : ";
		cin >> new_username;
		username = new_username;
		string path = "Admin.txt";
		fstream outp(path, ios::out);
		if (outp.is_open())
		{
			outp << username << " " << password << endl;
			outp.close();
		}
	}
}

void Admin::setPassword()
{
	if (verify() == 1)
	{
		string new_password;
		cout << "\t N E W   P A S S W O R D : ";
		cin >> new_password;
		password = new_password;
		string path = "Admin.txt";
		fstream outp(path, ios::out);
		if (outp.is_open())
		{
			outp << username << " " << password;
			outp.close();
		}
	}

}

void Admin :: setGPO()
{

}

Admin :: ~Admin()
{
	delete gpo;
}