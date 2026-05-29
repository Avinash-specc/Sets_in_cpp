#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> set1;
    set1.insert(1);
    set1.insert(5);
    set1.insert(3);
    set1.insert(4);
    for(auto value:set1){
        cout<<value<<" ";
    }cout<<endl;


    //Size(), max_size() --> max no. of elements set can hold
    // empty() --> Returns True if empty else false
    // clear() --> removes all elements from set
    // find() --> returns the same element if present, else returns end iterator
    //Count() --> Returns no. of occurences of an element
    //lower_bound() --> returns element if present, else returns just greater value
    //upper_bound() --> returns the next greater value (strict checking always returns the greater value )
    if(set1.find(4)!= set1.end()){
        cout<<"Value is present."<<endl;
    }
    else{
        cout<<"Value is not present."<<endl;
    }

    //rbegin() --> returns iterator to first element of set in reverse order
    //rend() --> return iterator to position after last element in reverse order
    

    return 0;
}