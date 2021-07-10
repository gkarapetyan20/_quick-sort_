//#include <bits/stdc++.h>
#include "sort.hpp"
using namespace std;
void quickSort( int arr[], int low, int high)
{

    if (low < high)
    {

       int pi=parti(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


