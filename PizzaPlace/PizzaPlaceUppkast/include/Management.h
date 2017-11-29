#ifndef MANAGEMENT_H
#define MANAGEMENT_H
#include<iostream>
using namespace std;

class Management
{
    private:
        int dough;
        int cheese;
        int topping;
    public:
        Management();
        Management(int d, int c, int t);
        friend istream& operator >> (istream& in, Management& management);
        friend ostream& operator << (ostream& out, const Management& management);

};

#endif // MANAGEMENT_H
