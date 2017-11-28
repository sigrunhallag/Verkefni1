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
    fout.open("textfile.txt", ios::binary|ios::app);
    fout.write((char*)(&data), sizeof(Superhero));
    fout.close();

    ///muna að gera ráð fyrir plássi '\0' aftast í strengnum

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
