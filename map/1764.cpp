#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    map<string, int> ma;
    vector<string> vec;

    int a,b;
    cin>>a>>b;

    for(int i=0; i<a+b; i++){
        string str;
        cin>>str;
        ma[str]++;  // 1111221  keypoint
        if(ma[str]>1){
            vec.push_back(str);
        }
    }

    sort(vec.begin(), vec.end());

    cout<<vec.size()<<"\n";

    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<"\n";
    }

    return 0;
}

//ma[str]++ ==== 
/*
string 1
asdf 1
asdf 2
clinton 1
clinton 2
vec 1
vec 2
st 1
fd 1
*/