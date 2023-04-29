#include "Invoice.h"

Invoice::Invoice()
{
	customer_id = NULL;
	orderId = NULL;
	weight = NULL;
	length = NULL;
	width = NULL;
	shipmentTime = NULL;
	senderAddress = NULL;
	receiverAddress = NULL;
	senderContactDetails = NULL;
	receiverContactDetails = NULL;
}

void Invoice::setArrays(int* cust, int* order, float* weigh, int* len, int* wid, int* ship, string* senderAddr, string* receiverAddr, int* senderCon, int* receiverCon)
{
	for (int i = 0; i < noOfInvoices; i++)
	{
		customer_id[i] = cust[i];
		orderId[i] = order[i];
		weight[i] = weigh[i];
		length[i] = len[i];
		width[i] = wid[i];
		shipmentTime[i] = ship[i];
		senderAddress[i] = senderAddr[i];
		receiverAddress[i] = receiverAddr[i];
		senderContactDetails[i] = senderCon[i];
		receiverContactDetails[i] = receiverCon[i];
	}
}
void Invoice::setInvoices(int x)
{
	noOfInvoices = x;
	customer_id = new int[noOfInvoices];
	orderId = new int[noOfInvoices];
	weight = new float[noOfInvoices];
	length = new int[noOfInvoices];
	width = new int[noOfInvoices];
	shipmentTime = new int[noOfInvoices];
	senderAddress = new string[noOfInvoices];
	receiverAddress = new string[noOfInvoices];
	senderContactDetails = new int[noOfInvoices];
	receiverContactDetails = new int[noOfInvoices];
}
int* Invoice::getId()
{
	return orderId;
}

int Invoice::getInvoices()
{
	return noOfInvoices;
}

float* Invoice::getWeight()
{
	return weight;
}

int* Invoice :: getLength()
{
	return length;
}
	
int* Invoice::getWidth()
{
	return width;
}

string* Invoice :: getSenderAddress()
{
	return senderAddress;
}

string* Invoice :: getReceiverAddress()
{
	return receiverAddress;
}

int* Invoice :: getSenderContactDetails()
{
	return senderContactDetails;
}

int* Invoice :: getReceiverContactDetails()
{
	return receiverContactDetails;
}

int* Invoice::getCustomerId()
{
	return customer_id;
}

int* Invoice::getShipmentTime()
{
	return shipmentTime;
}
