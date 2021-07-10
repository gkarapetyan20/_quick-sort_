#include <bits/stdc++.h>
#include "sort.hpp"

using namespace std;
int parti (int arr[], int low, int high) {
    int pivot = arr[high]; 
    int i = (low - 1);
 
    for (int  j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            inner( arr[i], arr[j] );
        }
    }
    inner (arr[i + 1], arr[high] ) ;
    return (i + 1);
}


