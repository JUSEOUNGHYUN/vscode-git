#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    string a;
    cin>>a;

    sort(a.begin(), a.end(), greater<char>());

    cout<<a;

    
}