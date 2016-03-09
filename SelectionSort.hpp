/**
 * SelectionSort.hpp
 *
 *  @date   09.03.16
 *  @author Benjamin Lücking <mail@bluecking.de>
 */

#ifndef SORTING_ALGORITHMS_SELECTIONSORT_HPP
#define SORTING_ALGORITHMS_SELECTIONSORT_HPP

template<typename T>
class SelectionSort
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
            // The next element is set as the initial minimum
            T* minimum = list + i + 1;

            // Check if the remaining elements are smaller than the initial minimum
            for (int j = i + 2; j < length; ++j)
            {
                if ((*cmpFunc)(list[j], *minimum))
                {
                    minimum = list + j;
                }
            }

            // Only swap selection with minimum, if selection is greater
            if ((*cmpFunc)(*minimum, list[i]))
            {
                swap(*minimum, list[i]);
            }
        }
    }
};

#endif //SORTING_ALGORITHMS_SELECTIONSORT_HPP
