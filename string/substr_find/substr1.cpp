#include <iostream>
#include <string>

using namespace std;

int main() {

    string str="We think in  generalities, but we live in details";

    string str2=str.substr(3,7); //3번부터 7개 문자 출력
    size_t pos = str.find("live");
    string str3=str.substr(pos);

    cout<<str2<<"\n"<<str3;
}