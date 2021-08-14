#include "Transaction.h"
#include"Subscriber.h"
Transaction::Transaction():ID(), Issue(), Return(), ContentID(0), Fee(0){}
Transaction::Transaction(Subscriber NewID, Date NewIssue, Date NewReturn, int NewConID, int NewFee) : ID(NewID) ,  Issue(NewIssue), Return(NewReturn), ContentID(NewConID), Fee(NewFee) 
{}
void Transaction::ShowOption()
{
	cout << "\n**WelCome to TRANSACTION Management System**" << endl;
	cout << "\n1. Issue Book" << endl;
	cout << "\n2. Return Book" << endl;
	cout << "\n3. Transaction Register" << endl;
	cout << "\n0. Exit" << endl;
	cout << endl;
	cout << "Enter Your Command : ";
}
void Transaction::IssueBook()
{
	
	cout << "Enter Content ID : "; cin >> ContentID;
	cout << "Enetr Issue Date (DD MM YYYY) : ";
	cin >> Issue.Day >> Issue.Month >> Issue.Year;
	cout << "Issued till Date (DD MM YYYY) : ";
	cin >> Return.Day >> Return.Month >> Return.Year;
	cout << "Enter Fee After Due Date : "; cin >> Fee;

	ofstream Borrowing;
	Borrowing.open("Borrowing.txt", ofstream::app);

	Borrowing << ID.id << "\t" << Issue.Day << " " << Issue.Month << " " << Issue.Year << "\t";
	Borrowing << ContentID << "\t" << Return.Day << " " << Return.Month << " " << Return.Year << "\t" << Fee << endl;

	cout << "\n**BOOK ISSUED SUCCESSFULLY**\n" << endl;

	Borrowing.close();
}
void Transaction::ReturnBook()
{
	ID.getId();
	cout << "Enetr Return Date (DD MM YYYY) : ";
	cin >> Return.Day >> Return.Month >> Return.Year;

	cout << "\n**BOOK RETURNED SUCCESSFULLY**\n" << endl;

}
void Transaction::TransactionRegister()
{
	int SubID, ConID;
	Date IssueD, ReturnD;
	ifstream Borrowing;
	Borrowing.open("Borrowing.txt", ifstream::app);

	cout << "Subscriber ID" << "\t" << "Issue Date" << "\t" << "Content ID" << "\t" << "Return Date" << "\t" << "Fee" << endl;
	for (int i = 0; true; i++)
	{
		Borrowing >> SubID >> IssueD.Day >> IssueD.Month >> IssueD.Year;
		Borrowing >> ConID >> ReturnD.Day >> ReturnD.Month >> ReturnD.Year >> Fee;
		cout << SubID << "\t" << "\t" << IssueD.Day << "/" << IssueD.Month << "/" << IssueD.Year << "\t";
		cout << ConID << "\t" << "\t" << ReturnD.Day << "/" << ReturnD.Month << "/" << ReturnD.Year << "\t" << Fee << "-/Rs." << endl;

		if (SubID = --i)
		{
			break;
		}
	}
	cout << "\n**TRANSACTION REGISTER LOADED SUCCESSFULLY**\n" << endl;

	Borrowing.close();
}

