#include"Console.h"


    void Membermenu()
    {
        int ch1;
        do {
            cout << "\n\n*******\t M E N U \t*******";
            cout << "\n\n\t1.Add A Member";
            cout << "\n\n\t2.Update A Member Details";
            cout << "\n\n\t3.Delete A Member from Library";
            cout << "\n\n\t4.Search A Member Of Library";
            cout << "\n\n\t0.Exit....";

            cout << "\n\n\nEnter your choice what do you want to do" << endl;
            cin >> ch1;
            switch (ch1)
            {
            case 1:addStudent();   break;
            case 2: updateStudent(); break;
            case 3: deleteStudent(); break;
            case 4: searchstudent(); break;
            case 0:break;
            default:
                cout << "\nInvalid Option";
                Membermenu(); break;
            }
        } while (ch1 != 0);
    }

