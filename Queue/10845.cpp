#include <iostream>
#include <queue>

using namespace std;

int main() {

    int test;
    cin>>test;

    string str;

    queue<int> qu;

    for(int i=0; i<test; i++){
        cin>>str;
        if(str=="push"){
            int n;
            cin>>n;
            qu.push(n);
        }

        else if(str=="pop"){
            if(!qu.empty()){
                cout<<qu.front()<<"\n";
                qu.pop();
            }
            else{
                cout<<"-1\n";
            }
        }

        else if(str=="size"){
            cout<<qu.size()<<"\n";
        }

        else if(str=="empty"){
            if(!qu.empty()){
                cout<<"0"<<"\n";
            }
            else{
                cout<<"1"<<"\n";
            }
        }

        else if(str=="front"){
            if(!qu.empty()){
                cout<<qu.front()<<"\n";
            }
            else{
                cout<<"-1\n";
            }
        }

        else if(str=="back"){
            if(!qu.empty()){
                cout<<qu.back()<<"\n";
            }
            else{
                cout<<"-1\n";
            }
        }
    }
    return 0;
}