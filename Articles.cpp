#include "Articles.h"
#include"Contents.h"
#include"Library.h"
Articles::Articles():Contents()
{

}
Articles::Articles(string name1, string aut1, string pub1, string Status1, string ct1, unsigned int no1, unsigned int year1, unsigned int copy1) : Contents(name1, aut1, pub1, Status1,ct1, no1, year1, copy1)
{

}
void Articles::getdata()
{
	cout << "Your choosen Category is Articles  " << endl;
	cout << "Enter the content of Article" << endl;
	Contents::getdata();
}
void Articles::display() const
{
	cout << "Category is Atticle" << endl;
	Contents::display();
}
