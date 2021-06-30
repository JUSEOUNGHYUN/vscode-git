#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s;
    vector<int>a;

    for(int i=1; i<=5; i++){

        cin>>s;
        if(s.find("FBI")!=string::npos)
        a.push_back(i);
    }

    if(a.empty())
    cout<<"HE GOT AWAY!";
    else 
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
}