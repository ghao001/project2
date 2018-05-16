#include "Baccount.h"
//implement of deposit
void Baccount::deposit(double in)
{
	balance += in;
	depositsNum++;
}

void Baccount::withdraw(double in)
{
	balance -= in;
	withdrNum++;
}

void Baccount::calcInt()
{
	double monthRate = intRate / 12;
	balance *= (1 + monthRate);
}

void Baccount::monthlyProc()
{
	balance -= service;
	calcInt();
	depositsNum = 0;
	withdrNum = 0;
}