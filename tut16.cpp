#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
    }
// This will not swap a and b
int swap(int a, int b){ //temp a b
    int temp = a;       //4    4 5
    a = b;              //4    5 5
    b = temp;           //4    5 4
}

//Call by reference using Pointers
void swapPointer(int* a,int* b){ //temp a b
    int temp = *a;               //4    4 5
    *a = *b;                     //4    5 5
    *b = temp;                   //4    5 5
}

//Call by reference using C++ reference Variables
// void swapReferenceVar(int &a,int &b){ //temp a b
//     int temp = a;                     //4    4 5
//     a = b;                            //4    5 5
//     b = temp;                         //4    5 5
// }

//Call by reference using C++ reference Variables
int & swapReferenceVar(int &a,int &b){ //temp a b
    int temp = a;                       //4    4 5
    a = b;                              //4    5 5
    b = temp; 
    return a;                           //4    5 5
}
int main()
{
    int x = 4, y = 5;
    // cout<<"The sum of 4 and 5 is "<<sum(a,b);
    cout<<"The value of x is "<<x<<" and the values of y is "<<y<<endl;
    // swap(x, y); //This will not swap a and b
    // swapPointer(&x,&y); //This will swap a and b using pointer reference
    // swapReferenceVar(x,y); //This will swap a and b using reference variables
    swapReferenceVar(x,y) = 766; //This will swap a and b using reference variables
    cout<<"The value of x is "<<x<<" and the values of y is "<<y<<endl;
    // swap(a,b);
    return 0;
}