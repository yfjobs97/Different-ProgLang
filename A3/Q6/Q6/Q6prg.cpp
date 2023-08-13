#include <iostream>

using namespace std;


int main()
{
    /*setup 2d array*/
    int arr[100][100];
    for (int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            arr[i][j] = j;
        }
    }
    /*Reference using subscript*/
    for (int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            cout << arr[i][j] << endl;
        }
    }
    /*Reference using pointer*/
    int* pointer = (int*)arr;
    for (int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            cout << *(pointer + (((i * 100) + j))) << endl; //As int pointer increment in c++, in goes in unit of int.
        }
    }
    cout << "Process finished!" << endl;
    return 0;
}
