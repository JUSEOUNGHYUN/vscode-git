#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int test;
    cin>>test;

    string str;
    
    vector<char> vec;
    vector<char> sel;

    for(int i=0; i<test; i++){
        cin>>str;
        vec.push_back(str[0]);
    }

    sort(vec.begin(), vec.end());

    int cnt=0;

    for(int i=0; i<test; i++){
        if(vec[i-1]==vec[i]){
            cnt++;
            if(cnt==5){
                sel.push_back(vec[i-1]);
                continue;
            }
            else if(cnt>5){
                continue;
            }
        }
        else{
            cnt=1;
        }
    }

    if(sel.size()!=0){
        for(int i=0; i<sel.size(); i++){
            cout<<sel[i];
        }
    }
    else{
        cout<<"PREDAJA";
    }

    return 0;

}