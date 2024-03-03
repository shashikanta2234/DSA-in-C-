#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream myFile("day2.txt");
    myFile<<"Today is the day 2 of my 3 month DSA challanges. Till now I have completed the basics of C++.\n I have completed Datatypes, string functions, math functions, arrays and OOP. Now learning files.....";
    myFile.close();
    return 0;
}