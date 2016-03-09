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
public:
    static void sort(T* list, int length)
    {
        bool swapped;

        do
        {
            swapped = false;

            for (int i = 1; i < length; ++i)
            {
                if (list[i - 1] > list[i])
                {
                    T tmp = list[i - 1];
                    list[i - 1] = list[i];
                    list[i] = tmp;
                    swapped = true;
                }
            }
        }
        while (swapped);
    }
};

#endif //SORTING_ALGORITHMS_BUBBLESORT_HPP
