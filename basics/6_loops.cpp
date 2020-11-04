#include <iostream>
using namespace std;

int main()
{

    /**
     * while loop :
     * will not be executed if the condition is false
    */
    int i = 0;
    while (i < 5){
        cout << i << "\n";
        i++;
    }

    /**
     * do/while loop :
     * will always be executed at least once, even if the condition is false
    */
    int j = 0;
    do {
        cout << i << "\n";
        j++;
    }
    while (j < 5);

    /*
    * gfeneral For loop 
    */
    for (int x = 0; x < 5; x ++) {
        cout << x << "\n";
    }


    /*
    * The break statement can also be used to jump out of a loop.
    */
    for (int y = 0; y < 10; y++) {
        if (y == 4) { break; }
        cout << y << "\n";
    }


    /*
    * The continue statement breaks one iteration (in the loop), if a specified condition occurs
    * in short : The continue statement  skips one iteration (in the loop) 
    */
    for (int i = 0; i < 10; i++) {
        if (i == 4) { continue;}
        cout << i << "\n";
    }

    return 0;
}
