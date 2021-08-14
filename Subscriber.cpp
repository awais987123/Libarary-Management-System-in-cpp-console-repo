#include "Subscriber.h"
#include"Library.h"
Subscriber::Subscriber()
{
	id = 0;
	type = "0";
	name = "0";
	address = "0";
	phone = 0;
	email = "0";
}

Subscriber::Subscriber(int id, string type, string name, string address, unsigned long int phone, string email)
{
	this->id = id;
	this->type = type;
	this->name = name;
	this->address = address;
	this->phone = phone;
	this->email = email;
}

Subscriber& Subscriber::setId(int ID)
{
	this->id = ID;
	return *this;
}
Subscriber& Subscriber::setType(string TYPE)
{
	this->type = TYPE;
	return *this;
}
Subscriber& Subscriber::setName(string Name)
{
	this->name = Name;
	return *this;
}
Subscriber& Subscriber::setAddress(string Address)
{
	this->address = Address;
	return *this;
}
Subscriber& Subscriber::setPhone(unsigned long int Phone)
{
	this->phone = Phone;
	return *this;
}
Subscriber& Subscriber::setEmail(string Email)
{
	this->email = Email;
	return *this;
}


int Subscriber::getId() const
{
	return this->id;
}
string Subscriber::getType() const
{
	return this->type;
}
string Subscriber::getName() const
{
	return this->name;
}
string Subscriber::getAddress() const
{
	return this->address;
}
unsigned long int Subscriber::getPhone() const
{
	return this->phone;
}
string Subscriber::getEmail() const
{
	return this->email;
}


void Subscriber::input()
{
	cout << "\nEnter the ID\n"; cin >> id; cin.ignore();
	cout << "\nEnter the Type\n"; getline(cin, type); 
	cout << "\nEnter the Name\n"; getline(cin,name);
	cout << "\nEnter the Address\n"; getline(cin, address);
	cout << "\nEnter the Phone number\n";  cin >> phone; cin.ignore();
	cout << "\nEnter the Email Address\n"; getline(cin,email);
}

void Subscriber::output() const
{
	ofstream file("subscribers.txt", ios::out | ios::app);
	file << setw(5) << "SubscriberiD" << setw(10) << "Type" << setw(11) << "Name" << setw(14) << "address" << setw(17) << "Phone" << setw(20) << "Email" << endl;
	file << setw(5) << id << setw(10) << type << setw(11) << name << setw(14) << address << setw(17) << phone << setw(20) << email << endl;
	file.close();
}



