#include <iostream>
#include <utility>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b){

    if(a.first==b.first){
        return a.second<b.second;

        return a.first<b.first;
    }
}

int main() {

    vector<pair<int, string>> v;

    int n;
    cin>>n;
    int year;
    string name;

    for(int i=0; i<n; i++){
        cin>>year;
        getline(cin, name);

        v.push_back(make_pair(year, name));
    }

    sort(v.begin(), v.end());

    for(int i=0; i<n; i++){
        cout<<"["<<v[i].first<<" "<<v[i].second<<"]"<<"\n";
    }

    
}