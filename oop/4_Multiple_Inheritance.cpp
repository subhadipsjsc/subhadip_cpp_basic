#include <iostream>
using namespace std;

// Base class
class MyClass
{
public:
    void myFunction()
    {
        cout << "Some content in parent class" << endl ;
    }

    void commonFunction()
    {
        cout << "common function in MyClass" << endl ;
    }
};



// Another base class
class MyOtherClass
{
public:
    void myOtherFunction()
    {
        cout << "Some content in another class.\n";
    }

    void commonFunction()
    {
        cout << "common function in MyOtherClass" << endl ;
    }
};


// Derived class
class MyChildClass : public MyClass, public MyOtherClass
{
};

int main()
{
    MyChildClass myObj;
    myObj.myFunction();
    myObj.myOtherFunction();

    /**
     * myObj if created from : MyChildClass
     * MyChildClass is derived from both : MyClass , MyOtherClass
     * but both MyClass , MyOtherClass have commonFunction() method
     * so it will create an error of :  request for member ‘commonFunction’ is ambiguous
    */
    // myObj.commonFunction();   this will create issue for multiple in
    return 0;
}