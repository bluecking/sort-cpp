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
public:
    static void sort(T* list, int length)
    {
        for (int i = 0; i < length - 1; ++i)
        {
            // Take next element
            int j = i + 1;

            // Insert next element to the correct position
            // at the beginning of the array.
            while (j > 0 && list[j - 1] > list[j])
            {
                T tmp = list[j];
                list[j] = list[j - 1];
                list[j - 1] = tmp;
                --j;
            }
        }
    }
};

#endif //SORTING_ALGORITHMS_INSERTIONSORT_HPP