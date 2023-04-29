#include "Post Office.h"

PostOffice :: PostOffice()
{
	PostOffice_area = "";
	postalCode = 0;

}
void PostOffice::setArea(string str)
{
	PostOffice_area = str;
}

string PostOffice::getArea()
{
	return PostOffice_area;
}

void PostOffice::setPostalCode(int x)
{
	postalCode = x;
}

int PostOffice::getPostalCode()
{
	return postalCode;
}

void PostOffice::setPostalWorkers(string path)
{
	postalworkers.setPostalWorker(path);
}

void PostOffice::addPostalWorkers(string path)
{
	postalworkers.addPostalWorker(path);
}

void PostOffice::firePostalWorkers(string path)
{
	postalworkers.firePostalWorker(path);
}

PostalWorker PostOffice :: getPostalWorkers()
{
	return postalworkers;
}
