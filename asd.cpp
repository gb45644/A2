#include <iostream>
#include <fstream>
#include <cstdio>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() 
{
    clock_t start;
    double duration;
    int N;
    
    start = clock();
    ifstream infile("inlab01.txt");
    
    if(infile.fail()){
        cout <<"fail"<<endl;
        exit(1);
    }
    else{
        string s;
        while(infile>>s){
            cout << s <<endl;
    }
    }
    
    char testowy = 'A' + (rand() % 26);
    cout << testowy << endl;  
    int testowy2 = rand() % -1000 + 10000;
    cout << testowy2 << endl;  
    
    struct lab01 {
        int first = rand() % -1000 + 10000;
        char second;
        float third;
    }; 
   
    duration = (clock() - start)/(double) CLOCKS_PER_SEC;
    cout<<duration<<endl;
    
    return 0;
}
