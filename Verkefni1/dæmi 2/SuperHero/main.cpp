#include <iostream>
#include "Superhero.h"
#include <fstream>
using namespace std;

void createSomeHeroes()
{
    ofstream fout;
    fout.open("textfile.txt");
    Superhero data;
    cin >> data;
    if(fout.is_open())
    {
        fout << data;
        fout.close();
    }

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
    cout << "Enter hero: ";
    createSomeHeroes();

    cout << endl;

    return 0;
}
