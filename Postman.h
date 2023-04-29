#pragma once
#ifndef POSTMAN_H_
#define POSTMAN_H_
#include "Postal Worker.h"

class Postman : public PostalWorker
{
	private:
		int noOfPostmen;
	public:
		Postman();
};

#endif // !POSTMAN_H_
