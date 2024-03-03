#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream readFile("day2.txt");
    string line;
    while (getline(readFile,line))
    {
        cout<<line;
    }

    readFile.close();
    return 0;

}