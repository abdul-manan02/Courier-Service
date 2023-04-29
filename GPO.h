#pragma once
#ifndef GPO_H_
#define GPO_H_
#include "Post Office.h"
#include <iostream>
#include <fstream>
using namespace std;

class GPO
{
	private:
		PostOffice postoffices[3];
		string GPO_city;
	public:
		GPO();

		void setGPOcity(string city);
		string getGPOcity();
		PostOffice* getPostOffice();
};
#endif // !GPO_H_
