#include "Address.h"

Address :: Address()
{
	house	 = 0;
	street	 = 0;
	area	 = "";
	city	 = "";
	district = "";
	province = "";
}

Address :: Address(int h, int s, string a, string c, string d, string p)
{
	house	 = h;
	street	 = s;
	area	 = a;
	city	 = c;
	district = d;
	province = p;
}

void Address :: setAddress(int h, int s, string a, string c, string d, string p)
{
	house = h;
	street = s;
	area = a;
	city = c;
	district = d;
	province = p;
}

void Address :: setHouse(int h)
{}

void Address::setStreet(int s)
{
	street = s;
}

void Address::setArea(string a)
{
	area = a;
}

void Address::setCity(string c)
{
	city = c;
}

void Address::setDistrict(string d)
{
	district = d;
}

void Address::setProvince(string p)
{
	province = p;
}

int Address::getHouse()
{
	return house;
}

int Address::getStreet()
{
	return street;
}

string Address::getArea()
{
	return area;
}

string Address::getCity()
{
	return city;
}

string Address::getDistrict()
{
	return district;
}

string Address::getProvince()
{
	return province;
}