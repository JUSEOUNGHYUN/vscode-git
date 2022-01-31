#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    string str;
    cin>>str;

    vector<string> vec;

    int len = str.length();

    for(int i=0; i<len; i++){
        vec.push_back(str);
        str.erase(0,1);     // erase(start, end) 범위를 인자를 삭제 
                            // strat이상, end미만의 범위의 인자를 삭제
    }

    sort(vec.begin(), vec.end());

    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<"\n";
    }

    return 0;
}