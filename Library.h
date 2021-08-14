#pragma once
//******************************
//********HEADER FILES**********
#include<iostream>
#include<conio.h>
#include<string.h>
#include<fstream>
#include<string>
#include<stdio.h>
#include<process.h>
#include<iomanip>
#include <windows.h>
#include<string>
#include<sstream>
using namespace std;
//***********************
//**BASIC CLASS FOR LIBRARY
//************************

class Library
{
//**********FIELDS********************
protected:
	unsigned int LibraryID;
private:
	char choice;
public:
	//************METHODS**************
	//=========Constructor======.
	Library ();                       //Default constructor
	Library (unsigned int id, char c);//Parameterized constructor
	
	//=======Setter Funnctions==
	Library& setchoice      (char c);
	Library& setLibraryID (unsigned int id);
	//=======Getter========
	unsigned int getLibraryID() const;
	char         getchoice()    const;
	//==========Function(input/ouutput)===
	//input function
	void     getdata();
	void    getLibrary();
	//output function
	void display() const;
	void Libraryname();
	void getId();

};

