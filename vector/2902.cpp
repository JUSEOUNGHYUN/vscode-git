#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    string str;
    cin>>str;

    vector<char> vec; // 첫번쨰 글자
    vector<char> v; // -뒤에 글자

    // NULL = '\0'

    for(int i=0; i<str.length(); i++){
        vec.push_back(str[0]);
        if(str[i]=='-'){
            v.push_back(str[i+1]);
        }
    }

    cout<<vec[0];

    for(int i=0; i<v.size(); i++){
        cout<<v[i];
    }

    return 0;
}