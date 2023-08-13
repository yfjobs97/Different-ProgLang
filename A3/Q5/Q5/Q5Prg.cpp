#include <iostream>
//#pragma GCC diagnostic warning "-fpermissive"

using namespace std;

int main()
{
    enum colors {green = 1, red = 2, yellow, black = 10};
    colors mycolor;
    mycolor = static_cast<colors>(red + green);
    cout << mycolor << endl; //1. add two enumerations
    colors c3 = static_cast<colors>(red * black);
    cout << c3 << endl; //2.multiple two enumerations
    colors c4 = static_cast<colors>(11);
    cout << c4 << endl; //3.make out of range
    //4.having same enum value
    enum things {paper = 5, pen = 3, eraser, pencil};
    if(paper == pencil){
        cout << "since paper (" << paper << ") is pencil (" << pencil << "). They are the same." << endl;
    }
    //5.subtract from enumeration
    things mythings = paper;
    mythings = static_cast<things>(mythings - 2);
    cout << mythings << endl;

    mythings = static_cast<things>(paper + 1); //6.reference undeclared enumeration
    cout << mythings << endl;
    mythings = static_cast<things>(mycolor);
    cout << mythings << endl; //7. equate different enum together
    //8.compare different enumeration
    mythings = paper;
    mycolor = black;
    if(mythings < mycolor){
        cout << "mythings (" << mythings << ") is lesser than mycolor(" << mycolor << ")." << endl;
    }
    //9.bitwise OR the enumeration
    mythings = static_cast<things>(mythings | mycolor);
    cout << mythings << endl;

    //10.Bitwise XOR the enumerations of different types
    mythings = static_cast<things>(mythings ^ mycolor);
    cout << mythings << endl;
    return 0;
}
