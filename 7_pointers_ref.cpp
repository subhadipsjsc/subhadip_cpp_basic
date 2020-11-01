#include <iostream>

using namespace std;

int main()
{
    string food = "Pizza";
    string &meal = food; // reference to food
    string *ptr = &food;

    cout << food << endl;
    cout << meal << endl;
    cout << ptr << endl;

    food = "Another Pizza";

    cout << food << endl;
    cout << meal << endl;
    cout << ptr << endl;

    /**
     *  We can derefence the pointer to get the associate value 
    */

   string accValue = *ptr;
   cout << accValue << endl;


    /**
     * Modify the Pointer Value
     * When we change the pointer's value , it will change the value of the original variable:
    */
    *ptr = "new Pizza";
    cout << *ptr << endl;
    cout << food << endl;

    return 0;
}