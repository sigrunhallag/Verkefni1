#include <iostream>
#include "Superhero.h"
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

void get_data();
int main()
{
    cout << "Create a new hero: ";
    get_data();
    cout << endl;

    return 0;
}
void get_data()
{
    ///gera r�� fyrir pl�ssi '\0' aftast � strengnum

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
