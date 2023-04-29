#include "Customer.h"


Customer :: Customer()
{
	string temp_int;
	ifstream in("Customer.txt");
	in >> noOfCustomers;
	username = new string[noOfCustomers];
	password = new string[noOfCustomers];
	for (int i=0; i<noOfCustomers; i++)
	{
		in >> username[i];
		in >> password[i];
	}
	in.close();
}

string* Customer::getUsername()
{
	return username;
}

string* Customer::getPassword()
{
	return password;
}

int Customer::getNoOfCustomers()
{
	return noOfCustomers;
}

bool Customer::verify()
{
	string temp_username1;
	string temp_password1;
	string temp_username;
	string temp_password;
	cout << "\t U S E R N A M E ( no spaces )  : ";
	cin >> temp_username1;
	cout << "\t P A S S W O R D ( no spaces )  : ";
	cin >> temp_password1;
	string path = "Customer.txt";
	ifstream inp;
	inp.open(path, ios::in);
	if (inp.is_open())
	{
		inp >> temp_username;						// discard the first string of the NoOfCustomers
		for (int i = 0; i < noOfCustomers; i++)
		{
			inp >> temp_username;
			inp >> temp_password;
			if (temp_username.compare(temp_username1) == 0 && temp_password.compare(temp_password1) == 0)
			{
				cout << "\t\t V E R I F I E D \n";
				return 1;
			}
		}
	}
	cout << "\t\t I N V A L I D   U S E R N A M E   O R   P A S S W O R D " << endl;
	return 0;
}

void Customer :: setUsername()
{
	if ( verify() == 1 )
	{
		string customers;								// variable to store customers in data
		string* temp_username;
		temp_username = new string[noOfCustomers];		// array to store all file in data
		string* temp_password;
		temp_password = new string[noOfCustomers];		// array to store all file in data
		string temp_username1, new_username;			// user entered strings
		bool check = 0;								
		string path = "Customer.txt";

		ifstream inp;									// copy data in text file to temp array
		inp.open(path, ios::in);
		if (inp.is_open())
		{
			inp >> customers;						
			for (int i=0; i<noOfCustomers; i++)
			{
				inp >> temp_username[i];
				inp >> temp_password[i];
			}
		}
		else
		{
			cout << "\t\t\t\t\t C O R R U P T   F I L E \n";
		}
		inp.close();

		cout << "\t R E - E N T E R   U S E R N A M E : ";
		cin >> temp_username1;
		cout << "\t N E W   U S E R N A M E : ";
		cin >> new_username;

		fstream outp;										// write the updated data to the file
		outp.open(path, ios::out);	
		if (outp.is_open())
		{
			outp << customers << endl;
			for (int i=0; i<noOfCustomers; i++)
			{
				if (temp_username1 == temp_username[i])
				{
					username[i] = new_username;
					outp << new_username     << " ";
					outp << temp_password[i] << endl;
				}
				else
				{
					outp << temp_username[i] << " ";
					outp << temp_password[i] << endl;
				}
			}
		}
		else
		{
			cout << "\t\t\t CUSTOMER FILE IS CORRUPT \n";
		}
		outp.close();

		ifstream inp1;									// store data from text file into data members
		inp1.open(path, ios::in);
		if (inp1.is_open())
		{
			inp >> noOfCustomers;
			for (int i=0; i< noOfCustomers; i++)
			{
				inp >> username[i];
				inp >> password[i];
			}
		}
		else
		{
			cout << "\t\t\t CUSTOMER FILE IS CORRUPT \n";
		}
		inp1.close();

		delete[] temp_username;
		temp_username = NULL;
		delete[] temp_password;
		temp_password = NULL;
	}
	
	cout << endl;

	
}

void Customer:: setPassword()
{
	if (verify() == 1)
	{
		string customers;								// variable to store customers in data
		string* temp_username;
		temp_username = new string[noOfCustomers];		// array to store all file in data
		string* temp_password;
		temp_password = new string[noOfCustomers];		// array to store all file in data
		string temp_password1, new_password;			// user entered strings
		bool check = 0;
		string path = "Customer.txt";
				
		ifstream inp;									// copy data in text file to temp array
		inp.open(path, ios::in);
		if (inp.is_open())
		{
			inp >> customers;
			for (int i = 0; i < noOfCustomers; i++)
			{
				inp >> temp_username[i];
				inp >> temp_password[i];
			}
		}
		else
		{
			cout << "\t\t\t\t\t C O R R U P T   F I L E \n";
		}
		inp.close();

		cout << "\t R E - E N T E R   U S E R N A M E : ";
		cin >> temp_password1;
		cout << "\t N E W   U S E R N A M E : ";
		cin >> new_password;

		fstream outp;										// write the updated data to the file
		outp.open(path, ios::out);
		if (outp.is_open())
		{
			outp << customers << endl;
			for (int i = 0; i < noOfCustomers; i++)
			{
				if (temp_password1 == temp_password[i])
				{
					username[i] = new_password;
					outp << new_password << " ";
					outp << temp_password[i] << endl;
				}
				else
				{
					outp << temp_username[i] << " ";
					outp << temp_password[i] << endl;
				}
			}
		}
		else
		{
			cout << "\t\t\t CUSTOMER FILE IS CORRUPT \n";
		}
		outp.close();

		ifstream inp1;										// store data from text file into data members
		inp1.open(path, ios::in);
		if (inp1.is_open())
		{
			inp >> noOfCustomers;
			for (int i = 0; i < noOfCustomers; i++)
			{
				inp >> username[i];
				inp >> password[i];
			}
		}
		else
		{
			cout << "\t\t\t CUSTOMER FILE IS CORRUPT \n";
		}
		inp1.close();

		delete[] temp_username;
		temp_username = NULL;
		delete[] temp_password;
		temp_password = NULL;
	}

	cout << endl;

}

void Customer :: addCustomer()
{
	noOfCustomers++;
	string customers, new_username, new_password;		// variable to store customers in data
	string* temp_username;
	temp_username = new string[noOfCustomers];			// array to store all file in data
	string* temp_password;
	temp_password = new string[noOfCustomers];			// array to store all file in data
	string path = "Customer.txt";

	ifstream inp;										// copy data in text file to temp array
	inp.open(path, ios::in);
	if (inp.is_open())
	{
		inp >> customers;
		for (int i = 0; i<noOfCustomers-1; i++)
		{
			inp >> temp_username[i];
			inp >> temp_password[i];
		}
	}
	else
	{
		cout << "\t\t\t\t\t C O R R U P T   F I L E \n";
	}
	inp.close();

	cout << "\t U S E R N A M E : ";
	cin >> new_username;
	cout << "\t P A S S W O R D : ";
	cin >> new_password;
	temp_username[noOfCustomers - 1] = new_username;
	temp_password[noOfCustomers - 1] = new_password;

	username = new string[noOfCustomers];
	password = new string[noOfCustomers];
	for (int i = 0; i < noOfCustomers; i++)
	{
		username[i] = temp_username[i];
		password[i] = temp_password[i];
	}
	
	fstream outp;									// write the updated data to the file
	outp.open(path, ios::out);
	if (outp.is_open())
	{
		outp << noOfCustomers << endl;
		for (int i=0; i<noOfCustomers; i++)
		{
				outp << username[i] << " ";
				outp << password[i] << endl;
		}
	}
	else
	{
		cout << "\t\t\t CUSTOMER FILE IS CORRUPT \n";
	}
	outp.close();

	delete[] temp_username;
	temp_username = NULL;
	delete[] temp_password;
	temp_password = NULL;
}

void Customer::deleteCustomer()
{
	bool check;										// check if string entered exist in text file or not
	string delete_username;
	string customers;								// variable to store customers in data
	string* temp_username;
	temp_username = new string[noOfCustomers];		// array to store all file in data
	string* temp_password;
	temp_password = new string[noOfCustomers];		// array to store all file in data
	string path = "Customer.txt";

	cout << "\t U S E R N A M E : ";
	cin >> delete_username;

	ifstream inp;									// copy data in text file to temp array
	inp.open(path, ios::in);
	if (inp.is_open())
	{
		inp >> customers;
		for (int i = 0; i < noOfCustomers; i++)
		{
			inp >> temp_username[i];
			inp >> temp_password[i];
		}
	}
	else
	{
		cout << "\t\t\t\t\t C O R R U P T   F I L E \n";
	}
	inp.close();

	for (int i = 0; i < noOfCustomers; i++)
	{
		if (delete_username == temp_username[i])
		{
			check = 1;
			for (int j = i; j < noOfCustomers-1; j++)
			{
				temp_username[j] = temp_username[j + 1];
				temp_password[j] = temp_password[j + 1];
			}
			break;
		}
		else
		{
			check = 0;
		}
	}

	if (check == 1)
	{
		cout << "\t\t F O U N D \n";
		--noOfCustomers;
		username = new string[noOfCustomers];
		password = new string[noOfCustomers];
		for (int i = 0; i < noOfCustomers; i++)
		{
			username[i] = temp_username[i];
			password[i] = temp_password[i];
		}

		fstream outp;									// write the updated data to the file
		outp.open(path, ios::out);
		if (outp.is_open())
		{
			outp << noOfCustomers << endl;
			for (int i = 0; i < noOfCustomers; i++)
			{
				outp << username[i] << " ";
				outp << password[i] << endl;
			}
		}
		else
		{
			cout << "\t\t\t CUSTOMER FILE IS CORRUPT \n";
		}
		outp.close();
	}
	else
	{
		cout << "\t\t N O T   F O U N D \n";
	}
	

	delete[] temp_username;
	temp_username = NULL;
	delete[] temp_password;
	temp_password = NULL;
}
Customer :: ~Customer()
{
	delete[] username;
	username = NULL;
	delete[] password;
	password = NULL;
}