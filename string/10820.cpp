#include <iostream>
#include <string>

using namespace std;

int main() {

    for(int i=1; i<=100; i++){

    string str;
    getline(cin,str);

    if(str.size()==0){
        break;
    }

    int cnt=0;
    int cnt1=0;
    int cnt2=0;
    int cnt3=0;

    for(int i=0; i<str.length(); i++){
        char c=str[i];

        if(isupper(c)){
            cnt++;
        }
        else if(islower(c)){
            cnt1++;
        }
        else if(isspace(c)){
            cnt2++;
        }
        else if(isdigit(c)){
            cnt3++;
        }
    }

    cout<<cnt1<<" "<<cnt<<" "<<cnt3<<" "<<cnt2<<"\n";

    }

}