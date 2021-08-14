#include"Console.h"
int checkid1(int t)
{
    ifstream fin;
    fin.open("subscribers.txt");
    string line;
    while (getline(fin, line))
    {
        stringstream sin(line);
        int val;
        sin >> val;
         if (t == val)
            return 0;



    }
    return 1;
}
string getidline1(int t)
{
    ifstream fin;
    fin.open("subscribers.txt");
    string line;
    while (getline(fin, line))
    {
        stringstream sin(line);
        int val;
        sin >> val;
        if (t == val) return line;
    }
    return line;

}
string getnameline1(string t)
{
    ifstream fin;
    fin.open("subscribers.txt");
    string line;
    while (getline(fin, line))
    {
        stringstream sin(line);
        int val;
        sin >> val;
        string dummy;
        sin >> dummy;
        string name;
        sin >> name;
        if (t == name) return line;

    }
    return line;
}
int checkname1(string t)
{
    ifstream fin;
    fin.open("subscribers.txt");
    string line;
    while (getline(fin, line))
    {
        stringstream sin(line);
        int val;
        sin >> val;
        string dummy;
        sin >> dummy;
        string name;
        sin >> name;
        if (t == name) return 0;
    }
    return 1;
}
