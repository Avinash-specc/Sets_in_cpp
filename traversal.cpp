#include <iostream>
#include <set>
using namespace std;

int main(){
    //Iterator --> for traversing a set
    //Set_name.begin() --> Iterator pointing to the first element of my set
    //Set_name.end() --> Iterator pointing to the position after the last element of Set

    set<int, greater<int>>set1;
    set1.insert(1);
    set1.insert(5);
    set1.insert(3);
    set<int>::iterator itr;
     for(itr = set1.begin(); itr!=set1.end();itr++){
       cout<<*itr<<endl;
     }

    // for(itr = set1.begin(); itr!=set1.end(); itr++){
    //     cout<<*itr<<" ";
    // }
    // for(auto value:set1){
    //     cout<<value<<" "; //another way to do it.
    // }
    return 0;
}