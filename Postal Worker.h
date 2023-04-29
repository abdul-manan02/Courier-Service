#pragma once
#ifndef POSTALWORKER_H_
#define POSTALWORKER_H_
#include <iostream>
#include <fstream>
using namespace std;

class PostalWorker
{
	protected:
		int numberOfEmployees;
		int *id;
		string *name;
		string *designation;
	public:
		PostalWorker();
		int getnumberOfEmployees();
		int* getId();
		string* getName();
		string* getDesignation();
		void setPostalWorker(string path);

		void addPostalWorker(string path);
		void firePostalWorker(string path);
		~PostalWorker();
};

#endif // !POSTALWORKER_H_
