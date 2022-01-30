#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int rev(string str){

    reverse(str.begin(), str.end());
    int result = stoi(str);
    return result;
}

int main() {

    string str1, str2;
    cin>>str1>>str2;

    int sum = rev(str1) + rev(str2);

    string str3 = to_string(sum);

    cout<<rev(str3);

}