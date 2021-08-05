#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>

using namespace std;

bool compare(pair <int, string> a, pair <int, string> b){
    return a.first<b.first;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int n;
    cin>>n;

    
    vector<pair<int, string>> v;

    int year;
    string name;

    for(int i=0; i<n; i++){
        cin>>year>>name;
        v.push_back(make_pair(year,name));
        
    }

    stable_sort(v.begin(), v.end(),compare);    //stable_sort : 원래의

    for(int i=0; i<n; i++){
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }

    return 0;
}