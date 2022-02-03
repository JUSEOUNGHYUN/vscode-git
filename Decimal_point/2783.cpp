#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {

    double a,b;
    cin>>a>>b;

    double ab = (1000/b)*a;

    int test;
    cin>>test;

    double x,y;

    vector<double> vec;

    for(int i=0; i<test; i++){
        cin>>x>>y;
        double sum = (1000/y)*x;
        vec.push_back(sum);
    }

    sort(vec.begin(), vec.end());

    cout<<fixed;
    cout.precision(2);

    if(ab>=vec[0]){
        cout<<vec[0];
    }
    else{
        cout<<ab;
    }
    
    return 0;
}