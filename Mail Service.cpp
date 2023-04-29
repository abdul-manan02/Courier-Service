#include "Mail Service.h"

MailService :: MailService()
{
	SameDayDelivery = 0;
	OneDayDelivery	= 0;
	UrgentDelivery	= 0;
	RegularDelivery = 0;
	price			= 0;
}

void MailService :: setSameDayDelivery()
{
	SameDayDelivery = 1;
	price = 100;
}

void MailService :: setOneDayDelivery()
{
	SameDayDelivery = 1;
	price = 100; 
}

void MailService :: setUrgentDelivery()
{
	UrgentDelivery = 1;
	price = 120;
}

void MailService :: setRegularDelivery()
{
	RegularDelivery = 1;
	price = 100;
}