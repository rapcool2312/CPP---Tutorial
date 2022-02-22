#include<iostream>
using namespace std;

int main()
{
    /*Loops in C++:
    There are three types of loops in C++:
        1. For Loop
        2. While Loop
        3. Do-While Loop
    */

   /*For loop in C++*/
    //int i=1;
    //cout<<i;
    //i++;

    // Syntax for for loop
    // for(initilization; condition; updation)
    // {
    //     loop body(C++ code);
    // }

    // for (int i = 1; i <= 40; i++)
    // {
    //     cout<<i<<endl;
    // }

    // Example of infinite while loop
    // for(int i = 1;34 <= 40;i++)
    // {
    //     cout<<i<<endl;
    // }

    // While loop in C++
    // Syntax:
    // while(condition)
    // {
    //     C++ statements;
    // }

    // Printing 1 to 40 using while loop
    // int i = 1;
    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }

    // Example of infinite while loop
    // int i=1;
    // while(true){
    //     cout<<i<<endl;
    //     i++;
    // }

    // Do While Loop in C++
    // Syntax:
    // do
    // {
    //     C++ statements;
    // } while (condition);
    
    // Printing 1 to 40 using while loop
    int i = 1;
    do{
        cout<<6*i<<endl;
        i++;
    }
    while(i<=40);
    return 0;
}