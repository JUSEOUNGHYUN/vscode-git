#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair <int, int> a, pair<int, int>b){
    if(a.second==b.second){
        return a.first<b.first;
    }
    return a.second<b.second;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    vector<pair<int, int>> v;

    cin>>n;


    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;

        v.push_back(make_pair(x,y));
    }

    sort(v.begin(), v.end(), compare);

    for(int i=0; i<n; i++){
        cout<< v[i].first<<" "<<v[i].second<<"\n";
    }
}