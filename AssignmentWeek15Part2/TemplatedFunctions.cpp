// Adam LaDue
// CIS 1202 501
// May 1 2022


#include<iostream>

using namespace std;

template <typename T>


T half(T val) {

    T res;
    res = val / 2;

    if (*typeid(val).name() == 'i') {

        if (res * 2 != val) {
            res++;
        }
    }

    return res;

}
