#include <iostream>
#include <string>

using namespace std;

int main() {

    string str;
    cin>>str;

    int len=(int)str.length();

    int cnt=0;

    for(int i=0; i<len; i++){
        
        if(str[i]=='='){
            if(str[i-1]=='c'||str[i-1]=='s'){
                ++cnt;
            }
            else if(str[i-1]=='z'){
                if(i==1){
                    ++cnt;
                }
                else if(str[i-2]=='d'){
                    cnt+=2;
                }
                else{
                    ++cnt;
                }
            }
        }

        else if(str[i]=='j'){
            if(str[i-1]=='n'||str[i-1]=='l'){
                ++cnt;
            }
        }
        else if(str[i]=='-'){
            if(str[i-1]=='d'||str[i-1]=='c'){
                ++cnt;
            }
        }
    }
        cout<<str.length()-cnt;
}
