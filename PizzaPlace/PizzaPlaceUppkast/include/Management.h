#ifndef MANAGEMENT_H
#define MANAGEMENT_H
#include<iostream>
#include<fstream>
using namespace std;

class Management
{
    private:
        int dough;
        int sauce;
        int cheese;
        int topping;
    public:
        Management();
        Management(int d, int s, int c, int t);
/*      availableItems();
        editDoughTypes();
        sauceTypes();
        cheeseTypes();
        toppingTypes();
*/      friend istream& operator >> (istream& in, Management& management);
        friend ostream& operator << (ostream& out, const Management& management);

};

#endif // MANAGEMENT_H
