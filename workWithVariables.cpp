#include <iostream>

using namespace std;

/*���������� ���������� ����������*/
int globalOne = 0;
int globalTwo = 0;
int globalThree = 0;

int main(){

    /*���������� �������������� ����������*/
    int automaticOne = 0;
    int automaticTwo = 0;
    int automaticThree = 0;

    /*���������� ������������ ����������*/
    int *dynamicOne = new int[1];
    int *dynamicTwo = new int[1];
    int *dynamicThree = new int[1];

    /*�����*/
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

    /*�������� ������������ ����������*/
    delete dynamicOne;
    delete dynamicTwo;
    delete dynamicThree;
    return 0;
}
