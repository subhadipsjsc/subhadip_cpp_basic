#include <iostream>
using namespace std;

class MyClass {
  // By default, all members of a class are private if you don't specify an access specifier:
  int a;   // Private attribute
  
  public:    // Public access specifier
    int x;   // Public attribute
  private:   // Private access specifier
    int y;   // Private attribute

  /**
   * The meaning of Encapsulation, is to make sure that "sensitive" data . 
   * we can provide public get and set methods
  */
  public:
    //--------- Setter --------------
    void setA(int s) {
      this->a = s;
    }
    void setY(int s) {
      this->y = s;
    }
    //---------- Getter -------------
    int getA() {
      return this->a;
    }
    int getY() {
      return this->y;
    }
};

int main() {
  MyClass myObj;
  myObj.x = 25;  // Allowed (x is public)

  //myObj.y = 50;  // Not allowed (y is private)
  myObj.setY(500); // have to use setter to provide value to variable

  //myObj.a= 50;  // Not allowed (y is private)
  myObj.setA(2);  // have to use setter to provide value to variable


  cout << myObj.x<< endl ;
  cout << myObj.getY()<< endl ;
  cout << myObj.getA()<< endl ;
  
  return 0;
}