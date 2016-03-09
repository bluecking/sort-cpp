#include <iostream>
#include "BubbleSort.hpp"
#include "SelectionSort.hpp"

using std::cout;
using std::endl;

int main(int argc, char** argv)
{
    int list[] = {20, 8, 1, 6, 13, 11, 2, 18, 16, 15, 19, 3, 10, 9, 12, 14, 17, 7, 4, 5};
    int length = sizeof(list) / sizeof(list[0]);

    SelectionSort<int>::sort(list, length);

    for (int i = 0; i < (sizeof(list) / sizeof(list[0])); ++i)
    {
        cout << list[i] << " ";
    }

    cout << endl;

    return 0;
}