#pragma once
#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <iostream>
#include <fstream>
using namespace std;

class Customer
{
	private:
		int noOfCustomers;
		string *username;
		string *password;
	public:
		Customer();
		void setUsername();
		void setPassword();
		string* getUsername();
		string* getPassword();
		int getNoOfCustomers();
		bool verify();
		void addCustomer();
		void deleteCustomer();
		~Customer();
};
#endif // !CUSTOMER_H_
