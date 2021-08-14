#include"Console.h"
void checkAdmin()
{
    system("cls");
    int i;
    char UserID[10], ch1, UserPassword[10], AdminID[10] = "admin", AdminPassword[10] = "admin";

    do
    {
        cout << "\n\n\tEnter the admin Details";
        cout << "\n\n\n\t\t\tEnter Userid :";
        cin >> UserID;
        cout << "\n\t\t\tEnter Passcode(5 Characters):";
        for (i = 0; i < 5; i++)
        {
            UserPassword[i] = _getch();
            cout << "*";
        }
        UserPassword[i] = '\0';

        if (!strcmp(UserPassword, AdminPassword) && !strcmp(UserID, AdminID))
        {
            cout << "\n\n\t\t You have been succesfully logged in......";
            FirstMenu();

            break;
        }
        else
        {
            cout << "\n\n\t\t Password entered is incorrect........";
        }
        cout << "\n\n\t\t Do you want to try again \n\ny:YES\n\nn:NO.....??";
        cin >> ch1;
    } while (ch1 == 'y');


}
