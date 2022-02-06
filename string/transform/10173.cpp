#include <iostream>
#include <algorithm>
#include <string>


using namespace std;

int main() {

    string str;

    while(getline(cin, str)){
        if(str=="EOI"){
            break;
        }

        transform(str.begin(), str.end(), str.begin(), ::tolower);
            if(str.find("nemo")!=-1){
                cout<<"Found\n";
            }
            else{
                cout<<"Missing\n";
            }
    }
    return 0;
}