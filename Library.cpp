#include "Library.h"
Library::Library() {
	LibraryID = 0;
	choice = '0';
}
Library::Library(unsigned int id, char c) {
	this->LibraryID = id;
	this->choice = c;
}
Library& Library::setLibraryID(unsigned int id)
{
this->	LibraryID = id;
return *this;
}
Library& Library::setchoice(char c)
{
	this->choice = c;
	return *this;
}
char Library::getchoice() const
{
	return this->choice;
}
unsigned int Library:: getLibraryID() const
{
	 return this->LibraryID;

}
void Library::getId()
{
	cout << "\nEnter the Library Id         := "; cin >> LibraryID;
}
void Library::getdata()
{
	cout << "\n\n\tChoose the Library \n";
	cout << "\n\n 1: Main Campus Library";
	cout << "\n\n 2: CS Library";
	cout << "\n\n 3: Engineering Library";
	cout << "\n\n 0: Exist\n";
	cin >> choice;
}

void Library::Libraryname()
{
	switch (choice) {
	case '1': {
		cout << "You entered in main Library\n";
		break;
	}
	case '2': {
		cout << "You entered in CS Library\n";
		break;
	}
	case '3': {
		cout << "You entered in Engineeng Library\n";
		break;
	}
	case '0':
		break;
	default: {
		cout << "Please enter the valid libraryId\n";
		Library::getdata();
		break;
	}

	}
	if (choice == '1')
		LibraryID = 1;
	if (choice == '2')
		LibraryID = 2;
	if (choice == '3')
		LibraryID = 3;
}
void Library::display() const
{
	cout << "LibraryID : " << LibraryID << endl;
}
	

	

		