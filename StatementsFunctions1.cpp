#include <iostream>
using namespace std; //No need to add std in every code for output
int addnumbers(int a, int b)
{
    int sum=a+b;
    return sum;
}

int main()
{
    int x=13; //Statement
    int y=8;

    cout<<"First number: "<<x<<endl; //13
    cout<<"Second Number: "<<y<<endl; //7

    int sum = x+y;
    cout<<"Sum: "<<sum<<endl; //20

    sum=addnumbers(16,9);
    cout<<"Sum: "<< sum <<endl; //25
    
    cout<<"Sum: "<<addnumbers(25,64)<<endl;//89
    return 0;
}