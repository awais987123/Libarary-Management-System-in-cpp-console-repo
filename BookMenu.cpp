#include"Console.h"
void Bookmenu()
{
    int ch;
    do {
        cout << "\n\n*******\t M E N U \t*******";
        cout << "\n\n\t1.Add    A Book/Artical/DigitalMedia";
        cout << "\n\n\t2.Update A Book/Artical/DigitalMedia";
        cout << "\n\n\t3.Delete A Book/Artical/DigitalMedia";
        cout << "\n\n\t4.Search A Book/Artical/DigitalMedia";
       cout << "\n\n\t0.Exit....";

        cout << "\n\n\nEnter your choice what do you want to do::" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:addBook();   break;
        case 2: updateBook(); break;
        case 3: deleteBook(); break;
         case 4: searchBook(); break;
         case 0:break;
        default:
            cout << "\nInvalid Option";
            Bookmenu(); break;
        }
    } while (ch != 0);
}
