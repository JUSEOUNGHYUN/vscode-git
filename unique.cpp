#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool myfunction (int i, int j){
    return(i==j);
}

int main() {

    int myints[]={10,20,20,20,30,30,20,20,10};
    vector<int> v(myints, myints+9);

    vector<int>::iterator it;
    it = unique(v.begin(), v.end());

    v.resize(distance(v.begin(),it));

    unique(v.begin(),v.end(),myfunction);

    for(it=v.begin(); it!=v.end(); ++it)
    cout<<" "<<*it;
    cout<<"\n";

    return 0;
}