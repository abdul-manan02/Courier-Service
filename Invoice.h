#pragma once
#ifndef INVOICE_H_
#define INVOICE_H_
#include "Customer.h"
#include <iostream>
#include <fstream>
using namespace std;

class Invoice
{
	private:
		int noOfInvoices;
		int *customer_id;
		int *orderId;
		float *weight;					// in kg
		int *length;				// length and width
		int* width;
		int *shipmentTime;				// stored in military time format || printed in standard time format 
		string *senderAddress;
		string *receiverAddress;
		int *senderContactDetails;
		int *receiverContactDetails;
	public:
		Invoice();
		void setArrays(int *cust, int* order, float* weigh, int* len, int* wid, int* ship, string *senderAddr, string *receiverAddr, int* senderCon, int* receiverCon);
		void setInvoices(int x);
		int getInvoices();
		int* getId();
		float* getWeight();
		int* getLength();
		int* getWidth();
		string* getSenderAddress();
		string* getReceiverAddress();
		int* getSenderContactDetails();
		int* getReceiverContactDetails();
		int *getCustomerId();
		int* getShipmentTime();
};
#endif