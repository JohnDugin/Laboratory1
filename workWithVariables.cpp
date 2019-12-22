#include <iostream>

using namespace std;

/*ќбъ€вление глобальных переменных*/
int globalOne = 0;
int globalTwo = 0;
int globalThree = 0;

int main(){

    /*ќбъ€вление автоматических переменных*/
    int automaticOne = 0;
    int automaticTwo = 0;
    int automaticThree = 0;

    /*ќбъ€вление динамических переменных*/
    int *dynamicOne = new int[1];
    int *dynamicTwo = new int[1];
    int *dynamicThree = new int[1];

    /*¬ывод*/
    cout << "Global Variables:\n";
    cout << "&GlobalOne   = " << &globalOne << ";\n";
    cout << "&GlobalTwo   = " << &globalTwo << ";\n";
    cout << "&GlobalThree = " << &globalThree << ";\n\n";

    cout << "Automatic Variables:\n";
    cout << "&AutomaticOne   = " << &automaticOne << ";\n";
    cout << "&AutomaticTwo   = " << &automaticTwo << ";\n";
    cout << "&AutomaticThree = " << &automaticThree << ";\n\n";

    cout << "Dynamic Variables:\n";
    cout << "&DynamicOne   = " << dynamicOne << ";\n";
    cout << "&DynamicTwo   = " << dynamicTwo << ";\n";
    cout << "&DynamicThree = " << dynamicThree << ";\n";

    /*”даление динамических переменных*/
    delete dynamicOne;
    delete dynamicTwo;
    delete dynamicThree;
    return 0;
}
