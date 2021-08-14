#include"Console.h"
int checkid(int t)
{
    
        ifstream fin;
        fin.open("Item.txt");
        string line;
        while (getline(fin, line))
        {
            stringstream sin(line);
            int val;
            sin >> val;
            //cout<<val;
            if (t == val)
                return 0;
            
        

         }
        return 1;
}
string getidline(int t)
{
    ifstream fin;
    fin.open("Item.txt");
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

string getnameline(string t)
{
    ifstream fin;
    fin.open("Item.txt");
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
int checkname(string t)
{
    ifstream fin;
    fin.open("Item.txt");
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
