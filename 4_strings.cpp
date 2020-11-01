#include<iostream>  
  
using namespace std; 
  

int main() 
{ 
    string firstName = "John ";
    string lastName = "Doe";
    
    /*
    * Append vs + : for string operation
    * The major difference between the two, is that the append() function is much faster. 
    */
    string fullName1 = firstName +lastName;
    cout << fullName1 <<endl;

    string fullName2 = firstName.append(lastName);
    cout << fullName1 <<endl;

    
    
    
    string x = "10";
    string y = "20"; // will send error  if used  : int y = 20;
    string z = x + y; 
    cout << z <<endl;
     
    /*
    *  size() is just an alias of length()
    */
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "string length: " << txt.length() <<endl;
    cout << "string length: " << txt.size() <<endl;



    /**
     * Accessing character inside a string
    */
    string myString = "Hello";
    cout << myString[0] <<endl;
    cout << myString[1] <<endl;
    cout << myString[2] <<endl;
    cout << myString[3] <<endl;
    cout << myString[4] <<endl;


    /**
     * we can change perticular character inside a string
    */
    string myString2 = "Hello";
    myString2[0] = 'J';
    cout << myString2 << endl;

    
    /**
     * for multi world , or to use tabs , white space etc , use "getline"
    */
    string yyyy;
    cout << "Type your full name: ";
    getline (cin, yyyy);
    cout << "Your name is: " << yyyy << endl;



    /**
     * User Input Strings : it will not 
     * it will only print single word 
     * cin considers a space (whitespace, tabs, etc) as a terminating character, 
    */
    string xxxx;
    cout << "Type your first name: ";
    cin >> xxxx; // get user input from the keyboard
    cout << "Your name is: " << xxxx << endl;



    return 0; 
} 