#pragma once
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include "OOPCurs4HSF1.h"
#include "OOPCurs4HSF2.h"
#include "OOPCurs4HSF3.h"

using namespace std;

void test1()
{
    cout << "Test1 started\n";
    double arra[] = { 1.2, 2.3, 3.3 };
    int begin = 0;
    int end = 2;
    std::cout << "Summe aller Elementen der gegebenen Array: " << function<double>(arra, begin, end) << "\n";
    cout << "Test1 finished\n";
}

void test2()
{
    cout << "Test2 started\n";
    double arra[] = { 1.2, 2.3, 3.3 };
    int begin = 0;
    int end = 2;
    std::cout <<"Lambda_Summe aller Elementen der gegebenen Array: "<< lambda_function<double>(arra, begin, end) << "\n";
    cout << "Test2 finished\n";
}

void test3()
{
    cout << "Test3 started\n";
    Shape SH("Dreieck", 3.0);
    Shape DH("Romb", 4.0);

    std::vector<Shape> hey = { SH, DH };

    for (vector<Shape>::iterator it = hey.begin(); it != hey.end(); ++it)
    {
        std::cout << "Flache bevor Anderung: " << (*it).getFlache() << "\n";
    }

    const double x = 2.0;
    apply(hey, multiplier, x);


    for (vector<Shape>::iterator it = hey.begin(); it != hey.end(); ++it)
    {   
        double now = (*it).getFlache();
        std::cout << "Flache nach Anderung: " << now << "\n";
    }
    cout << "Test3 finished\n";
}

void test4()
{
    cout << "Test4 started\n";
    Shape SH("Dreieck", 3.0);
    Shape DH("Romb", 4.0);

    std::vector<Shape> hey = { SH, DH };

    for (vector<Shape>::iterator it = hey.begin(); it != hey.end(); ++it)
    {
        string result = (*it).transformer();
        cout << "String Form der gegebene Shape Class: " << result << "\n";
    }

    cout << "Test4 finished\n";
}
