#include "Management.h"
using namespace std;

Management::Management()
{
    dough = 0;
    cheese = 0;
    topping = 0;
}

Management::Management(int d, int c, int t)
{
    dough = d;
    cheese = c;
    topping = t;
}


istream& operator  >> (istream& in, Management& management)
{
    in >> management.dough >> management.cheese >> management.topping;
    return in;
}

ostream& operator << (ostream& out, const Management& management)
{
    out << management.dough << management.cheese << management.topping << endl;
    return out;
}
