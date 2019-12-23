#include <iostream>
#define n 2

using namespace std;

int main(){
    /*ќбъ€вл€ем одномерный статический массив*/
    int staticArray1[n];

    /*ќбъ€вл€ем двумерный статический массив*/
    int staticArray2[n][n];

    /*ќбъ€вл€ем одномерный динамический массив*/
    int  *dynamicArray1 = new int[n];

    /*ќбъ€вл€ем двумерный динамический массив*/
    int  **dynamicArray2 = new int* [n];
    for (int i = 0; i < n; i++)
        dynamicArray2[i] = new int[n];

    /*¬ывод*/
    cout << "Static Arrary []:\n";
    for(int i = 0; i < n; i ++)
        cout  << "staticArray1[" << i << "] = " << &staticArray1[i] << "\n";

    cout << "\nStatic Arrary [][]:\n";
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cout  << "staticArray2[" << i << "]"  << "[" << j << "] = " << &staticArray2[i][j] << "\n";

    cout << "\nDynamic Arrary []:\n";
    for(int i = 0; i < n; i ++)
        cout  << "dynamicArray1[" << i << "] = " << &dynamicArray1[i] << "\n";

    cout << "\nDynamic Arrary [][]:\n";
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cout  << "dynamicArray2[" << i << "]"  << "[" << j << "] = " << &dynamicArray2[i][j] << "\n";

    /*”даление динамических массивов*/
    for(int i = 0; i < n; i++)
        delete [] dynamicArray2[i];
    delete dynamicArray2;
    delete[] dynamicArray1;
    return 0;
}
