#pragma once
#include "Contents.h"
#include"Library.h"
class DigitalMedia :   public Contents
{
public:
	//======Constructors=====
	DigitalMedia();//Default constructor
	DigitalMedia(string name2, string aut2, string pub2, string Status2,string st2, unsigned int no2, unsigned int year2, unsigned int copy2);//parameterized constructor
//=========Functions (input/output)======
	void getdata();
	void display() const;

};

