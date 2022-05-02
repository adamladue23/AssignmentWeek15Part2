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

int main() {

    int a = 10;
    float b = 2.36f;
    double c = 5.468416;

    cout << "Half values of : \n";
    cout << "\t" << a << " : " << half(a) << "\n";
    cout << "\t" << b << " : " << half(b) << "\n";
    cout << "\t" << c << " : " << half(c) << "\n";
}