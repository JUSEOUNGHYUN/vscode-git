#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool cmp(pair<pair<string, int>, pair<int, int>> a, pair<pair<string, int>, pair<int, int>> b){
    if(a.first.second==b.first.second){
        return a.second.first<b.second.first;
        if(a.second.first==b.second.first){
            return a.second.second<b.second.second;
        }
    }
    else{
        return a.first.second<b.first.second;
    }

}

int main() {

    int test;
    cin>>test;

    vector<pair<pair<string, int>, pair<int, int>>> v(test);

    for(int i=0; i<test; i++){
        cin>>v[i].first.first>>v[i].first.second>>v[i].second.first>>v[i].second.second;
    }

    sort(v.begin(), v.end(), cmp);

    for(int i=0; i<v.size(); i++){
        cout<<v[i].first.first<<" "<<v[i].first.second<<" "<<v[i].second.first<<" "<<v[i].second.second<<"\n";
    } 

    return 0;
}