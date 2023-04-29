#pragma once
#ifndef POSTOFFICE_H_
#define POSTOFFICE_H_
#include "Mails.h"
#include "Postman.h"
#include "Clerk.h"
#include "Account Officer.h"
#include <iostream>
#include <fstream>
using namespace std;

class PostOffice
{
	private:
		string PostOffice_area;
		int postalCode;
		Mails mails;
		PostalWorker postalworkers;
	public:
		PostOffice();
		void setArea(string str);
		string getArea();
		void setPostalCode(int x);
		int getPostalCode();
		void setPostalWorkers(string path);
		PostalWorker getPostalWorkers();
		void addPostalWorkers(string path);
		void firePostalWorkers(string path);
};
#endif // !POST OFFICE_H_
