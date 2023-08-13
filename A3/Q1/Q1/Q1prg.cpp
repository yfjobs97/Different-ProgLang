#include <iostream>
#include <time.h>

using namespace std;

void declare_static_array();
void declare_array_on_stack();
void declare_array_on_heap();
int main()
{

    clock_t t;
    t = clock();
    for (int i = 0; i < 100000; i++){
        declare_static_array();
    }
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    cout << "Execution time for static array declaration was " << time_taken << " seconds." << endl;

    t = clock();
    for (int i = 0; i < 100000; i++){
        declare_array_on_stack();
    }
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    cout << "Execution time for stack array declaration was " << time_taken << " seconds." << endl;

     t = clock();
    for (int i = 0; i < 100000; i++){
        declare_array_on_heap();
    }
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    cout << "Execution time for heap array declaration was " << time_taken << " seconds." << endl;
    return 0;
}

void declare_static_array(){
    static int static_array[100000] = {};
}

void declare_array_on_stack(){
    int array_on_stack [100000] = {};
}

void declare_array_on_heap(){
    int* array_on_heap = new int [100000];
    delete array_on_heap;
}
