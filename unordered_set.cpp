#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    //values are stored in unordered fashion.
    // unique values, values will be identified by itself, values can't be modified inside set.

    //T.C for search,insertion,deletion is O(1)

    unordered_set<int> s1;

    s1.insert(3);
    s1.insert(1);
    s1.insert(1);
    s1.insert(2);

    for(auto value: s1){
        cout<<value<<endl;
    }


    /*
    Hashing

    --> Load-factor() -> sizeof (unorderedSet/bucket-count)

    --> rehash(x)
    Sets the no. of bucket to x or more 
    O(N) -> avg
    O(N^2) worst
    
    */
    return 0;
}