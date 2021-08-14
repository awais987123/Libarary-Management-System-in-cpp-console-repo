#include "Books.h"
#include"Contents.h"
#include"Library.h"
Books::Books() :Contents()
{

}
Books::Books(string name, string aut, string pub, string _status,string _st, unsigned int no, unsigned int year, unsigned int copy) : Contents(name, aut, pub, _status,_st, no, year, copy) 
{

}
void Books::getdata ()
{
	cout << "Your choosen Category is Book" << endl;
	Contents::getdata();
}
void Books::display () const
{
	cout << "Category is Book" << endl;
	Contents::display();
}

