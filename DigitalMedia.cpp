#include "DigitalMedia.h"
#include"Contents.h"
#include"Library.h"
DigitalMedia::DigitalMedia():Contents()
{

}
DigitalMedia::DigitalMedia(string name2, string aut2, string pub2, string Status2,string st2, unsigned int no2, unsigned int year2, unsigned int copy2) : Contents(name2, aut2, pub2, Status2,st2, no2, year2, copy2)
{

}
void DigitalMedia::getdata()
{
	cout << "Your choosen Category is Digital media" << endl;
	cout << "Enter the content of Digital media" << endl;
	Contents::getdata();
}
void DigitalMedia::display() const
{
		cout << "Category is Digital media" << endl;
		Contents::display();
}
