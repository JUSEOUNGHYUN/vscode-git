#include <iostream>
#include <string>

using namespace std;

int main() {

    int n;
    int count=0;
    int series=665;

    string str;

    cin>>n;

    while(count!=n){
        series++;

        str=to_string(series);

        if(str.find("666")!=-1){
            count++;    //666->1666->2666->3666->4666->5666->6661->6662->...->7666->
        }
    }

    cout<<series<<"\n";
    return 0;
}