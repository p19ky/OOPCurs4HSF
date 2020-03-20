#pragma once
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>



using namespace std;

template <typename Y>
Y lambda_function(Y arr[], int begin, int end, Y Anfangsw = 0)
{
    vector<Y> vec;
    for (int i = begin; i <= end; i++)
        vec.push_back(arr[i]);

    std::for_each(vec.begin(), vec.end(), [&Anfangsw](Y y) {Anfangsw += y; });

        return Anfangsw;

}
