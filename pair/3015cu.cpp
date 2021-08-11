#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compare(pair <string, int> a, pair <string, int> b){
    return a.second>b.second;
}

int main() {

    int n,a;
    cin>>n>>a;


    vector<pair<string, int>> v;

    for(int i=0; i<n; i++){
        string str;
        int score;

        cin>>str>>score;
        v.push_back(make_pair(str,score));
    }

    sort(v.begin(), v.end(), compare);

    for(int i=0; i<a; i++){
        cout<<v[i].first<<"\n";
    }
}