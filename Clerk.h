#pragma once
#ifndef CLERK_H_
#define CLERK_H_
#include "Postal Worker.h"

class Clerk : public PostalWorker
{
	private:
		int noOfClerks;
	public:
		Clerk();
};
#endif // !CLERK_H_
