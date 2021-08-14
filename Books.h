#pragma once
#include "Contents.h"
#include"Library.h"

class Books :    public Contents
{
public:
	//==Constructors=====
	Books();//DEFAULT CONSTRUCTORS
	Books(string name, string aut, string pub, string _tatus,string _st, unsigned int no, unsigned int year, unsigned int copy );//PARAMETERIZED CONSTRUCTORS

	//========FUNCTIONS(INPUT/OUTPUT)====
	void getdata();
	void display() const;

};

