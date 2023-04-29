#pragma once
#ifndef ACCOUNTOFFICER_H_
#define ACCOUNTOFFICER_H_
#include "Postal Worker.h"

class AccountOfficer : public PostalWorker
{
	private:
		int noOfAccountOfficers;
	public:
		AccountOfficer();
};
#endif // !ACCOUNTOFFICER_H_
