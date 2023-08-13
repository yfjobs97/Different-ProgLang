#include <iostream>

using namespace std;


 void swap1(int &a, int &b) {//pass by reference
 int temp = a;
 a = b;
 b = temp;
 }

 int main() {
     int value = 1, ls[5] = {2, 4, 3, 8, 10};
     swap1(value, ls[0]);
     for(int i = 0; i < 5; i++){
        cout << ls[i] << ", ";
     }
     cout << "Value is:" << value << endl;
     swap1(ls[0], ls[1]);
     for(int i = 0; i < 5; i++){
        cout << ls[i] << ", ";
     }
     cout << "Value is:" << value << endl;
     swap1(value, ls[value]);
     for(int i = 0; i < 5; i++){
        cout << ls[i] << ", ";
     }
     cout << "Value is:" << value << endl;
     return 0;
 }




