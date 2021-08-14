#pragma once
#include"Subscriber.h"
#include"Transaction.h"
#include"Library.h"
#include"Contents.h"
#include<string.h>
#include<string>
void displayFirst();
void checkAdmin();
void FirstMenu();
void Bookmenu();
void addBook();
void updateBook();
void deleteBook();
void delete_by_id();
void delete_by_name();
void searchBook();

void Membermenu();
void addStudent();
void updateStudent();
void deleteStudent();
void delete_by_Id();
void delete_by_Name();
void searchstudent();

void TransMenu();
//void bookissue();
//void bookreturn();
//void displaytrans();
int checkid(int t);
string getidline(int t);
string getnameline(string t);
int checkname(string t);
int checkid1(int t);
string getidline1(int t);
string getnameline1(string t);
int checkname1(string t);
