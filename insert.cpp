#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> set1;
    set1.insert(3);
    set1.insert(2);
    set1.insert(5);

    cout<<set1.size()<<endl;
    set1.insert(3);
    cout<<set1.size()<<endl;
    //size remains same because duplicate value is added
    // and sets contain only unique values.
    return 0;
}