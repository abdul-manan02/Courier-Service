#include "GPO.h"

GPO :: GPO()
{
	GPO_city = "";
	postoffices[0].setArea("Melody,G-6/4");
	postoffices[0].setPostalCode(44000);
	postoffices[0].setPostalWorkers("Postal Workers 1.txt");
	postoffices[1].setArea("G9-Markaz,Karachi-Company");
	postoffices[1].setPostalCode(45000);
	postoffices[1].setPostalWorkers("Postal Workers 2.txt");
	postoffices[2].setArea("G11-Markaz");
	postoffices[2].setPostalCode(45000);
	postoffices[2].setPostalWorkers("Postal Workers 3.txt");
}

void GPO::setGPOcity(string city)
{
	GPO_city = city;
}

string GPO :: getGPOcity()
{
	return GPO_city;
}

PostOffice* GPO::getPostOffice()
{
	return postoffices;
}
