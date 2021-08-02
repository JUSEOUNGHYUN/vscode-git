#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> v;

    int a;

    for(int i=0; i<7; i++){
        cin>>a;
        v.push_back(a);
    }
    
    sort(v.begin(), v.end(), greater<int>());

    cout<<v[0]<<"\n";
    cout<<v[1];
}