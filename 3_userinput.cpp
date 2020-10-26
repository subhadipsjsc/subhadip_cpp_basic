#include<iostream>  
  
using namespace std; 
  

int main() 
{ 
    /*
        cout is pronounced "see-out". Used for output, and uses <<
        cin is pronounced "see-in". Used for input, and uses >>
    */

    int x; 
    cout << "Type a number: "; // Type a number and press enter
    cin >> x; // Get user input from the keyboard
    cout << "Your number is: " << x << endl; // Display the input value
    
    return 0; 
} 