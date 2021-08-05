#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main() {

    vector<int>arr={1,2,3,4,5};
    vector<int>arr1={10,20,30};

    vector<int>::iterator ptr = arr.begin();

    advance(ptr, 3);

    copy(arr1.begin(), arr1.end(), inserter(arr,ptr));

    for(int &x : arr)
    cout<<x<<" ";
}