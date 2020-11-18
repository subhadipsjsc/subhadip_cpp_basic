#include <iostream>

using namespace std;

/**
 * GetMax : function can have any type (int , float, double ) as input
 * also that same type ouput result
 * 
 * anyType canbe : int , float, double
*/
template <class anyType>
anyType GetMax(anyType a, anyType b)
{
    return (a > b ? a : b);
}

/**
 * GetMin : can use 2 different custom data type : U and T
 * U can be  int , float or double etc
 * T also can be int, float , double ,etc
*/
template <class T, class U>
T GetMin (T a, U b) {
  return (a<b?a:b);
}

int main()
{

    int i = 5, j = 6, k;
    k = GetMax<int>(i, j);
    cout << k << endl;

    long l = 10, m = 5, n;
    n = GetMax<long>(l, m);
    cout << n << endl;


    int x=10 ,r;
    long z = 8.5;
    /**
     * it will send 8 not 8.5
     * because return type is T , which is first param (int,long) : int
     **/
    r = GetMin<int,long> (x,z); 
    cout << r << endl;


    return 0;
}