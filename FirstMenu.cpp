#include"Console.h"
void FirstMenu()
{
    int ch;
    do {
        cout << "\n\n\t\t\t ****Welcome to Library****";
        cout << "\n\t\t\t\t **M E N U**";
        cout << "\n\n\n\t 1.CONTENT MANAGEMENT SYSTEM ";
        cout << "\n\n\n\t 2.SUSCRIBERS MANAGEMENT SYSTEM ";
        cout << "\n\n\n\t 3.TRANSACTION MANAGEMENT ";
        cout << "\n\n\n\t 0.EXIT";
        cout << "\n\n\n\t  Enter Your Choice In Which Section You Want To Go::";
        cin >> ch;
        switch (ch)
        {
        case 1:Bookmenu();
            break;
        case 2:Membermenu();
            break;
        case 3:TransMenu();
            break;
        default:
            cout << "\ninvalid option! ";
            FirstMenu();
            break;
        }
    } while (ch != 0);
}
