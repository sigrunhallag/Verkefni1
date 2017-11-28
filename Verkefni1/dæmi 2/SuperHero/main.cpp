#include <iostream>
#include "Superhero.h"
#include <fstream>
using namespace std;

void createSomeHeroes()
{

    ofstream fout;
    fout.open("textfile.txt");

    string str;
    ifstream fin;

    fin.open("textfile.txt");
    if(fin.is_open())
    {
        while(!fin.eof())
        {
            getline(fin, str);
            cout << str << endl;
        }
        fin.close();
    }

}
int main()
{
    createSomeHeroes();
    cout << endl;

    return 0;
}
