#include <iostream>
using namespace std;
//std::cout Printing data to the console(terminal)
//std::cin Reading data from the terminal
//std::cerr Printing errors to the console
//std::clog Printing log messages to the console


int main()
{
int age;
string name;

//Code 1
cout<<"Please type in your last name:"<<endl;
cin>>name;

cout<<"Please type in your age:"<<endl;
cin>>age;

cout<<"Hello "<< name <<"! You are "<< age <<" years old. "<<endl;


//Code 2
string Name;
int age1;
cout<<"Type your first name and age, (separated by space)"<<endl;
cin >> Name >> age1;
cout<<"Hello "<<Name<<"! You are "<<age1<<" years old."<<endl;

//Code 3
string Name1;
int age2;
cout<<"Please type in your full name and age"<<endl;
getline(cin,Name1);
cin>>age2;
cout<<"Hello "<<Name1<<"! You are "<<age2<<" years old."<<endl;


return 0;
}
