#ifndef SUPERHERO_H
#define SUPERHERO_H
#include <cstring>
#include <iostream>
using namespace std;

class Superhero
{
public:
    Superhero();
    Superhero(string name, int age, char power);
    void set_name(string name);
    void set_age(int age);
    void set_power(char power);
    friend ostream& operator << (ostream& out, const Superhero& superhero);
    friend istream& operator >> (istream& in, Superhero& superhero);

private:
    string name;
    int age;
    char power;

};


#endif // SUPERHERO_H
