#include<iostream>
#include<iterator> // for iterators 
#include<vector> // for vectors 
using namespace std;

int main(){
    vector <int> vc1; // empty vector of integers
    cout << "The size of the vector is: " << vc1.size() << endl;
    vc1.push_back(74);
    cout << "The size of the vector after inserting 74: " << vc1.size() << endl;
     vc1.push_back(22);
    cout<<vc1.front()<<endl<<vc1.back()<<endl;
    //Iterator
    vector<int>::iterator itr;
    cout<<"The vector elements are : ";
    for(itr=vc1.begin();itr<vc1.end();++itr) {
        cout<< *itr << ' ';
    }
    cout<<endl;

    //inserting using insert()
    vc1.insert (vc1.begin(),56);//inserts at beginning
    cout<<"After inserting 56 at beginning, the vector becomes :";
    for(itr = vc1.begin(); itr != vc1.end(); ++itr) {
        cout << *itr << ' ';
    }
    cout<<endl;

    //Inserting in between using insert()
    vc1.insert (vc1.begin()+3,98);
    cout<<"After inserting 98 at third position, the vector becomes :";
    for(itr=vc1.begin();itr<vc1.end();itr++) {
        cout<<*itr<<" ";
    }
    cout<<endl;

    //Adding elements using iterator
    int sum=0;
    for(itr=vc1.begin();itr<vc1.end();++itr) {
        sum=sum+(*itr);
    }
    cout<<"Sum of elements in the vector : "<<sum<<endl;
    vc1.erase(vc1.begin(),vc1.end());
    cout<<"After clearing all elements, the vector becomes :";
        for(itr=vc1.begin();itr<vc1.end();itr++) {
        cout<<*itr<<" ";
    }


return 0;

}

/*
Vector functions:
-push_back(): adds an element to the end of a vector. It is used when we want to add one or more elements at the end of the vector.
-push_back(): Adds an element to the end of a Vector.
-pop_back(): Removes the last element from the Vector.
-front(): Returns reference to the first element of the Vector.
-back(): Returns reference to the last element of the Vector.
-size(): Returns the number of elements present in the Vector.
-empty(): Checks whether the Vector is empty or not.
          It returns true if the Vector is empty and false otherwise.
-clear(): Clears all the elements from the Vector.
          After calling this function, the size of the Vector will be zero.
-insert(pos,val): Inserts the value 'val' before the element pointed by 'pos'.
                 The value 'val' will be added at the specified position 'pos'.
                 If pos is equal to the size of the Vector then 'val' will be added at the end of the Vector.
-at(): This member function is used to access the element with the given index.
       It throws out_of_range exception if the index is invalid i.e., greater than the size of the Vector.


cbegin() – it refers to the first element of the vector.
cend() – it refers to the theoretical element after the last element of the vector.
rbegin() – it points to the last element of the vector.
rend() – it points to the theoretical element before the first element of the vector.
crbegin() – it refers to the last element of the vector.
crend() – it refers to the theoretical element before the first element of the vector.
max_size() – returns the maximum size the vector can hold.
capacity() – it returns the current capacity of the vector.
*/