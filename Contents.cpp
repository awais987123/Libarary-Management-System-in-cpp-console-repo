#include "Contents.h"
#include"Library.h"

Contents::Contents()
{
	ofstream file("Item.txt", ios::out | ios::app);
	file << setw(5) << "ItemID" << setw(10) << "LibraryID" << setw(11) << "Category" << setw(14) << "Title" << setw(17) << "Author" << setw(20) << "Publisher" << setw(23) << "Production Year" << setw(26) << "Status" << setw(29) << "Copies" << endl;
	file.close();
	Title = "N/A";
	Author = "N/A";
	Publisher = "N/A";
	Status = "N/A";
	Item_ID = 0;
	Production_Year = 0;
	Copies = 0;

}
Contents::Contents(string title, string author, string publisher, string status,  int id, unsigned int p_y, unsigned int copy, unsigned int lid)
{
	this->Title = title;
	this->Author = author;
	this->Publisher = publisher;
	this->Status = status;
	this->Item_ID = id;
	this->Production_Year = p_y;
	this->Copies = copy;

}
bool Contents::validAuthor() const
{
	bool correct = false;

	for (int i = 0; i <= 100; i++) {

		if ((Author[i] >= 65 && Author[i] <= 90) || (Author[i] >= 97 && Author[i] <= 122) || Author[i] == 32) {
			correct = true;
		}
		else {
			return false;
		}
	}

	return correct;
}

bool Contents::validPublisher() const
{
	bool correct = false;

	for (int i = 0; i < 100; i++) {

		if ((Publisher[i] >= 65 && Publisher[i] <= 90) || (Publisher[i] >= 97 && Publisher[i] <= 122) || Publisher[i] == 32) {
			correct = true;
		}
		else {
			return false;
		}
	}

	return correct;
}

Contents& Contents::setTitle(string title)
{
	this->Title = title;
	return *this;
}
Contents& Contents::setAuthor(string author)
{
	this->Author = author;
	return *this;
}
Contents& Contents::setpublisher(string publisher)
{
	this->Publisher = publisher;
	return *this;
}
Contents& Contents::setStatus(string status)
{
	this->Status = status;
	return *this;
}
Contents& Contents::setID( int Id)
{
	this->Item_ID = Id;
	return *this;
}
Contents& Contents::setproYear(unsigned int p_y)
{
	this->Production_Year = p_y;
	return *this;
}
Contents& Contents::setcopy(unsigned int copy)
{
	this->Copies = copy;
	return *this;
}

string Contents::getTitle() const
{
	return this->Title;
}
string Contents::getAuthor() const
{
	return this->Author;
}
string Contents::getStatus() const
{
	return this->Status;
}
string Contents::getPublisher()const
{
	return this->Publisher;
}
 int Contents::getID() const
{
	return this->Item_ID;
}
unsigned int Contents::getProYear()const
{
	return this->Production_Year;
}
unsigned int Contents::getcopies()const
{
	return this->Copies;
}
void Contents::getdata()
{
	cout << "\nEnter the item ID          := "; cin >> Item_ID;
	cout << "\nEnter the Title            := "; cin.ignore(); getline(cin, Title);
	cout << "\nEnter the Author           := "; getline(cin,Author );
	cout << "\nEnter the Publisher        := "; getline(cin, Publisher);
	cout << "\nEnter the Production	Year  := "; cin >> Production_Year; cin.ignore();
	cout << "\nEnter the Status           := ";  getline(cin, Status);
	cout << "\nEnter the Copies           := "; cin >> Copies;
}
void Contents::display() const
{
	ofstream file("Item.txt", ios::out | ios::app);
	
	file << setw(5) << Item_ID << setw(10) << "1" << setw(11) << Category << setw(14) << Title << setw(17) << Author << setw(20) << Publisher << setw(23) << Production_Year << setw(26) << Status << setw(29) << Copies << endl;
	file.close();
}
