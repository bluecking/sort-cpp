#include <iostream>
#include "InsertionSort.hpp"
#include "SelectionSort.hpp"
#include "BubbleSort.hpp"

using std::cout;
using std::endl;

bool compareInts(const int& a, const int& b)
{
    return a < b;
}

int main(int argc, char** argv)
{
    int list[] = {20, 8, 1, 6, 13, 11, 2, 18, 16, 15, 19, 3, 10, 9, 12, 14, 17, 7, 4, 5};
    int length = sizeof(list) / sizeof(list[0]);

//    SelectionSort<int>::sort(list, length, compareInts);
//    BubbleSort<int>::sort(list, length, compareInts);
    InsertionSort<int>::sort(list, length, compareInts);

    for (int i = 0; i < length; ++i)
    {
        cout << list[i] << " ";
    }

    cout << endl;

    return 0;
}