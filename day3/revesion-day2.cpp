#include <iostream>
#include<fstream>
using namespace std;
class Building
{
private:
    int height, area;

public:
    void setBuilding(int h, int a)
    {
        height = h;
        area = a;
    }
    void getBuilding()
    {
        cout << "Height : " << height << endl;
        cout << "Area : " << area << endl;
    }
};

class tallBuilding : public Building
{
public:
    int floor = 50;
};

class smallBuilding : public Building
{
public:
    int floor = 10;
};
class mediumBuilding : public Building
{
public:
    int floor = 30;
};
int main()
{
    Building b1;
    b1.setBuilding(5, 500);
    b1.getBuilding();
    cout << "\n";
    smallBuilding sb1;
    sb1.setBuilding(2, 300);
    mediumBuilding mb1;
    mb1.setBuilding(5, 500);
    tallBuilding tb1;
    tb1.setBuilding(15, 2000);
    cout << "\nFloor of Small building is : " << sb1.floor << endl;
    sb1.getBuilding();
    cout << "\nFloor of Medium building is : " << mb1.floor << endl;
    tb1.getBuilding();
    cout << "\nFloor of Tall building is : " << mb1.floor << endl;
    mb1.getBuilding();
    try{
        int ar;
        cout << "\nEnter Area of the Building : ";
        cin>>ar;
        if(ar>0 && ar<200){
            cout<<"\nArea is too small."<<endl;
        }else if (ar>=200 && ar<1000) {
            cout << "\nTArea is medium."<<endl;
        }else if(ar>=1000){}
        else{
            throw(ar);
        }
    }catch(int ar){
        cout<<"\nError! Invalid input."<<endl;
        cout<<"\nArea cannot be negative!"<<endl;
        cout<<ar<<endl;
    }

    // Flies
    ofstream file1("file1.txt");
    file1<<"Revision of day two is done....";
    file1.close();

    ifstream fileRead("file1.txt");
    string str;
    while(getline(fileRead, str)){
        cout<<str;
    }
    fileRead.close();
    return 0;
}