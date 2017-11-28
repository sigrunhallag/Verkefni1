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

        while (!fin.eof() && counter < 10)
        {
            getline(fin, str);
            cout << str << endl;
            counter++;

            if (counter == 10)
            {
                char yN;
                cout << "Continue (y/n): ";
                cin >> yN;
                if (yN == 'y' || yN == 'Y')
                {
                    counter = 0;
                }
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
