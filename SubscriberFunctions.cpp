#include"Console.h"
#include"Subscriber.h"
void addStudent()
{
	Subscriber obj;
	system("cls");


	obj.input();
	ofstream file("subscribers.txt", ios::app | ios::out);
	obj.output();
	cout << "\nDo you want to add more : (y/n)";
	char ch1 = 'y';
	cin >> ch1;
	if (ch1 == 'y' || ch1 == 'Y')
	{

		addStudent();
	}


	file.close();
	cout << "\nRecord is successfully added !";


}
void updateStudent()
{
	Subscriber obj;
	system("cls");
	cout << "\nUpdate existing Student records ";
	int studentid;
	cout << "\n\t\t\tEnter the item ID to EDIT: ";
	cin >> studentid;
	if (checkid1(studentid))
	{
		cout << "\t\t\tItem not found..." << endl;
		char ch[2];
		cout << "\t\t\tEnter any key to continue: ";
		cin >> ch;
		if (ch) updateStudent();
	}
	else
	{
		cout << "\t\t\tStudent Found..Enter the information of Student:";

		obj.id = studentid;
		obj.input();
		string editline, line;
		editline = getidline1(studentid);
		ifstream fin;
		fin.open("subscribers.txt");
		ofstream fout;
		fout.open("Newitem.txt");
		while (getline(fin, line))
		{
			if (line != editline)
			{
				fout << line << endl;
			}
			else
			{
				obj.output();
			}
		}
		fin.close();
		fout.close();
		remove("subscribers.txt");
		rename("Newitem.txt", "subscribers.txt");
		cout << "\t\t\tEdited Succeesfully" << endl;
	}

}
void deleteStudent()
{
	system("cls");
	cout << "\nDELETE Studentt";

	cout << "\t 1. Delete By ID   " << endl;
	cout << "\t 2. Delete By Name" << endl;
	cout << "\t\t\t------------------------------------------" << endl;
	cout << "\t\t\tEnter your choice: ";
	int ch;
	cin >> ch;
	if (ch == 1)
		delete_by_Id();
	if (ch == 2)
		delete_by_Name();

}
void delete_by_Id()
{
	int studentid;
	cout << "\t\t\tEnter the Student ID to delete: ";
	cin >> studentid;
	if (checkid1(studentid) == 0)
	{

		cout << "\t\t\tStudent Record is avalilable....Do you Want to delete it now???(y/n): ";
		char c;
		cin >> c;
		if (c == 'y' || c == 'Y')
		{
			string deleteline, line;
			deleteline = getidline1(studentid);
			ifstream fin;
			fin.open("subscribers.txt");
			ofstream fout;
			fout.open("new.txt");
			while (getline(fin, line))
			{
				if (line != deleteline)
				{
					fout << line << endl;
				}
			}
			fin.close();
			fout.close();
			remove("subscribers.txt");
			rename("new.txt", "subscribers.txt");
			cout << "\t\t\tDeleted Succeesfully" << endl;
			cout << "\t\t\tDo you want to delete more??...(y/n): ";
			char che;
			cin >> che;
			if (che == 'y' || che == 'Y')
				deleteStudent();
			else
				Membermenu();
		}
		else
			deleteStudent();

	}
	else
	{
		cout << "\t\t\tStudent not found..." << endl;
		char ch[2];
		cout << "\t\t\tEnter any key to continue: ";
		cin >> ch;
		if (ch) deleteStudent();
	}
}
void delete_by_Name()
{
	string studentname;
	cout << "\t\t\tEnter the Content Name to delete: ";
	cin >> studentname;
	if (checkname1(studentname) == 0)
	{
		//cout<<"Student_found:";
		cout << "\t\t\tStudent Record is avalilable....Do you Want to delete it now???(y/n): ";
		char c;
		cin >> c;
		if (c == 'y' || c == 'Y')
		{
			string deleteline, line;
			deleteline = getnameline1(studentname);
			ifstream fin;
			fin.open("subscribers.txt");
			ofstream fout;
			fout.open("new.txt");
			while (getline(fin, line))
			{
				if (line != deleteline)
				{
					fout << line << endl;
				}
			}
			fin.close();
			fout.close();
			remove("subscribers.txt");
			rename("new.txt", "subscribers.txt");
			cout << "\t\t\tDeleted Succeesfully" << endl;
			cout << "\t\t\tDo you want to delete more??...(y/n): ";
			char che;
			cin >> che;
			if (che == 'y' || che == 'Y')
				deleteStudent();
			else
				Membermenu();
		}
		else
			deleteStudent();

	}
	else
	{
		cout << "\t\t\tStudent not found..." << endl;
		char ch[2];
		cout << "\t\t\tEnter any key to continue: ";
		cin >> ch;
		if (ch) deleteStudent();
	}

}
void searchstudent()
{
	system("cls");
	cout << "\nSearch Student";

	cout << "\t 1. Search By ID   " << endl;
	cout << "\t 2. Search By Name" << endl;
	cout << "\t\t\t------------------------------------------" << endl;
	cout << "\t\t\tEnter your choice: ";
	int ch;
	cin >> ch;
	if (ch == 1)
	{
		int studentid;
		cout << "\t\t\tEnter the Student ID to search: ";
		cin >> studentid;
		if (checkid1(studentid) == 0)
		{

			cout << "\t\t\tStudent Record is avalilable....: ";
		}
		else
		{

			cout << "\t\t\tStudent not found..." << endl;
			char ch1[2];
			cout << "\t\t\tEnter any key to continue: ";
			cin >> ch1;
			if (ch1) searchstudent();


		}
	}
	else	if (ch == 2)
	{
		string studentname;
		cout << "\t\t\tEnter the Student Name to search: ";
		cin >> studentname;
		if (checkname1(studentname) == 0)
		{
			//cout<<"student_found:";
			cout << "\t\t\t Student Record is avalilable...: ";
		}
		else
		{

			cout << "\t\t\tStudent not found..." << endl;
			char ch1[2];
			cout << "\t\t\tEnter any key to continue: ";
			cin >> ch1;
			if (ch1) searchstudent();


		}

	}
}