#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main() {

    int test;
    cin>>test;

    vector<pair<pair<int,int>, pair<int,string>>> v(test);

    for(int i=0; i<test; i++){

        cin>>v[i].second.second>>v[i].second.first>>v[i].first.second>>v[i].first.first;
    }

    sort(v.begin(), v.end());

    
        cout<<v[test-1].second.second<<"\n";
        cout<<v[0].second.second;
    

    return 0;
    


}