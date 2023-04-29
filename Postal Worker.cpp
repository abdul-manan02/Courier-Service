#include "Postal Worker.h"

PostalWorker :: PostalWorker()
{
	numberOfEmployees = 0;
	id = NULL;
	name = NULL;
	designation = NULL;
}

int* PostalWorker::getId()
{
	return id;
}

string* PostalWorker::getName()
{
	return name;
}

string* PostalWorker::getDesignation()
{
	return designation;

}

int PostalWorker::getnumberOfEmployees()
{
	return numberOfEmployees;
}

void PostalWorker::setPostalWorker(string path)
{
	ifstream inp;											
	inp.open(path, ios::in);
	if (inp.is_open())
	{
		inp >> numberOfEmployees;
		id = new int[numberOfEmployees];
		name = new string[numberOfEmployees];
		designation = new string[numberOfEmployees];

		for (int i = 0; i < numberOfEmployees; i++)
		{
			inp >> id[i];
			inp >> name[i];
			inp >> designation[i];
		}
	}
	else
	{
		cout << "\t\t\t\t\t C O R R U P T   F I L E \n";
	}
	inp.close();
}

void PostalWorker::addPostalWorker(string path)
{
	numberOfEmployees++;
	int new_id;
	string employees, new_name, new_designation;			// variable to store customers in data
	int* temp_id;
	temp_id = new int[numberOfEmployees];
	string* temp_name;
	temp_name = new string[numberOfEmployees];				// array to store all file in data
	string* temp_designation;
	temp_designation = new string[numberOfEmployees];		// array to store all file in data

	ifstream inp;											// copy data in text file to temp array
	inp.open(path, ios::in);
	if (inp.is_open())
	{
		inp >> employees;
		for (int i=0; i < numberOfEmployees-1; i++)
		{
			inp >> temp_id[i];
			inp >> temp_name[i];
			inp >> temp_designation[i];
		}
	}
	else
	{
		cout << "\t\t\t\t\t C O R R U P T   F I L E \n";
	}
	inp.close();

	cout << "\t I D	: ";
	cin >> new_id;
	cout << "\t U S E R N A M E ( no spaces ) : ";
	cin >> new_name;
	cout << "\t D E S I G N A T I O N ( no spaces ) : ";		// "Postman" || "Clerk" || "Account-Officer"
	cin >> new_designation;

	temp_id[numberOfEmployees - 1] = new_id;
	temp_name[numberOfEmployees - 1] = new_name;
	temp_designation[numberOfEmployees - 1] = new_designation;

	id = new int[numberOfEmployees];
	name = new string[numberOfEmployees];
	designation = new string[numberOfEmployees];
	for (int i = 0; i < numberOfEmployees; i++)
	{
		id[i] = temp_id[i];
		name[i] = temp_name[i];
		designation[i] = temp_designation[i];
	}

	fstream outp;									// write the updated data to the file
	outp.open(path, ios::out);
	if (outp.is_open())
	{
		outp << numberOfEmployees << endl;
		for (int i = 0; i < numberOfEmployees; i++)
		{
			outp << id[i] << " ";
			outp << name[i] << " ";
			outp << designation[i] << endl;
		}
	}
	else
	{
		cout << "\t\t\t CUSTOMER FILE IS CORRUPT \n";
	}
	outp.close();

	delete[] temp_id;
	temp_id = NULL;
	delete[] temp_name;
	temp_name = NULL;
	delete[] temp_designation;
	temp_designation = NULL;
}

void PostalWorker::firePostalWorker(string path)
{
	bool check;											// check if string entered exist in text file or not
	int delete_id;
	int employees;										// variable to store customers in data
	int* temp_id;
	temp_id = new int[numberOfEmployees];
	string* temp_name;
	temp_name = new string[numberOfEmployees];			// array to store all file in data
	string* temp_designation;
	temp_designation = new string[numberOfEmployees];	// array to store all file in data
	for (int i = 0; i < numberOfEmployees; i++)
	{
		temp_id[i] = 0;
		temp_name[i] = "";
		temp_designation[i] = "";
	}

	cout << "\t I D : ";
	cin >> delete_id;
	ifstream inp;									// copy data in text file to temp array
	inp.open(path, ios::in);
	if (inp.is_open())
	{
		inp >> employees;
		for (int i = 0; i < numberOfEmployees; i++)
		{
			inp >> temp_id[i];
			inp >> temp_name[i];
			inp >> temp_designation[i];
		}
	}
	else
	{
		cout << "\t\t\t\t\t C O R R U P T   F I L E \n";
	}
	inp.close();

	for (int i = 0; i < numberOfEmployees; i++)
	{
		if (delete_id == temp_id[i])
		{
			check = 1;
			for (int j = i; j < numberOfEmployees - 1; j++)
			{
				temp_id[j] = temp_id[j + 1];
				temp_name[j] = temp_name[j + 1];
				temp_designation[j] = temp_designation[j + 1];
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
		--numberOfEmployees;
		id = new int[numberOfEmployees];
		name = new string[numberOfEmployees];
		designation = new string[numberOfEmployees];
		for (int i = 0; i < numberOfEmployees; i++)
		{
			id[i] = temp_id[i];
			name[i] = temp_name[i];
			designation[i] = temp_designation[i];
		}

		fstream outp;									// write the updated data to the file
		outp.open(path, ios::out);
		if (outp.is_open())
		{
			outp << numberOfEmployees << endl;
			for (int i = 0; i < numberOfEmployees; i++)
			{
				outp << id[i] << " ";
				outp << name[i] << " ";
				outp << designation[i] << endl;
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

	delete[] temp_id;
	temp_id = NULL;
	delete[] temp_name;
	temp_name = NULL;
	delete[] temp_designation;
	temp_designation = NULL;
}

PostalWorker :: ~PostalWorker()
{/*
	delete[] id;
	id = NULL;
	delete[] name;
	name = NULL;
	delete[] designation;
	designation = NULL;*/
}