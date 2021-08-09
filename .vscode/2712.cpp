#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main() {

    int n;
    cin>>n;

    for(int i=0; i<n; i++){

        pair<double, string> a;
        cin>>a.first>>a.second;

        if(a.second=="kg"){
            printf("%.4lf lb\n",a.first*2.2046);
        }

        else if(a.second=="lb"){
            printf("%.4lf kg\n", a.first*0.4536);
        }

        else if(a.second=="l"){
            printf("%.4lf g\n", a.first*0.2642);
        }

        else if(a.second=="g"){
            printf("%.4lf l\n", a.first*3.7854);
        }
    }

    return 0;
}