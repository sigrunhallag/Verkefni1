#include "Management.h"

using namespace std;
void drawMenu();
int pickMenuItem(int& select);

int main()
{
    int select = 0;
    drawMenu();
    pickMenuItem(select);


    Management manager;

    cin >> manager;
    cout << manager;




    return 0;
}
int pickMenuItem(int& select)
{
    char pick;
    cin >> pick;

    while(!((pick == 'm') | (pick == 'M') | (pick == 's') | (pick == 'S') | (pick == 'k') | (pick == 'K') | (pick == 'd') | (pick == 'D')))
    {
        cout << "Please pick m/s/k/d: ";
        cin >> pick;
    }
    if ((pick == 'm') | (pick == 'M'))
    {
        select = 1;
        return select;
    }
    else if ((pick == 's') | (pick == 'S'))
    {
        select = 2;
        return select;
    }
    else if ((pick == 'k') | (pick == 'K'))
    {
        select = 3;
        return select;
    }
    else if ((pick == 'd') | (pick == 'D'))
    {
        select = 4;
        return select;
    }
    else
    return 0;
}
void drawMenu()
{
    cout << "  _____ _              _____  _                " << endl;
    cout << " |  __ (_)            |  __ \\| |               " << endl;
    cout << " | |__) _ __________ _| |__) | | __ _  ___ ___ " << endl;
    cout << " |  ___/ |_  /_  / _` |  ___/| |/ _` |/ __/ _ \\"<< endl;
    cout << " | |   | |/ / / / (_| | |    | | (_| | (_|  __/" << endl;
    cout << " |_|   |_/___/___\\__,_|_|    |_|\\__,_|\\___\\___|" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Management(m)          |               Sales(s)" << endl;
    cout << "Kitchen(k)             |            Delivery(d)" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "         Please login by typing m/s/k/d        " << endl;
    cout << "m/s/k/d: ";
}
