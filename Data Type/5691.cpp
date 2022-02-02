#include <iostream>

using namespace std;

int main() {

    long a,b;
    
    while(true){
        cin>>a>>b;
        if(a==0&&b==0){
            break;
        }
            cout<<a-(b-a)<<"\n";
        
    }

    return 0;
}

// long = -2,147,483,648 to 2,147,483,647
