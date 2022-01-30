#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

bool compare(string str, string str1){
    if(str.length()==str1.length()){
        return str<str1;
    }
    return str.length()<str1.length();
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int test;
    cin>>test;

    string str;
    
    vector<string> vec;

    for(int i=0; i<test; i++){
        cin>>str;
        vec.push_back(str);
    }

    vector<string>::iterator iter;
    vector<string>::iterator end_iter;

    sort(vec.begin(), vec.end(), compare);

    end_iter=unique(vec.begin(), vec.end());

    for(iter=vec.begin(); iter!=end_iter; iter++){
        cout<<*iter<<"\n";
    }

    return 0;
}