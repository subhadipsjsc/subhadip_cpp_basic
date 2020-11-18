#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle
{
public:
    string brand = "Ford";
    void myFunction()
    {
        cout << "Some content in parent class." << endl;
    }
};

// Derived class
class Car : public Vehicle
{
public:
    string model = "Mustang";
};

/*
* Multilevel Inheritance:
*/ 

class RacingCar : public Car
{
};

int main()
{
    Car myCar;
    myCar.myFunction();
    cout << myCar.brand + " " + myCar.model << endl;

    RacingCar rCar;
    rCar.myFunction();
    return 0;
}
