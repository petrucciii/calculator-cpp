#include <iostream>
#include "../math/PI.h"

using namespace std;


float doPI() {
    int x;

    cout << "Type a number: ";
    cin >> x; 

    return PI(x);
}