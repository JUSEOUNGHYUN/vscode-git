#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair <int,string> a, pair<int, string> b){
    return a.first>b.first;
}

int main() {


    int test;
    cin>>test;

    for(int i=0; i<test; i++){


    int n;
    cin>>n;

    vector<pair<int,string>> v;
    

    for(int i=0; i<n; i++){
        int s;
        string str;
        cin>>s>>str;

        v.push_back(make_pair(s,str));
        sort(v.begin(), v.end(), compare);
    }

    cout<<v[0].second<<"\n";

    }
}