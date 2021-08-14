#include"Console.h"
void addBook()
{
	Contents obj;
	system("cls");
	cout << "\nYou want to add:";
	cout << "\n1.BOOK";
	cout << "\n2.Artical";
	cout << "\n3.Digital Media";
	cout << "\n0.Exit";
	int ch;
	cin >> ch;
	switch (ch)
	{
	case 1:obj.Category = "Book"; break;
	case 2:obj.Category = "Artical"; break;
	case 3:obj.Category = "Digital Media"; break;
	case 0:Bookmenu(); break;
	default: Bookmenu(); break;
	}
	
	obj.getdata();
	ofstream file("Item.txt", ios::app | ios::out);
	obj.display();
	cout << "\nDo you want to add more : (y/n)";
	char ch1='y';
	cin >> ch1;
	if (ch1 == 'y' || ch1 == 'Y')
	{

		addBook();
	}
		
	
	file.close();
	cout << "\nRecord is successfully added !";


}
void updateBook()
{
	Contents obj;
	system("cls");
	cout << "\nUpdate existing record  records ";
	int bookid;
	cout << "\n\t\t\tEnter the item ID to EDIT: ";
	cin >> bookid;
	if (checkid(bookid))
	{
		cout << "\t\t\tItem not found..." << endl;
		char ch[2];
		cout << "\t\t\tEnter any key to continue: ";
		cin >> ch;
		if (ch) updateBook();
	}
	else
	{
		cout << "\t\t\tBook Found..Enter the information of Book:";
		cout << "\nYou want to add:";
		cout << "\n1.BOOK";
		cout << "\n2.Artical";
		cout << "\n3.Digital Media";
		cout << "\n0.Exit";
		int ch;
		cin >> ch;
		switch (ch)
		{
		case 1:obj.Category = "Book"; break;
		case 2:obj.Category = "Artical"; break;
		case 3:obj.Category = "Digital Media"; break;
		case 0:Bookmenu(); break;
		default: Bookmenu(); break;
		}
		
		obj.Item_ID = bookid;
		obj.getdata();
		string editline, line;
		editline = getidline(bookid);
		ifstream fin;
		fin.open("Item.txt");
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
				obj.display();
							}
		}
		fin.close();
		fout.close();
		remove("Item.txt");
		rename("Newitem.txt", "Item.txt");
		cout << "\t\t\tEdited Succeesfully" << endl;
	}

	}
void deleteBook()
{
	system("cls");
	cout << "\nDELETE Content";

	cout << "\t 1. Delete By ID   " << endl;
	cout << "\t 2. Delete By Name" << endl;
	cout << "\t\t\t------------------------------------------" << endl;
	cout << "\t\t\tEnter your choice: ";
	int ch;
	cin >> ch;
	if (ch == 1)
		delete_by_id();
	if (ch == 2)
	c	delete_by_name();

}
void delete_by_id()
{
	int bookid;
	cout << "\t\t\tEnter the Content ID to delete: ";
	cin >> bookid;
	if (checkid(bookid) == 0)
	{
		
		cout << "\t\t\tContent Record is avalilable....Do you Want to delete it now???(y/n): ";
		char c;
		cin >> c;
		if (c == 'y' || c == 'Y')
		{
			string deleteline, line;
			deleteline = getidline(bookid);
			ifstream fin;
			fin.open("Item.txt");
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
			remove("Item.txt");
			rename("new.txt", "Item.txt");
			cout << "\t\t\tDeleted Succeesfully" << endl;
			cout << "\t\t\tDo you want to delete more??...(y/n): ";
			char che;
			cin >> che;
			if (che == 'y' || che == 'Y')
				deleteBook();
			else
				Bookmenu();
		}
		else
			deleteBook();

	}
	else
	{
		cout << "\t\t\tContent not found..." << endl;
		char ch[2];
		cout << "\t\t\tEnter any key to continue: ";
		cin >> ch;
		if (ch) deleteBook();
	}
}
void delete_by_name()
{
	string bookname;
	cout << "\t\t\tEnter the Content Name to delete: ";
	cin >> bookname;
	if (checkname(bookname) == 0)
	{
		//cout<<"Book_found:";
		cout << "\t\t\tContent Record is avalilable....Do you Want to delete it now???(y/n): ";
		char c;
		cin >> c;
		if (c == 'y' || c == 'Y')
		{
			string deleteline, line;
			deleteline = getnameline(bookname);
			ifstream fin;
			fin.open("Item.txt");
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
			remove("Item.txt");
			rename("new.txt", "book.txt");
			cout << "\t\t\tDeleted Succeesfully" << endl;
			cout << "\t\t\tDo you want to delete more??...(y/n): ";
			char che;
			cin >> che;
			if (che == 'y' || che == 'Y')
				deleteBook();
			else
				Bookmenu();
		}
		else
			deleteBook();

	}
	else
	{
		cout << "\t\t\tContent not found..." << endl;
		char ch[2];
		cout << "\t\t\tEnter any key to continue: ";
		cin >> ch;
		if (ch) deleteBook();
	}

}
void searchBook()
{
	system("cls");
	cout << "\nSearch Content";

	cout << "\t 1. Search By ID   " << endl;
	cout << "\t 2. Search By Name" << endl;
	cout << "\t\t\t------------------------------------------" << endl;
	cout << "\t\t\tEnter your choice: ";
	int ch;
	cin >> ch;
	if (ch == 1)
	{
		int bookid;
		cout << "\t\t\tEnter the Content ID to search: ";
		cin >> bookid;
		if (checkid(bookid) == 0)
		{

			cout << "\t\t\tContent Record is avalilable....: ";
		}
		else
		{
	
		cout << "\t\t\tContent not found..." << endl;
		char ch1[2];
		cout << "\t\t\tEnter any key to continue: ";
		cin >> ch1;
		if (ch1) searchBook();
	

		}
	}
	else	if (ch == 2)
	{
		string bookname;
		cout << "\t\t\tEnter the Content Name to search: ";
		cin >> bookname;
		if (checkname(bookname) == 0)
		{
			//cout<<"Book_found:";
			cout << "\t\t\t Content Record is avalilable...: ";
		}
		else
		{

			cout << "\t\t\tContent not found..." << endl;
			char ch1[2];
			cout << "\t\t\tEnter any key to continue: ";
			cin >> ch1;
			if (ch1) searchBook();


		}

	}
}
