#include<iostream>  
  
using namespace std; 
  
int main() 
{ 
    //--- arrays are fixed length 
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars << endl; // give reference point of array
    cout << cars[0] << endl; 

    /*
    * if we omit size of array : it will automatically size of elements that are inserted into it
    * in the example : size of array is always 3
    */
    string cars2[] = {"abc", "efg", "ijk"}; 



    //-------- we can loop through array ----------------//
    for(int i = 0; i < 4; i++) {
        cout << cars[i] << endl;
    }
      
    return 0; 
} 