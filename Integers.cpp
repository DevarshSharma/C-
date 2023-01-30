/*
1. Integer occupies 4 bytes in memory.
2. Braced'{}', Functional'()' and Assignment'=' are the Initialization for integers.
*/

#include <iostream>
using namespace std;
int main()
{
    //Braced initialization
    
    int elephant_count; //Contains any value that is understandable by computer
    int lion_count{}; //Initializes to zero
    int dog_count{10}; //Initializes to 10
    int cat_count{15}; //Initializes to 15
    
    //Can use expression as initializer
    int domesticated_animals {dog_count + cat_count};

    /*
    Functional and Assignment initialization will print 2

    int narrowing_conversion{2.9}; //Problem 
    cout<<"Narrowing Conversion:"<<narrowing_conversion<<endl;
    */
    
    // Output
    cout<<"Elephant Count:"<<elephant_count<<endl;
    cout<<"Lion Count:"<<lion_count<<endl;
    cout<<"Dog Count:"<<dog_count<<endl;
    cout<<"Cat Count:"<<cat_count<<endl;
    cout<<"Domesticated Animals:"<<domesticated_animals<<endl;

    cout<<"size of int:"<<sizeof(int)<<endl;
    cout<<"size of elephant_count:"<<sizeof(elephant_count)<<endl;

    return 0;
}
