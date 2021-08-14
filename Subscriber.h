#pragma once
#include"Library.h"
class Subscriber
{
private:
	
	string type;
	
	string address;
	unsigned long int phone;
	string email;
public:
	string name;
	int id;
	Subscriber();
	Subscriber(int id, string type, string name, string address, unsigned long int phone, string email);

	Subscriber& setId(int ID);
	Subscriber& setType(string TYPE);
	Subscriber& setName(string Name);
	Subscriber& setAddress(string Address);
	Subscriber& setPhone(unsigned long int Phone);
	Subscriber& setEmail(string Email);

	int getId() const;
	string getType() const;
	string getName() const;
	string getAddress() const;
	unsigned long int getPhone() const;
	string getEmail() const;

	void input();
	void output() const;

};

