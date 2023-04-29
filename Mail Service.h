#pragma once
#ifndef MAILSERVICE_H_
#define MAILSERVICE_H_

class MailService
{
	protected:
		bool SameDayDelivery;
		bool OneDayDelivery;
		bool UrgentDelivery;
		bool RegularDelivery;
		int price;
	public:
		MailService();
		void setSameDayDelivery();
		void setOneDayDelivery();
		void setUrgentDelivery();
		void setRegularDelivery();
};
#endif // ! MAILSERVICE_H_
