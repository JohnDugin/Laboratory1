#include <iostream>
#include <fstream>

using namespace std;

/*Объявление структур*/

/*Не упорядоченная, с выравниванием*/
struct StructFirst{
    bool Bool;
    int Int;
    short Short;
    double Double;
};

/*Упорядоченная, с выравниванием*/
struct StructSecond{
    bool Bool;
    short Short;
    int Int;
    double Double;
};

/*Не упорядоченная, без выравнивания*/
#pragma pack(push,1)
struct StructThird{
    double Double;
    bool Bool;
    int Int;
    short Short;
};
#pragma pack(pop)

/*Упорядоченная, без выравнивания*/
#pragma pack(push,1)
struct StructFourth{
    bool Bool;
    short Short;
    int Int;
    double Double;
};
#pragma pack(pop)

int main(){

    /*Вывод*/
    StructFirst structFirst;
    cout << "Struct 1:\n";
    cout << "Size - bool: " << sizeof(structFirst.Bool) << " - " << &structFirst.Bool<< "\n";
    cout << "Size - short: " << sizeof(structFirst.Short) << " - " << &structFirst.Short << "\n";
    cout << "Size - int: " << sizeof(structFirst.Int) << " - " << &structFirst.Int << "\n";
    cout << "Size - double: " << sizeof(structFirst.Double) << " - " << &structFirst.Double << "\n";
    cout << "Real size of StructFirst: " << sizeof(structFirst) << "\n\n";

    StructSecond structSecond;
    cout << "Struct 2:\n";
    cout << "Size - bool: " << sizeof(structSecond.Bool) << " - " << &structSecond.Bool << "\n";
    cout << "Size - short: " << sizeof(structSecond.Short) << " - " << &structSecond.Short << "\n";
    cout << "Size - int: " << sizeof(structSecond.Int) << " - " << &structSecond.Int << "\n";
    cout << "Size - double: " << sizeof(structSecond.Double) << " - " << &structSecond.Double << "\n";
    cout << "Real size of StructSecond: " << sizeof(structSecond) << "\n\n";

    StructThird structThird;
    cout << "Struct 3:\n";
    cout << "Size - bool: " << sizeof(structThird.Bool) << " - " << &structThird.Bool << "\n";
    cout << "Size - short: " << sizeof(structThird.Short) << " - " << &structThird.Short << "\n";
    cout << "Size - int: " << sizeof(structThird.Int) << " - " << &structThird.Int << "\n";
    cout << "Size - double: " << sizeof(structThird.Double) << " - " << &structThird.Double << "\n";
    cout << "Real size of StructThird: " << sizeof(structThird) << "\n\n";

    StructFourth structFourth;
    cout << "Struct 4:\n";
    cout << "Size - bool: " << sizeof(structFourth.Bool) << " - " << &structFourth.Bool << "\n";
    cout << "Size - short: " << sizeof(structFourth.Short) << " - " << &structFourth.Short << "\n";
    cout << "Size - int: " << sizeof(structFourth.Int) << " - " << &structFourth.Int << "\n";
    cout << "Size - double: " << sizeof(structFourth.Double) << " - " << &structFourth.Double << "\n";
    cout << "Real size of StructFourth: " << sizeof(structFourth) << "\n\n";

    return 0;
}
