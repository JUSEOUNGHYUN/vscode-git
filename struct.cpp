#include <iostream>

using namespace std;

struct Employee{

    short id;
    int age;
    double wage;
};

void printinfomation(Employee employee){

    cout<<"id: "<<employee.id<<"\n";
    cout<<"age: "<<employee.age<<"\n";
    cout<<"wage: "<<employee.wage<<"\n";
}

int main() {

    Employee joe={14,32,24.15};
    Employee frank={15,28,18.27};

    printinfomation(joe);

    cout<<"\n";

    printinfomation(frank);

    return 0;
}