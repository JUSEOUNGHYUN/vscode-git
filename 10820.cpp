#include <iostream>
#include <string>


using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    
    for(int i=0; i<100; i++){

    int a=0, b=0, c=0, d=0;
    getline(cin, s);

    if(s.size() == 0)       
    break;

    for(int i=0; i<s.size(); i++){

        if(islower(s[i]))
            a++;
        
        else if(isupper(s[i]))
            b++;
        
        else if(isdigit(s[i]))
            c++;
        
        else if(isspace(s[i]))
            d++;
    }
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";
    }
    return 0;
    }


    

