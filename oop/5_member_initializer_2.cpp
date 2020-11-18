#include <iostream>
#include <string>
using namespace std;

class Example {
    public:
        Example(){
            cout << "Example class constructor without any params" << endl ;
        }

        Example(int x){
            cout << "Example class constructor without any params x =" << x << endl ;
        }
    

};

class Entity {
    private:
        Example m_exp;

    public:
        Entity(){
            this->m_exp = Example(8);
        }
};





class Example2 {
    public:
        Example2(){
            cout << "Example class constructor without any params" << endl ;
        }

        Example2(int x){
            cout << "Example class constructor without any params x =" << x << endl ;
        }
    

};

class Entity2 {
    private:
        Example2 m_exp2;

    public:
        Entity2()
            : m_exp2(Example2(8)) {};
};



int main()
{
    cout << endl ;
    
    Entity e1;
    /**
     * the result will be :
     * 
     * Example class constructor without any params
     * Example class constructor without any params x =8
     * 
     * because : 
     * Line no:20 ::    Example m_exp; => will first initilize the class and 
     *                  called the first constructor in Example class  Example()
     *                  print the first result
     * Line no:24 ::  the constructor will be initialized and 
     *                  called the second constructor in Example class  Example(int x)
     *                  so there is the second line printed in console
     * 
    */
    cout << "-------------------------------------------------" << endl ;

    Entity2 e2;
    /**
     * in this case , as we used member initializer in Entity2 class , so 
     * we get only one class constructor for Example2 , 
     * so only 1 result or contructor calling happen
    */

    return 0; 
}