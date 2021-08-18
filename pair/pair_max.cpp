#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int a;
        cin>>a;

        vector<pair<int,string>> v(a);
        int max=0,ans=0;
        for(int i=0; i<a; i++){
            cin>>v[i].first>>v[i].second;
            if(v[i].first>max){
                max=v[i].first;
                ans=i;
            }
        }
        cout<<v[ans].second<<"\n";
    }
}

/*

vector<pair<int,string>> v;
int s;
string str;
cin>>s>>str;
v.push_back(make_pair(s,str))
==============================
vector<pair<int, string>> v;
cin>>v[i].first>>v[i].second;

*/