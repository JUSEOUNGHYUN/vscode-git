#include <iostream>
#include <bitset>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int test;
    cin>>test;

    for(int i=0; i<test; i++){
        int n;
        cin>>n;

        string str = bitset<20>(n).to_string();

        reverse(str.begin(), str.end());

        vector<int> vec;

        for(int i=0; i<str.length(); i++){
            if(str[i]=='1'){
                vec.push_back(i);
            }
        }

        for(int i=0; i<vec.size(); i++){
            cout<<vec[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}