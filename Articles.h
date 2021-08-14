#pragma once
#include "Contents.h"
#include"Library.h"
class Articles :   public Contents
{
public:
	//========Constructors==========
	Articles();//default constructor
	Articles(string name1, string aut1, string pub1, string Status1,string ct1, unsigned int no1, unsigned int year1, unsigned int copy1);//parameterized consteructor
//=========Function (input/output)=====
	void getdata();
	void display() const;
};

