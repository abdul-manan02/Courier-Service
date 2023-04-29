#pragma once
#ifndef ORDER_H_
#define ORDER_H_
#include "Invoice.h"
#include <iostream>
#include <fstream>
using namespace std;

class Order
{
	private:
		Invoice generateInvoice;
	public:
		Order();
		void readFile(string path);
		bool verify();
		void display();
};
#endif // !ORDER_H_
