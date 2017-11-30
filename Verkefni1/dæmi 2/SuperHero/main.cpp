#include <iostream>
#include "Superhero.h"
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

void get_data();

int main()
{
    char user_input;
    do{
        cout << "Press 'h' if you want to create a hero," << endl;
        cout << "Press 'l' if you want to see the list of all of the heroes." << endl;
        cout << "Press 'q' if you want to quit." << endl;
        cin >> user_input;
        if(user_input == 'h')
        {
            Superhero hero;
            cout << "Enter a hero name: ";
            cin >> hero;
            cout << hero;
            hero.save_superhero(hero);
            cout << endl;
        }
        else if(user_input == 'l')
        {
            ///h�r kemur listinn sem tilheyrir �llum ofurhetjunum
            get_data();
            cout << endl;
        }

    }while(user_input != 'q');

    return 0;
}
void get_data()///ifstream
{
    ifstream fin;
    string strLine;
    fin.open("textfile.txt");
    Superhero hero;
    size_t pos = 0;
    if(fin.is_open())
    {
        while(!fin.eof())
        {
            while(getline(fin,strLine))
            {
                ///bjoggi;45;h
                ///finna sta�setningu � fyrstu ;
                pos = strLine.find(';');
                ///set nafni� fr� fyrsta staki a� ;
                hero.set_name(strLine.substr(0, pos));
                ///bjoggi
                ///Ey�i strengnum sem �g var a� nota
                strLine.erase(0, pos + 1);
                ///45;h
                pos = strLine.find(';');
                ///45;h
                ///c_str: innbyggt fall
                ///atoi breytir streng � int
                ///til a� f� aldurinn
                hero.set_age(atoi(strLine.c_str()));

                strLine.erase(0, pos + 1);

                pos = strLine.find(';');
                ///�arf ekki a� p�la � char h�r af�v�
                ///�a� er b�i� a� ey�a fyrri partinnum af l�nunni
                ///�� te
                hero.set_power(strLine[0]);
                cout << hero << endl ;
            }
        }
        fin.close();
    }

}

