#pragma once
#ifndef ADDRESS_H_
#define ADDRESS_H_
#include <iostream>
using namespace std;

class Address
{
	private:
		int house;
		int street;
		string area;
		string city;
		string district;
		string province;
	public:
		Address();
		Address(int h, int s, string a, string c, string d, string p);
		void setAddress(int h, int s, string a, string c, string d, string p);
		void setHouse(int h);
		void setStreet(int s);
		void setArea(string a);
		void setCity(string c);
		void setDistrict(string d);
		void setProvince(string p);
		int getHouse();
		int getStreet();
		string getArea();
		string getCity();
		string getDistrict();
		string getProvince();
};
#endif