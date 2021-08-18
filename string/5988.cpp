#include <iostream>
#include <string>

using namespace std;

int main() {

    int n;
    cin>>n;

    string str;

    for(int i=0; i<n; i++){
        cin>>str;

        if(str[str.length()-1]%2==0){
            cout<<"even"<<"\n";
        }
        else{
            cout<<"odd"<<"\n";
        }
        
    }
    return 0;
}