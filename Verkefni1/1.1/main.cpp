#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream fout;
    string line;
    
    fout.open("textFile.txt", ios::app);
    getline(cin, line);
    
    while(line[0] != '\\')
    {
        fout << line << endl;
        getline(cin, line);
    }

    fout.close();
    return 0;
}
