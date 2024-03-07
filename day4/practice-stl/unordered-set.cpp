#include<iostream>
#include<iterator>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set <int> s1;
    //insert elements in the set
    s1.insert(5);
    s1.insert(7);
    cout << "The size of the set is: "<<s1.size()<<endl;
    s1.insert(4);
    s1.insert(1);
    cout << "After inserting 4 and 1, the size of the set is :"<<s1.size()<<endl;
    //printing all the elements using iterators
    unordered_set<int>::iterator itr;
    for(itr = s1.begin(); itr != s1.end(); ++itr) {
        cout << *itr << " ";
        }
        cout << endl;
        //check if an element exists in the set
        if (s1.find(6) == s1.end()){
             cout << "Element 6 does not exist in the set."<<endl;
        }
        else{
            cout << "Element 6 exists in the set."<<endl;
        }
        //count()
        cout << "Does 4 appears in the set (1 for true and 0 for false):"<<s1.count(4)<<endl;
        cout << "Does 10 appears in the set (1 for true and 0 for false):"<<s1.count(10)<<endl;
        s1.erase(4);//removing a single element from the set
        cout<<"Unordered set after erasing 4 : ";
        for(itr = s1.begin(); itr != s1.end(); ++itr) {
        cout << *itr << " ";
        }
        cout << endl;
        s1.clear();//clearing the set
        cout<<"After clear() function : ";
        if(s1.empty()){
            cout<<"Set is empty now!"<<endl;
        }else{
            cout<<"Set is not  empty!"<<endl;
        }  
        return 0;

}

/*
/*
Unordered_set functions:
insert() – to insert an element in the unordered set.

size() – returns the number of elements present in the unordered set.

begin() – return an iterator pointing to the first element in the unordered set.

end() – returns an iterator to the theoretical element after the last element.

count() – it returns 1 if the element is present in the container otherwise 0.

clear() – deletes all the elements in unordered set.

find() – to search an element in the unordered set.

erase() – to delete a single element or elements between a particular range.

size() – returns the size of the unordered set.

empty() – to check if the unordered set is empty or not.

cbegin() – it refers to the first element of the unordered set.

cend() – it refers to the theoretical element after the last element of the unordered set.

bucket_size() – gives the total number of elements present in a specific bucket in an unordered set.

emplace() – to insert an element in the unordered set.

max_size() – the maximum elements an unordered_set can hold.

max_bucket_count() – to check the maximum number of buckets an unordered set can hold.
*/