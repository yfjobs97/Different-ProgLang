#include <iostream>

using namespace std;

int main()
{
    int first = 10;
    int second = 30;
    int third = 20;
    int MAX, MID, MIN;
    //No Nested//
    if(first >= second && second >= third)  //123
    {
        MAX = first;
        MID = second;
        MIN = third;
    }
    else if (first >= second && third >= second) //132
    {
        MAX = first;
        MID = third;
        MIN = second;
    }
    else if(second >= first && first >= third) //213
    {
        MAX = second;
        MID = first;
        MIN = third;
    }
    else if(second >= first && third >= first) //231
    {
        MAX = second;
        MID = third;
        MIN = first;
    }
    else if(third >= first && first >= second) //312
    {
        MAX = third;
        MID = first;
        MIN = second;
    }
    else if(third >= second && second >= first) //321
    {
        MAX = third;
        MID = second;
        MIN = first;
    }
    cout << "Non Nested: "<< endl;
    cout << "MAX = " << MAX << endl;
    cout << "MID = " << MID << endl;
    cout << "MIN = " << MIN << endl;
    /*Nested*/
    if(first >= second)
    {
        if(second >= third )  //123
        {
            MAX = first;
            MID = second;
            MIN = third;
        }
        else if (third > second) //132
        {
            MAX = first;
            MID = third;
            MIN = second;
        }
        else if (third >= first) //312
        {
            MAX = third;
            MID = first;
            MIN = second;
        }
    }
    else
    {
        if(first >= third) //213
        {
            MAX = second;
            MID = first;
            MIN = third;
        }
        else if (third > first) //231
        {
            MAX = second;
            MID = third;
            MIN = first;
        }
        else if (third >= second) //321
        {
            MAX = third;
            MID = second;
            MIN = first;
        }
    }
    cout << "Nested: "<< endl;
    cout << "MAX = " << MAX << endl;
    cout << "MID = " << MID << endl;
    cout << "MIN = " << MIN << endl;
    return 0;
}
