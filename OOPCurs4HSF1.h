#pragma once
#include <iostream>
#include <algorithm>
#include <numeric>



using namespace std;

template <typename T>
T function(T arr[], int begin, int end, T Anfangsw = 0)
{
    T summe = 0;
    for (int i = begin; i <= end; i++)
        summe += arr[i];

    return summe + Anfangsw;

}