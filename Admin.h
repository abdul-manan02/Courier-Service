#pragma once
#ifndef ADMIN_H_
#define ADMIN_H_
#include "GPO.h"
#include <fstream>
#include <iostream>
using namespace std;

class Admin							// I could've also inherited all the functions from the fully functional 
{									//			Customer Class but i wanted a single admin so there   
	private:						//						was no need for that
		string username;
		string password;
		GPO* gpo;
	public:
		Admin();
		void setUsername();
		void setPassword();
		string getUsername();
		string getPassword();
		bool verify();

		void setGPO();
		

		~Admin();
};
#endif // !ADMIN_H_
