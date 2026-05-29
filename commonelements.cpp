#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    vector<int>v1(n);
    vector<int>v2(m);

    cout<<"Enter elements of v1: "<<endl;
    for(int i =0; i<n; i++){
        cin>>v1[i];
    }
    cout<<"Enter elements of v2: "<<endl;
    for(int i=0; i<m; i++){
        cin>>v2[i];
    }
    int ans_sum =0;

    set<int> s1;
    for(auto el:v1){
        s1.insert(el);
    }
    for(auto el:v2){
        if(s1.find(el)!=s1.end()){
            ans_sum+=el;
        }
    }

    cout<<"Answer: "<<ans_sum;
    return 0;
}