#include "Order.h"

Order::Order()
{}

void Order::display()
{
	for (int i = 0; i <generateInvoice.getInvoices(); i++)
	{
		cout << generateInvoice.getCustomerId()[i] << " ";
		cout << generateInvoice.getId()[i] << " ";
		cout << generateInvoice.getLength()[i] << " ";
		cout << generateInvoice.getWidth()[i] << " ";
		cout << generateInvoice.getSenderContactDetails()[i] << " ";
		cout << generateInvoice.getReceiverContactDetails()[i] << " ";
		cout << generateInvoice.getShipmentTime()[i] << " ";
		cout << generateInvoice.getWeight()[i] << " ";
		cout << generateInvoice.getReceiverAddress()[i] << " ";
		cout << generateInvoice.getReceiverAddress()[i] << endl;
	}
}

void Order::readFile(string path)
{
	int invoices;
	int* tempCustId;
	int* tempOrderId;
	int* tempLength;
	int* tempWidth;
	int* tempSenderDetails;
	int* tempReceiverDetails;
	int* tempShipmentTime;
	float* temp_weight;
	string* tempreceiverAddress;
	string* tempsenderAddress;

	ifstream inp;
	
	inp.open(path, ios::in);
	if (inp.is_open())
	{
		inp >> invoices;
		tempCustId = new int[invoices];
		tempOrderId = new int[invoices];
		tempLength = new int[invoices];
		tempWidth = new int[invoices];
		tempSenderDetails = new int[invoices];
		tempReceiverDetails = new int[invoices];
		tempShipmentTime = new int[invoices];
		temp_weight = new float[invoices];
		tempreceiverAddress = new string[invoices];
		tempsenderAddress = new string[invoices];

		for (int i = 0; i < invoices; i++)
		{
			inp >> tempCustId[i];
			inp >> tempOrderId[i];
			inp >> tempLength[i];
			inp >> tempWidth[i];
			inp >> tempSenderDetails[i];
			inp >> tempReceiverDetails[i];
			inp >> tempShipmentTime[i];
			inp >> temp_weight[i];
			inp >> tempreceiverAddress[i];
			inp >> tempsenderAddress[i];
		}
		generateInvoice.setInvoices(invoices);
		generateInvoice.setArrays(tempCustId, tempOrderId, temp_weight, tempLength, tempWidth, tempShipmentTime, tempsenderAddress, tempreceiverAddress, tempSenderDetails, tempReceiverDetails);
	}
	else
	{
		cout << "\t\t\t\t\t C O R R U P T   F I L E \n";
	}
	inp.close();
}