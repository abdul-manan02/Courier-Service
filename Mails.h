#pragma once
#ifndef MAIlS_H_
#define MAILS_H_
#include "Mail Service.h"
#include <iostream>
using namespace std;

class Mails
{
	protected:
		int id;
		string senderLocation;
		string receiverLocation;
		MailService *mailservice;
	public:
		Mails();
		Mails(int i, string s, string r);
		void setId(int i);
		void setSenderLocation(string s);
		void setReceiverLocation(string r);
		int getId();
		string getSenderLocation();
		string getReceiverLocation();
};
#endif // !MAIlS_H_
