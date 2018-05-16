#ifndef BACCOUNT_H
#define BACCOUNT_H

class Baccount
{
private:
	double balance;
	int depositsNum=0;
	int withdrNum=0;
	double intRate;
	double service;
public:
	Baccount(double b, double rate)
	{
		balance = b;
		intRate = rate;
	}
	void deposit(double);
	void withdraw(double);
	void calcInt();
	void monthlyProc();
};
#endif
