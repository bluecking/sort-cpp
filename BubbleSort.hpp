/**
 * BubbleSort.hpp
 *
 *  @date   09.03.16
 *  @author Benjamin Lücking <mail@bluecking.de>
 */

#ifndef SORTING_ALGORITHMS_BUBBLESORT_HPP
#define SORTING_ALGORITHMS_BUBBLESORT_HPP

template<typename T>
class BubbleSort
{
    static void swap(T& a, T& b)
    {
        T tmp = a;
        a = b;
        b = tmp;
    }

public:
    static void sort(T* list, const int length, bool (* cmpFunc)(const T& a, const T& b))
    {
        bool swapped;

        do
        {
            swapped = false;

            for (int i = 1; i < length; ++i)
            {
                if ((*cmpFunc)(list[i], list[i - 1]))
                {
                    swap(list[i], list[i - 1]);
                    swapped = true;
                }
            }
        }
        while (swapped);
    }
};

#endif //SORTING_ALGORITHMS_BUBBLESORT_HPP
