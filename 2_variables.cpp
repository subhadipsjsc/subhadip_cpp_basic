#include<iostream>  
#include <string>
using namespace std; 
  

int main() 
{ 
    


    /*
        Types of variable :
        
        int - stores integers (whole numbers)
        double - stores floating point numbers
        char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
        string - stores text, such as "Hello World". String values are surrounded by double quotes
        bool - stores values with two states: true or false
    */
   
    int myNum = 5;               // Integer (whole number without decimals)
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    double myDoubleNum = 9.98;   // Floating point number with larger limit than float
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)
    
    cout << myNum << endl; 
    cout << myFloatNum << endl; 
    cout << myDoubleNum << endl; 
    cout << myLetter << endl; 
    cout << myText << endl; 
    cout << myBoolean << endl; 

    /*
        declare more than one variable of the same type
    */
    int x = 5, y = 6, z = 50;
    cout << x + y + z<< endl; 


    /*
        const variable , whoes value can not be override. 
    */
    const int myConstNum = 15; 
    cout << myConstNum << endl;  
    // myNum = 10;  error: assignment of read-only variable 'myNum'
      
    return 0; 
} 