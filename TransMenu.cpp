#include"Console.h"
#include"Transaction.h"
void TransMenu()
{
    int ch1;
    do
    {
        system("cls");
        cout << "\n\n\t\t\t\t****TRANSACTION MANAGEMENT SYSTEM****";
        cout << "\n\n\t\t\t1.Issuing A Book";
        cout << "\n\n\t\t\t2.Return A Book";
        cout << "\n\n\t\t\t3.Display Transaction Register";
        cout << "\n\n\t\t\t0.Exit";
        cout << "\n\n\t\tEnter the choice what you want to do";
        cin >> ch1;

		Transaction Obj;
		int Option;

		//Input Section For Giving Command to The System
		Obj.ShowOption();
		cin >> Option;
		cout << endl;

		//Command Handling Section
		switch (Option)
		{
		case 0:
		{
			cout << "\n**SYSTEM ENDED SUCCESSFULLY**\n" << endl;
			break;
		}
		case 1:
		{
			cout << "\n**ISSUE A BOOK**\n" << endl;
			Obj.IssueBook();
			cout << endl;
			break;
		}
		case 2:
		{
			cout << "\n**RETURN A BOOK**\n" << endl;
			Obj.ReturnBook();
			cout << endl;
			break;
		}
		case 3:
		{
			cout << "\n**TRANSACTION RECORD**\n" << endl;
			Obj.TransactionRegister();
			cout << endl;
			break;
		}
		default:
		{
			break;
		}
		}
    } while (ch1 != 0);
}
