#pragma once
#include"Library.h"
#include"Subscriber.h"
struct Date
{
	int Day = 0, Month = 0, Year = 0;
};

class Transaction:public Subscriber
{
protected:
	Subscriber ID;
	Date Issue, Return;
	int ContentID, Fee;
public:
	//No Argument
	Transaction();
	//5 Argument
	Transaction(Subscriber NewID, Date NewIssue, Date NewReturn, int NewConID, int NewFee) ;
	//Destructor
	~Transaction() {};

	//Class Functions
	void ShowOption();
	void IssueBook();
	void ReturnBook();
	void TransactionRegister();

};

