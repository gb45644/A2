#include <iostream>
#include <fstream>
#include <string>
using namespace std;



int main() {
ifstream loadfile;

struct lab1
    {
    int first;
    char second;
    float third;
    };
loadfile.open("inlab01.txt");
    if (loadfile.fail()) {
        cout << "fail";
    }
    else{
        string description;
        while (loadfile>>description)
            {
            cout << description << endl;
            }
    }
    return 0;
}
