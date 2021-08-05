#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(const string &s1, const string &s2){
    if(s1.size()==s2.size()){
        return s1<s2;
    }
    return s1.size()<s2.size();
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    vector<string> v;

    int n;
    cin>>n;

    string s;

    for(int i=0; i<n; i++){
        cin>>s;
        v.push_back(s);
    }

    vector<string>::iterator iter;
    vector<string>::iterator end_iter;

    sort(v.begin(), v.end(), compare);

    end_iter=unique(v.begin(), v.end()); //중복 제거

    for(iter=v.begin(); iter!=end_iter; ++iter){
        cout<<*iter<<"\n";
    }
}