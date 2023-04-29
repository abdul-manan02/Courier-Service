#include "Mails.h"

Mails :: Mails()
{
	id = 0;
	senderLocation = "";
	receiverLocation = "";
}

Mails :: Mails(int i, string s, string r)
{
	id = i;
	senderLocation = s;
	receiverLocation = r;
}

void Mails :: setId(int i)
{
	id = i;
}

void Mails :: setSenderLocation(string s)
{
	senderLocation = s;
}

void Mails :: setReceiverLocation(string r)
{
	receiverLocation = r;
}
int Mails :: getId()
{
	return id;
}

string Mails::getSenderLocation()
{
	return senderLocation;
}

string Mails :: getReceiverLocation()
{
	return receiverLocation;
}