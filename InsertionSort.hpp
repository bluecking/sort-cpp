/**
 * InsertionSort.hpp
 *
 *  @date   09.03.16
 *  @author Benjamin Lücking <mail@bluecking.de>
 */

#ifndef SORTING_ALGORITHMS_INSERTIONSORT_HPP
#define SORTING_ALGORITHMS_INSERTIONSORT_HPP

template<typename T>
class InsertionSort
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
        for (int i = 0; i < length - 1; ++i)
        {
            // Take next element
            int j = i + 1;

            // Insert next element to the correct position
            // at the beginning of the array.
            while (j > 0 && (*cmpFunc)(list[j], list[j - 1]))
            {
                swap(list[j], list[j - 1]);
                --j;
            }
        }
    }
};

#endif //SORTING_ALGORITHMS_INSERTIONSORT_HPP