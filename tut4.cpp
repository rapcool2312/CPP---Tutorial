#include<iostream>
using namespace std;

int glo = 6;

void sum(){
    int a;
    cout<<glo;
}
int main(){
    int a = 14;
    int b = 15;
    float pi = 3.14;
    char c = 'c';
    bool is_true = true;
    bool is_false = false;
    int glo = 5;
    glo = 78;
    // cout<<"The value of pi: "<<pi<<"\nThe value of a: "<<a<<"\nThe value of b: "<<b<<"\nThe value of c: "<<c;
    
    sum();
    cout<<glo;
    // cout<<is_true;
    // cout<<"\n"<<is_false;
    return 0;

}