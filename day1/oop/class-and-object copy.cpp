#include <iostream>
using namespace std;
int main()
{
    // Creating class
    class car
    {
    public:
        int modelNo;
        string brand;
    };

    // Creating object
    car myCar1,myCar2;
    myCar1.modelNo=25;
    myCar1.brand="BMW";
    myCar2.modelNo=28;
    myCar2.brand="Lambo";
    cout << "Details of Car 1:\nModel Number :"<<myCar1.modelNo<<"\nBrand :"<<myCar1.brand<<endl;
    cout << "\nDetails of Car  2:\nModel Number :"<<myCar2.modelNo<<"\nBrand :"<<myCar2.brand;

    return 0;
}