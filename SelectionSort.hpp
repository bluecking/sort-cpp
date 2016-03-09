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
public:
    static void sort(T* list, int length)
    {
        for (int i = 0; i < length - 1; ++i)
        {
            // The next element is set as the initial minimum
            T* minimum = list + i + 1;

            // Check if the remaining elements are smaller than the initial minimum
            for (int j = i + 2; j < length; ++j)
            {
                if (list[j] < *minimum)
                {
                    minimum = list + j;
                }
            }

            // Only swap selection with minimum, if selection is greater
            if (list[i] > *minimum)
            {
                T tmp = list[i];
                list[i] = *minimum;
                *minimum = tmp;
            }
        }
    }
};

#endif //SORTING_ALGORITHMS_SELECTIONSORT_HPP
