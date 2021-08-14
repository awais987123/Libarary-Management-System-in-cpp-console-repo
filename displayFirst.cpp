#include"Console.h"
void displayFirst()
{
    for (int i = 0; i < 18; i++)
    {
        system("CLS");
        system("color 0B");

        {
            for (int j = 1; j < i; j++)
            {
                cout << "\n";
            }
        }
        cout << "\t--------------------------------------------------------------------";
        cout << "\n\t||***********************LIBRARY MANGEMENT SYSTEM******************||";
        cout << "\n\t--------------------------------------------------------------------" << endl;
        cout << "                             --------------------------" << endl;
        cout << "                             ||*****ROLL NUMBERS*****||" << endl;
        cout << "                             --------------------------" << endl;
        cout << "                          ---------------------------------" << endl;
        cout << "                          |2019-CS-127       || M.Awais |" << endl;
        cout << "                          |2019-CS-125       ||M.Amir  |" << endl;
        cout << "                          |2019-CS-129       ||M.Hamza |" << endl;
        cout << "                          |2019-CS-144       ||M.Noroz |" << endl;
        cout << "                          |2019-CS-138       ||M.Umair |" << endl;
        cout << "                           ---------------------------------" << endl;
        cout << "                           ||*****Submitted to*****||" << endl;
        cout << "                            ||***Sir Usman Asghar***||" << endl;
        Sleep(25);
    }
    Beep(3000, 500);
    Sleep(10);
    Beep(2000, 1000);
    _getch();
    system("cls");

}
