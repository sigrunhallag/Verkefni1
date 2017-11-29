#include "Management.h"
using namespace std;

Management::Management()
{
    dough = 0;
    cheese = 0;
    topping = 0;
}

Management::Management(int d, int s, int c, int t)
{
    dough = d;
    sauce = s;
    cheese = c;
    topping = t;
}

/*Management::editDoughTypes()
{
    fin.open("doughTypes.txt")
}*/

istream& operator  >> (istream& in, Management& management)
{
    in >> management.dough >> management.sauce >> management.cheese >> management.topping;
    return in;
}

ostream& operator << (ostream& out, const Management& management)
{
    out << management.dough << management.sauce << management.cheese << management.topping << endl;
    return out;
}
