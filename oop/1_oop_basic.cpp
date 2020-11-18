#include <iostream>
#include <string>
using namespace std;

class MyClass
{
public:
  //---- contructor is called automatically , when a object is created
  //----- constructure will have same name as class -----
  MyClass()
  {
    cout << "The constructure created " << endl;
  }

  //---- Attribute or  variables
  int myNum;
  string myString;

  //--- Method/function defined inside the class
  void myMethod()
  {
    cout << "Method1 , which is defined inside class " << endl;
  }

  //--- Method/function defined outside the class
  void myMethod2();
  int speed(int maxSpeed);
};


//--- just name was defined inside class , function / method defination is out sid ethe class
void MyClass::myMethod2()
{
  cout << "method2 , which is defined outside of class" << endl;
}


//--- just name was defined inside class , function / method defination is out sid ethe class
int MyClass::speed(int maxSpeed)
{
  return maxSpeed;
}




int main()
{
  // Create an object of MyClass and set values
  MyClass myObj; //

  myObj.myNum = 15;
  myObj.myString = "Some text";

  // Print values
  cout << myObj.myNum << endl;
  cout << myObj.myString << endl;
  myObj.myMethod();

  myObj.myMethod2();
  int result = myObj.speed(200);
  cout << result << endl;

  return 0;
}
