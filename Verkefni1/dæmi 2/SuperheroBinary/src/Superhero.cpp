#include "Superhero.h"

Superhero::Superhero()
{
    name = "";
    age = 0;
    power = 'n';
}
Superhero::Superhero(string name, int age, char power)
{
    this->name = name;
    this->age = age;
    this->power = power;
}
void Superhero::set_name(string name)
{
    this->name = name;

}
void Superhero::set_age(int age)
{
    this->age = age;

}
void Superhero::set_power(char power)
{
    this->power = power;
}
ostream& operator << (ostream& out, const Superhero& superhero)
{
    out << superhero.name;
    out << " (" << superhero.age << "): ";
    if(superhero.power == 'f')
    {
        out << "Flying";
    }
    else if(superhero.power == 'g')
    {
        out << "Giant";
    }
    else if(superhero.power == 'h')
    {
        out << "Hacker";
    }
    else if(superhero.power == 'n')
    {
        out << "None";
    }
    else
    {
        out << "Weakling";
    }
    out << endl;

    return out;
}
istream& operator >> (istream& in, Superhero& superhero)
{
    in >> superhero.name;
    in >> superhero.age;
    in >> superhero.power;

    return in;
}
