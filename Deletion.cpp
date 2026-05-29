#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> set1;
    set1.insert(2);
    set1.insert(1);
    set1.insert(0);
    set1.insert(44);
    set1.insert(41);
    set1.insert(42);

    cout<<"Size: "<<set1.size()<<endl;

    set1.erase(1);

    // auto itr = set1.begin();
    // advance(itr,3);
    // set1.erase(itr);

    // for(auto value: set1){
    //     cout<<value<<" ";
    // }

    auto start_itr = set1.begin();
    start_itr++;

    auto end_itr = set1.begin();
    advance(end_itr,3);

    for(auto value:set1){
        cout<<value<<" ";
    }cout<<endl; //Initial Set
    set1.erase(start_itr,end_itr); // Important--> value is erased till end_itr-1;
    for(auto value:set1){
        cout<<value<<" ";
    }// Final Set
    cout<<endl;

    return 0;
}