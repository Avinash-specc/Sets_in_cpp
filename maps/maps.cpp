#include <iostream>
#include <map>
using namespace std;

int main(){
    // STL Containers stores key-value pairs.
    // The elements are stored in ascending/descending order.
    // Maps cannot have duplicate keys.
    // Implemented through BST.
    
    map<int,string> map1 = {{1,"hello"},{2,"World"}};
    //By default order of storing elements is ascending.
    // For Descending order, map<datatype1, datatype2, greater<datatype1>>

    // Iterators are used to traverse over STL containers.

    map1[4] = "Ash";
    map1[3] ="Avi";
    // for(auto element: map1){
    //     cout<<"Key --> "<< element.first<<"  ";
    //     cout<<"Value --> "<<element.second<<endl;
    // }

    // map<int,string>::iterator itr; //without auto

    for(auto itr = map1.rbegin(); itr!=map1.rend();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    return 0;
}