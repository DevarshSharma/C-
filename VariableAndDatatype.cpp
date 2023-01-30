/* 
1. int, double, float, char, bool, void, auto and so on.
2. 8 Bits = 1 Byte
3. Binary, Octal and Hexadecimal number system.
4. 0x represents hexadecimal number.
5. 0 represents octal system. 
*/

#include <iostream>
using namespace std;
int main()
{
    int n1=15; //Decimal 
    int n2=017; //Octal
    int n3=0x0f; //Hexadecimal
    int n4=0b00001111; //Binary - C++14

    cout<<n1<<endl;
    cout<<n2<<endl;
    cout<<n3<<endl;
    cout<<n4<<endl;

    return 0;
}
