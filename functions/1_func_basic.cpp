#include<iostream>  
  
using namespace std; 
  
void myFunction(string fname) {
  cout << "The name is :" << fname << endl;
}


//--- function with Default argument/Parameter Value
void myFunction2(string country = "Norway") {
  cout << "The country is :" << country << endl;
}

//---- function with a return type
int addByFive(int x) {
  return 5 + x;
}


// Function Pass By Reference
void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
    myFunction("rob"); 
    myFunction2("USA"); 
    myFunction2(); 

    cout << addByFive(3) << endl;


    int firstNum = 10;
    int secondNum = 20;
    cout << "firstNum : " << firstNum << " secondNum : "<< secondNum << endl;
    swapNums(firstNum, secondNum);
    cout << "firstNum : " << firstNum << " secondNum : "<< secondNum << endl;

    return 0;
}