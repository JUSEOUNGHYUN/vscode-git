#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {

    string str,str1;
    cin>>str>>str1;

    string strmin = regex_replace(str, regex("6"), "5");
    string strmin2 = regex_replace(str1, regex("6"), "5");

    string strmax = regex_replace(str, regex("5"), "6");
    string strmax2 = regex_replace(str1, regex("5"), "6");

    int a = stoi(strmin) + stoi(strmin2);
    int b = stoi(strmax) + stoi(strmax2);

    cout<<a<<" "<<b;
}   