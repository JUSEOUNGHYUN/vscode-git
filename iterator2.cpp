#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main() {

    vector<int> ar = {1,2,3,4,5};

    vector<int>::iterator ptr = ar.begin();
    vector<int>::iterator ftr = ar.end();

    auto it = next(ptr,3);
    auto it1 =prev(ftr,3);

    cout<<*it<<" "<<"\n";
    cout<<*it1<<" ";
}