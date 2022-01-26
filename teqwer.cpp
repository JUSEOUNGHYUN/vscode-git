#include <iostream>
#include <string>

using namespace std;

int main() {

    string str;
    
    while(1){
        getline(cin, str);
        if(str=="#"){
            break;
        }
        
    

    int len = str.length();

    int cnt=0;

    for(int i=0; i<len; i++){
        char c=str[i];

        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
            cnt++;
        }
    }

    cout<<cnt<<"\n";
    }
}