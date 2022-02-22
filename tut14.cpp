#include<iostream>
using namespace std;

typedef struct employee{
        int eid; //4
        char favChar; //1
        float salary; //4
    } ep;

union money{
        int rice; //4
        char car; //1
        float pounds; //4
    };

int main()
{
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    // cout<<m1;
    cout<<(m1==1);
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // // cout<<m1.rice;
    // cout<<m1.car;

    // struct employee harry;
    //ep harry; /* After typedef */
    // struct employee shubham;
    // struct employee rohandas;
    // harry.eid = 1;
    // harry.favChar = 'c';
    // harry.salary = 120000000;
    // cout<<"The value is "<<harry.eid<<endl;
    // cout<<"The value is "<<harry.favChar<<endl;
    // cout<<"The value is "<<harry.salary<<endl;

    return 0;
}