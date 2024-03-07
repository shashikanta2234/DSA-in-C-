#include<iostream>
#include<iterator>
#include<map>
using namespace std;
int main(){
    map<int,int> m;
    m.insert({1,3});
    m.insert({2,4});
    cout<<"Size of the map is :"<<m.size()<<endl;
    //To print all elements in a map using an iterator
    cout<<"Elements are : "<<endl;
    map<int,int>::iterator it;
    for(it=m.begin();it!=m.end();++it){
        cout<<(*it).first<<" "<<(*it).second<<endl;
}

        if(m.find(1)!=m.end()){
            cout<<"Element 1 exists in the map."<<endl;
        }else{
            cout<<"Element 1 does not exist in the map."<<endl;
        }
        m.erase(2);//Erasing element with key 2 from the map
        cout<<"After erasing Element 2: "<<endl;
        for(it=m.begin();it!=m.end();++it){
            cout<<(*it).first<<" "<<(*it).second<<endl;
        }
return 0;
}