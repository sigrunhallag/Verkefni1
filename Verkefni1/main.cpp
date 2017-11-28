#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string str;
    ifstream fin;

    fin.open("textFile.txt");
    if (fin.is_open())
    {
        int counter = 0;

        while(counter < 10)
        {
            getline(fin, str);
            cout << str << endl;
            counter++;
        }

        char yN;


        counter = 0;
        while(!(yN == 'n' || yN == 'N' || fin.eof()))
        {
            cout << "Continue? (y/n)" << endl;
            cin >> yN;

            int upper = 20;
            if(yN == 'y' || yN == 'Y')
            {
                counter = upper - 10;
                while(counter < upper && !fin.eof())
                {
                    getline(fin, str);
                    cout << str << endl;
                    counter++;
                }

                upper =+ 10;

            }
        }

        fin.close();
    }
    else
    {
        cout << "Unable to read from file!" << endl;
    }

    return 0;
}
