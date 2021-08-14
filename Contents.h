#pragma once
#include "Library.h"
class Contents
{

protected:
	string Title, Author, Publisher, Status;
	
unsigned int  Production_Year, Copies;


public:
	string  Category;
	int Item_ID;

	//*************Constructor************
	Contents();   //default constructor
	Contents(string title, string author, string publisher, string status,  int id = 0, unsigned int p_y = 0, unsigned int copy = 0, unsigned int lid = 0);//parameterize constructor
	//************Vaalidation Function************
	bool validAuthor()    const;
	bool validPublisher() const;
	

	// ========== Setters ==========

	Contents& setTitle(string title);
	Contents& setAuthor(string author);
	Contents& setStatus(string status);
	Contents& setpublisher(string publisher);
	Contents& setID( int Id);
	Contents& setproYear(unsigned int p_y);
	Contents& setcopy(unsigned int copy);
	// ========== GETTER ==========

	string       getTitle()    const;
	string       getAuthor()   const;
	string       getStatus()   const;
	string       getPublisher()const;
	int getID()       const;
	unsigned int getProYear()  const;
	unsigned int getcopies()   const;
	//=========GETDATA FUNCTION=====
	void getdata();
	//==========Display FUNCTION====
	void display() const;
	

};