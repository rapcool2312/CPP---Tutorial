#include<iostream>
using namespace std;

int main()
{
    int marks[4] = {23, 45, 56, 89};
    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[0] = 738;
    mathMarks[0] = 378;
    mathMarks[0] = 578;

    cout<<"These are math marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    // You can change the value of an array
    marks[2] = 455;
    cout<<"These are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    // }

    // Cuick quiz : do the same using while and do-while loops?

    // int i = 0;
    // while(i<4){
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }

    // int i = 0;
    // do{
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }while(i<4);


    // Pointers and arrays

    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p);
    // cout<<"The value of *p is: "<<*p<<endl;
    // cout<<"The value of *(p+1) is: "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is: "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is: "<<*(p+3)<<endl;
    
    
    return 0;
}